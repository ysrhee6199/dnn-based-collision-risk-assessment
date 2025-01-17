#include "ros/ros.h"
#include <boost/bind.hpp>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <time.h>
#include <cmath>
#include <message_filters/subscriber.h>
#include <message_filters/time_synchronizer.h>
#include <message_filters/sync_policies/approximate_time.h>

/*** message header ***/
// track
#include "sensor_fusion_msg/FusionTrackArray_v2.h"
// lane
#include "sf_mobileye_lane_msg/FrontVisionLaneArray_PP.h"
// stdmsg
#include <std_msgs/UInt8MultiArray.h>
#include <std_msgs/Float64.h>
//codegen
#include "Subsystem.h"
#include "rtwtypes.h"
#include "Subsystem_private.h"
#include "limits.h"
// C++
#include <numeric>
#include <functional>
double traffic[768];
double lane[14] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};
std::vector<uint8_t> b_BEV_image(60903);
std::vector<double> exe_time;
using namespace sensor_fusion_msg;
using namespace message_filters;
using namespace sf_mobileye_lane_msg;
//using namespace cv;

ros::Publisher BEV_data_pub;
ros::Publisher result_pub;

static Subsystem Subsystem_Obj;
Subsystem::ExtU_Subsystem_T inputs_;
Subsystem::ExtY_Subsystem_T outputs_;
bool new_arrived[2];
// Timer callback function
void timerCallback(const ros::TimerEvent&)
{
    
    if(new_arrived[0] && new_arrived[1]) {
	    new_arrived[0] = false;
	    new_arrived[1] = false;
    }
    else return;
    ros::Time start = ros::Time::now();
    std::memcpy(inputs_.Fusion_Track_out, traffic, sizeof(traffic));
    std::memcpy(inputs_.Front_Vision_Lane, lane, sizeof(lane));
    Subsystem_Obj.setExternalInputs(&inputs_);
    Subsystem_Obj.step();
    outputs_ = Subsystem_Obj.getExternalOutputs();
    std::memcpy(b_BEV_image.data(), outputs_.DSM_uint8, sizeof(outputs_.DSM_uint8));
    std_msgs::UInt8MultiArray msg;
    msg.data = b_BEV_image;
    BEV_data_pub.publish(msg);
    ros::Time end = ros::Time::now();
    ros::Duration duration = end- start;
    exe_time.push_back(duration.toSec());
    if(exe_time.size() == 150) {
	    double sum = std::accumulate(exe_time.begin()+40,exe_time.begin()+140,0.0);
	    double avg = sum / 100.0;
	    ROS_INFO("BEV Average Execution Time: %.6f",avg);
    }

    //ROS_INFO("BEV Execution Time: %.6f",duration.toSec());
}



void laneCb(const FrontVisionLaneArray_PPConstPtr& lanearr) 
{
    new_arrived[0] =true;
    memset(lane,0,sizeof(lane));
    lane[0] = lanearr->left.Measure_View_Start;
    lane[1] = lanearr->left.Measure_View_End;
    lane[2] = lanearr->left.Measure_Confidence;
    lane[3] = lanearr->left.Preprocessing_Curvature_Rate;
    lane[4] = lanearr->left.Preprocessing_Curvature;
    lane[5] = lanearr->left.Preprocessing_Road_Slope;
    lane[6] = lanearr->left.Preprocessing_Distance;
    lane[7] = lanearr->right.Measure_View_Start;
    lane[8] = lanearr->right.Measure_View_End;
    lane[9] = lanearr->right.Measure_Confidence;
    lane[10] = lanearr->right.Preprocessing_Curvature_Rate;
    lane[11] = lanearr->right.Preprocessing_Curvature;
    lane[12] = lanearr->right.Preprocessing_Road_Slope;
    lane[13] = lanearr->right.Preprocessing_Distance;

}




void objectCb(const FusionTrackArray_v2ConstPtr& tracktarr)
{
// Track
    new_arrived[1] = true;
    memset(traffic, 0, sizeof(traffic));
    if(tracktarr->tracks.size()) {
        auto traffic_objects = tracktarr->tracks.size();
        for(int i = 0; i<traffic_objects; i++) {
            traffic[0+(12*i)] = i; 
            traffic[1+(12*i)] = tracktarr->tracks[i].Tracking_Rel_Pos_Y;
	    traffic[2+(12*i)] = tracktarr->tracks[i].Tracking_Rel_Pos_X;
	    traffic[3+(12*i)] = tracktarr->tracks[i].Tracking_Rel_Vel_Y; 
            traffic[4+(12*i)] = tracktarr->tracks[i].Tracking_Rel_Vel_X;
	    traffic[5+(12*i)] = tracktarr->tracks[i].Tracking_Rel_Acc_X; 
            traffic[6+(12*i)] = tracktarr->tracks[i].Measure_Width; // length
            traffic[7+(12*i)] = tracktarr->tracks[i].Measure_Length; // width
	    traffic[8+(12*i)] = tracktarr->tracks[i].Tracking_Heading_Angle;
	    traffic[9+(12*i)] = tracktarr->tracks[i].Motion_Attribute_Shape;
	    traffic[10+(12*i)] = tracktarr->tracks[i].Tracking_Threat_I_LAT;
	    traffic[11+(12*i)] = tracktarr->tracks[i].Tracking_Threat_CP;
        } 
    }
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "decision_node");
    ros::NodeHandle nh;

    ros::Subscriber object_sub = nh.subscribe("/Fusion_Track_v2", 1, objectCb);
    ros::Subscriber lane_sub = nh.subscribe("/front_vision_lanePP", 1, laneCb);

    BEV_data_pub = nh.advertise<std_msgs::UInt8MultiArray>("/data_topic", 1);
    result_pub = nh.advertise<std_msgs::Float64>("/result", 10);

    // Timer to call timerCallback every 50ms (adjust as needed)
    ros::Timer timer = nh.createTimer(ros::Duration(0.05), timerCallback);

    ros::spin();

    return 0;
}

