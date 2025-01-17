#include "ros/ros.h"
#include <boost/bind.hpp>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <time.h>
#include <cmath>
#include <memory>
#include <boost/shared_ptr.hpp>
/*** message header ***/
#include "collision_mode_msg/collision_mode.h"
// stdmsg
#include <std_msgs/UInt8MultiArray.h>
#include <std_msgs/Float64.h>
//codegen
#include "Classification.h"
#include "rtwtypes.h"
#include "Classification_private.h"
#include "limits.h"
#include "Predict.h"
#include "Predict_terminate.h"
// C++
#include <numeric>
#include <functional>
#include <vector>
std::vector<uint8_t> b_BEV_image(60903);
std::vector<double> exe_time_class;
std::vector<double> exe_time_decision;
using namespace collision_mode_msg;

ros::Publisher result_pub;

static Classification Classification_Obj;
Classification::ExtU_Classification_T inputs_;
Classification::ExtY_Classification_T outputs_;



void bevCb(const boost::shared_ptr<const std_msgs::UInt8MultiArray>& bev_image)
{
    ros::Time start = ros::Time::now();
    auto bev_ = bev_image->data;
    float out[13];
    unsigned char input_bev[60903];

    std::memcpy(input_bev,bev_.data(),sizeof(input_bev));

    Predict(input_bev,out);

    std::memcpy(inputs_.out_1_predict , out,sizeof(out));
    Classification_Obj.setExternalInputs(&inputs_);
    Classification_Obj.step();
    outputs_ = Classification_Obj.getExternalOutputs();
    float CM_prob = outputs_.CM_probability;
    double pred_CM_index = outputs_.Predict_CM_index;

    //publish result
    collision_mode msg;
    //std::cerr <<"CM_classification: "<<  pred_CM_index << ", CM_probability:  " << CM_prob << std::endl;
    msg.CM_classification = pred_CM_index;
    msg.CM_probability = CM_prob;
    result_pub.publish(msg);
    ros::Time end = ros::Time::now();
    ros::Duration duration = end- start;
    //ROS_INFO("Classification  Execution Time: %.6f",duration.toSec());

    exe_time_class.push_back(duration.toSec());
    if(exe_time_class.size() == 150) {
            double sum = std::accumulate(exe_time_class.begin()+40,exe_time_class.begin()+140,0.0);
            double avg = sum / 100.0;
            ROS_INFO("Classification Average Execution Time: %.6f",avg);
    }

}


int main(int argc, char** argv)
{
    ros::init(argc, argv, "predict_node");
    ros::NodeHandle nh;

    ros::Subscriber object_sub = nh.subscribe("/data_topic", 1, bevCb);
    result_pub = nh.advertise<std_msgs::Float64>("/result",10);



    ros::spin();
    Predict_terminate();
    return 0;
}

