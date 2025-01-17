#!/bin/bash
 
. /opt/ros/noetic/setup.sh
 
catkin_make

cp -r ./codegen ./devel/lib/collision_mode_predict/

