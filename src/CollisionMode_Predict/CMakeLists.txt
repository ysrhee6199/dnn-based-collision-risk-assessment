cmake_minimum_required(VERSION 3.0.2)
project(collision_mode_predict)

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
  roslaunch
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
  src/MWFCLayer.cpp
  src/MWCNNLayer.cpp
  src/MWInputLayer.cpp
  src/MWTensorBase.cpp
  src/MWOutputLayer.cpp
  src/Classification.cpp
  src/MWSoftmaxLayer.cpp
  src/MWMaxPoolingLayer.cpp
  src/MWElementwiseAffineLayer.cpp
  src/MWFusedConvActivationLayer.cpp
)

set(PROJECT_CUDA_FILES
  src/Predict.cu
  src/predict1.cu
  src/Predict_data.cu
  src/Predict_terminate.cu
  src/Predict_initialize.cu
  src/DeepLearningNetwork.cu
  src/MWCudnnCustomLayerBase.cu
  src/MWCudnnOutputLayerImpl.cu
  src/MWCudnnLayerImplFactory.cu
  src/MWCudnnSoftmaxLayerImpl.cu
  src/MWCudnnTargetNetworkImpl.cu
  src/MWCudnnMaxPoolingLayerImpl.cu
  src/MWCudnnElementwiseAffineLayerImpl.cu
  src/MWElementwiseAffineLayerImplKernel.cu
  src/MWCudnnFusedConvActivationLayerImpl.cu
  src/MWCudnnCNNLayerImpl.cu
  src/MWCudnnFCLayerImpl.cu
  
)

#set(RELATIVE_PATH "${CMAKE_CURRENT_SOURCE_DIR}")
message("relative_path: ${RELATIVE_PATH}")
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
    node/predict_node.cpp
  )

else()

  add_library(${PROJECT_NAME}_lib
    ${PROJECT_CPP_FILES} 
    ${PROJECT_CUDA_FILES}
  )

  add_executable(${PROJECT_NAME}
    node/predict_node.cpp
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
# Install the launch files
install(DIRECTORY launch/
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/launch
)
