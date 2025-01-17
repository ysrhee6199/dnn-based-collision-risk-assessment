cmake_minimum_required(VERSION 2.8.3)
project(sf_in_vehicle_msg)


find_package(catkin REQUIRED COMPONENTS
  message_generation
  std_msgs
  roscpp
)


 add_message_files(
   FILES
   In_Vehicle.msg
   in_vehicle_sensor_pp.msg

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


