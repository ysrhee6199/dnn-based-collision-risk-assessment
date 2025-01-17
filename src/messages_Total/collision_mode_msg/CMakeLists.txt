cmake_minimum_required(VERSION 3.0.2)
project(collision_mode_msg)

find_package(catkin REQUIRED COMPONENTS
  message_generation
  std_msgs
  roscpp
)


 add_message_files(
   FILES
   collision_mode.msg
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
