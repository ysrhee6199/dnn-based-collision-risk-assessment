cmake_minimum_required(VERSION 2.8.3)
project(sensor_fusion_msg)


find_package(catkin REQUIRED COMPONENTS
  message_generation
  std_msgs
  roscpp
)


 add_message_files(
   FILES
   FusionTrack.msg
   FusionTrackArray.msg
   FusionTrack_v2.msg
   FusionTrackArray_v2.msg
   FusionRadarTrack_moat.msg
   FusionRadarTrack_moatArray.msg
 )


 generate_messages(
   DEPENDENCIES
   std_msgs
 )

catkin_package(
  CATKIN_DEPENDS
    message_runtime
    std_msgs
)


