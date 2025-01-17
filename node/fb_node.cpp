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
// chassis
#include "chassis_msg/LOG_BYTE0.h"
#include "chassis_msg/LOG_BYTE1.h"
// track
#include "sensor_fusion_msg/FusionTrackArray_v2.h"
// lane
#include "mobileye_avante_msg/ME_Right_Lane_A.h"
#include "mobileye_avante_msg/ME_Right_Lane_B.h"
#include "mobileye_avante_msg/ME_Left_Lane_A.h"
#include "mobileye_avante_msg/ME_Left_Lane_B.h"
#include "chassis_msg/LOG_BYTE2.h"
// stdmsg
#include <std_msgs/UInt8MultiArray.h>

#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>
#include "BEV_image.h"
#include "BEV_image_terminate.h"
#include "rt_nonfinite.h"

#include "Decision_Predict.h"
#include "Decision_Predict_terminate.h"
double traffic[576];
double chassis[11];
double lane[10];
uint8_t b_BEV_image[275598];

using namespace sensor_fusion_msg;
using namespace message_filters;
using namespace chassis_msg;
using namespace mobileye_avante_msg;
//using namespace cv;

ros::Publisher BEV_data_pub;

double P_result(const float u[7])
{
  double y;
  int idx;
  int k;
  if (!std::isnan(u[0])) {
    idx = 1;
  } else {
    bool exitg1;
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 8)) {
      if (!std::isnan(u[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }
  if (idx == 0) {
    idx = 1;
  } else {
    float ex;
    int i;
    ex = u[idx - 1];
    i = idx + 1;
    for (k = i; k < 8; k++) {
      float f;
      f = u[k - 1];
      if (ex < f) {
        ex = f;
        idx = k;
      }
    }
  }
  if (idx == 1) {
    // CM 7
    y = 7.0;
  } else if (idx == 2) {
    //  ELCL 5
    y = 5.0;
  } else if (idx == 3) {
    //  ELCR 6
    y = 6.0;
  } else if (idx == 4) {
    //  ESL 2
    y = 2.0;
  } else if (idx == 5) {
    //  ESR 3
    y = 3.0;
  } else if (idx == 6) {
    //  ESS 4
    y = 4.0;
  } else {
    //  Not Crash
    y = 8.0;
  }
  return y;
}


void AESCb(const LOG_BYTE0ConstPtr& byte0,
           const LOG_BYTE1ConstPtr& byte1,
           const ME_Left_Lane_AConstPtr& leftA,
           const ME_Left_Lane_BConstPtr& leftB,
           const ME_Right_Lane_AConstPtr& rightA,
           const ME_Right_Lane_BConstPtr& rightB)

{
    float out[7] = {0,};
    traffic[3] = (( byte0->WHL_SPD_RL + byte0->WHL_SPD_RR ) * 0.5)/3.6;
    traffic[0] = byte1->YAW_RATE;


    lane[0] = leftB->LaneMarkModelDerivA_C3_Lh_ME;
    lane[2] = leftA->LaneMarkModelA_C2_Lh_ME;
    lane[4]  = leftB->LaneMarkHeadingAngle_C1_Lh_ME;
    lane[6] = leftA->LaneMarkPosition_C0_Lh_ME;
    lane[1] = rightB->LaneMarkModelDerivA_C3_Rh_ME;
    lane[3] = rightA->LaneMarkModelA_C2_Rh_ME;
    lane[5] = rightB->LaneMarkHeadingAngle_C1_Rh_ME;
    lane[6] = rightA->LaneMarkPosition_C0_Rh_ME;

    //Todo: fusion_track_v2
    
    BEV_image(chassis,traffic,lane,0.0,b_BEV_image);
 
    Decision_Predict(b_BEV_image, out);
    double result_ = P_result(out);
    std::cerr << result_ << std::endl;   
    
    std::vector<uint8_t> data(275598);
    for(int i = 0; i < 275598; i++) {
        data[i] = b_BEV_image[i];

    }
    std_msgs::UInt8MultiArray msg;
    msg.data = data;
    BEV_data_pub.publish(msg);
}





void objectCb(const FusionTrackArray_v2ConstPtr& tracktarr)
{
// Track
    memset(traffic, 0, sizeof(traffic));
    if(tracktarr->tracks.size()) {
        auto traffic_objects = tracktarr->tracks.size();
        printf("object size : %d\n", traffic_objects);
        for(int i = 0; i<traffic_objects; ++i) {
//            printf("%lf\n", objectarr->objects[i].pose.position.x);
 
            //printf("object time : %d.%d\n", objectarr->header.stamp.sec, objectarr->header.stamp.nsec);
            traffic[0+(9*i)] = tracktarr->tracks[i].Tracking_Rel_Pos_Y; 
            traffic[1+(9*i)] = tracktarr->tracks[i].Tracking_Rel_Pos_X; 
            traffic[3+(9*i)] = tracktarr->tracks[i].Tracking_Rel_Vel_Y; 
            traffic[4+(9*i)] = tracktarr->tracks[i].Tracking_Rel_Vel_X; 
            traffic[7+(9*i)] = tracktarr->tracks[i].Measure_Length; // length
            traffic[8+(9*i)] = tracktarr->tracks[i].Measure_Width; // width
            
         

        } 
    }

}


int main(int argc, char** argv)
{
    ros::init(argc, argv, "decision_node");
    ros::NodeHandle nh;

    ros::Subscriber object_sub = nh.subscribe("/Fusion_Track_v2", 1, objectCb);
    BEV_data_pub = nh.advertise<std_msgs::UInt8MultiArray>("/data_topic", 10);

//    ros::Publisher AES_pub = nh.advertise<fallback_decision::AES_decision>("AES_Decision", 1);
//    ros::Publisher Decision_Prediction_pub = nh.advertise<fallback_decision::Decision_prediction>("Decision_Prediction", 1);
//    ros::Publisher BEV_pub = nh.advertise<sensor_msgs::Image>("/BEV_Image", 1);


    message_filters::Subscriber<LOG_BYTE0> byte0_sub(nh, "LOG_BYTE0", 1);
    message_filters::Subscriber<LOG_BYTE1> byte1_sub(nh, "LOG_BYTE1", 1);
    message_filters::Subscriber<ME_Left_Lane_A> leftA_sub(nh, "ME_Left_Lane_A", 1);
    message_filters::Subscriber<ME_Left_Lane_B> leftB_sub(nh, "ME_Left_Lane_B", 1);
    message_filters::Subscriber<ME_Right_Lane_A> rightA_sub(nh, "ME_Right_Lane_A", 1);
    message_filters::Subscriber<ME_Right_Lane_B> rightB_sub(nh, "ME_Right_Lane_B", 1);

    typedef sync_policies::ApproximateTime<LOG_BYTE0, LOG_BYTE1,
            ME_Left_Lane_A, ME_Left_Lane_B, ME_Right_Lane_A, ME_Right_Lane_B> SyncAES;

    Synchronizer<SyncAES> sync(SyncAES(10), 
                          byte0_sub, byte1_sub,
                          leftA_sub, leftB_sub, rightA_sub, rightB_sub);

                          //object_sub);
    sync.registerCallback(boost::bind(&AESCb, _1, _2, _3, _4, _5,_6));

    ros::spin();

    return 0;
}

