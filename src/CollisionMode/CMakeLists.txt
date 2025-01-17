cmake_minimum_required(VERSION 3.0.2)
project(collision_mode)

# Find CUDA
find_package(CUDA QUIET)
if (CUDA_FOUND)
  find_package(CUDA REQUIRED)
  message(STATUS "CUDA Version: ${CUDA_VERSION_STRINGS}")
  message(STATUS "CUDA Libararies: ${CUDA_LIBRARIES}")
  set(
    CUDA_NVCC_FLAGS
    ${CUDA_NVCC_FLAGS};
    -O3
    -gencode arch=compute_30,code=sm_30
    -gencode arch=compute_35,code=sm_35
    -gencode arch=compute_50,code=[sm_50,compute_50]
    -gencode arch=compute_52,code=[sm_52,compute_52]
    -gencode arch=compute_61,code=sm_61
    -gencode arch=compute_62,code=sm_62
    -gencode arch=compute_72,code=sm_72
  )
  add_definitions(-DGPU)
  add_definitions(-DCUDNN)
else()
  list(APPEND LIBRARIES "m")
endif()

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_msgs
  message_generation
  message_filters
  sf_in_vehicle_msg
  sf_mobileye_lane_msg
  sensor_fusion_msg
  collision_mode_msg
)
find_package(OpenMP REQUIRED)
if(OPENMP_FOUND)
  message (STATUS "OPENMP FOUND")
#  set(OpenMP_FLAGS ${OpenMP_CXX_FLAGS}) 
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
  set(OpenMP_LIBS gomp)
endif()
  
find_package(OpenCV REQUIRED)

# DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
  INCLUDE_DIRS 
    src
  LIBRARIES 
    ${PROJECT_NAME}_lib
  CATKIN_DEPENDS 
    roscpp 
    rospy
    std_msgs
    sf_in_vehicle_msg
    sf_mobileye_lane_msg
    sensor_fusion_msg
    collision_mode_msg
  DEPENDS 
    system_lib
    OpenMP
)

include_directories(
  src
  ${catkin_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)


set(PROJECT_CPP_FILES
  src/Subsystem.cpp
)

#set(PROJECT_CUDA_FILES

#)

if (CUDA_FOUND)

  link_directories(
    ${CUDA_TOOLKIT_ROOT_DIR}/lib64
  )

  cuda_add_library(${PROJECT_NAME}_lib
    ${PROJECT_CPP_FILES}
    ${PROJECT_CUDA_FILES}
  )

  target_link_libraries(${PROJECT_NAME}_lib
    cuda
    cudart
    cublas
    curand
    cudnn
    cusolver
  )

  cuda_add_executable(${PROJECT_NAME}
    node/fb_node.cpp
  )

else()

  add_library(${PROJECT_NAME}_lib
    ${PROJECT_CPP_FILES} 
    ${PROJECT_CUDA_FILES}
  )

  add_executable(${PROJECT_NAME}
    node/fb_node.cpp
  )

endif()
target_link_libraries(${PROJECT_NAME}_lib
  ${catkin_LIBRARIES}
)

target_link_libraries(${PROJECT_NAME}
  ${PROJECT_NAME}_lib
)

add_dependencies(${PROJECT_NAME}
  ${${PROJECT_NAME}_EXPORTED_TARGETS}
  ${catkin_EXPORTED_TARGETS}
)

catkin_install_python(PROGRAMS node/draw.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)

