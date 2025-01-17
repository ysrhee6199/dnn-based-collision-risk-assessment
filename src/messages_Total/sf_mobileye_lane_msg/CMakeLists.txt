cmake_minimum_required(VERSION 2.8.3)
project(sf_mobileye_lane_msg)


find_package(catkin REQUIRED COMPONENTS
  message_generation
  std_msgs
  roscpp
)


 add_message_files(
   FILES
   mobileye_lane.msg
   FrontVisionTrack_moat.msg
   FrontVisionTrack_moatArray.msg
   FrontVisionLane_PP.msg
   FrontVisionLaneArray_PP.msg
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


