cmake_minimum_required(VERSION 3.0.2)
project(fallback_decision_2024)

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
  chassis_msg
  mobileye_avante_msg
  sensor_fusion_msg
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
    chassis_msg
    mobileye_avante_msg
    sensor_fusion_msg
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
  src/BEV_image.cpp
  src/BEV_image_data.cpp
  src/BEV_image_initialize.cpp
  src/BEV_image_rtwutil.cpp
  src/BEV_image_terminate.cpp
  src/CTRV_MODEL.cpp
  src/CV_MODEL.cpp
  src/det.cpp
  src/find.cpp
  src/I_lat.cpp
  src/inpolygon.cpp
  src/Interacting.cpp
  src/inv.cpp
  src/isequal.cpp
  src/linspace.cpp
  src/meshgrid.cpp
  src/minOrMax.cpp
  src/Mixing.cpp
  src/mrdivide_helper.cpp
  src/norm.cpp
  src/rtGetInf.cpp
  src/rtGetNaN.cpp
  src/rt_nonfinite.cpp
  src/sqrt.cpp
  src/sqrtm.cpp
  src/TLC.cpp
  src/xdlanv2.cpp
  src/xhseqr.cpp
  src/xnrm2.cpp
  src/xrot.cpp
  src/xzlarf.cpp
  src/MWFCLayer.cpp
  src/MWCNNLayer.cpp
  src/MWInputLayer.cpp
  src/MWTensorBase.cpp
  src/MWOutputLayer.cpp
  src/MWSoftmaxLayer.cpp
  src/MWMaxPoolingLayer.cpp
  src/MWElementwiseAffineLayer.cpp
  src/MWFusedConvActivationLayer.cpp
)

set(PROJECT_CUDA_FILES
  src/predict.cu
  src/Decision_Predict.cu
  src/MWCudnnFCLayerImpl.cu
  src/DeepLearningNetwork.cu
  src/MWCudnnCNNLayerImpl.cu
  src/Decision_Predict_data.cu
  src/MWCudnnCustomLayerBase.cu
  src/MWCudnnOutputLayerImpl.cu
  src/MWCudnnLayerImplFactory.cu
  src/MWCudnnSoftmaxLayerImpl.cu
  src/MWCudnnTargetNetworkImpl.cu
  src/Decision_Predict_terminate.cu
  src/MWCudnnMaxPoolingLayerImpl.cu
  src/Decision_Predict_initialize.cu
  src/MWCudnnElementwiseAffineLayerImpl.cu
  src/MWElementwiseAffineLayerImplKernel.cu
  src/MWCudnnFusedConvActivationLayerImpl.cu
)

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

