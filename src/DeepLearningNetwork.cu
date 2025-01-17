//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: DeepLearningNetwork.cu
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 11-Jun-2024 01:16:03
//

// Include Files
#include "DeepLearningNetwork.h"
#include "Decision_Predict_internal_types.h"
#include "MWCNNLayer.hpp"
#include "MWCudnnTargetNetworkImpl.hpp"
#include "MWElementwiseAffineLayer.hpp"
#include "MWFCLayer.hpp"
#include "MWFusedConvActivationLayer.hpp"
#include "MWInputLayer.hpp"
#include "MWMaxPoolingLayer.hpp"
#include "MWOutputLayer.hpp"
#include "MWSoftmaxLayer.hpp"
#include "MWTensor.hpp"
#include "MWTensorBase.hpp"
#include "stdio.h"
#include <cstdlib>

// Named Constants
const char *errorString{
    "Abnormal termination due to: %s.\nError in %s (line %d)."};

const char *errStringBase{
    "Error during execution of the generated code. %s at line: %d, file: "
    "%s\nExiting program execution ...\n"};

// Function Declarations
static void checkCleanupCudaError(cudaError_t errCode, const char *file,
                                  unsigned int b_line);

static void checkRunTimeError(const char *errMsg, const char *file,
                              unsigned int b_line);

namespace coder {
namespace internal {
static void DeepLearningNetwork_callDelete(decnet0_0 *obj);

}
} // namespace coder

// Function Definitions
//
// Arguments    : void
// Return Type  : void
//
void decnet0_0::allocate()
{
  targetImpl->allocate(275598, 2);
  for (int idx{0}; idx < 10; idx++) {
    layers[idx]->allocate();
  }
  (static_cast<MWTensor<float> *>(inputTensors[0]))
      ->setData(layers[0]->getLayerOutput(0));
}

//
// Arguments    : void
// Return Type  : void
//
void decnet0_0::cleanup()
{
  deallocate();
  for (int idx{0}; idx < 10; idx++) {
    layers[idx]->cleanup();
  }
  if (targetImpl) {
    targetImpl->cleanup();
  }
  isInitialized = false;
  checkCleanupCudaError(cudaGetLastError(), __FILE__, __LINE__);
}

//
// Arguments    : void
// Return Type  : void
//
void decnet0_0::deallocate()
{
  targetImpl->deallocate();
  for (int idx{0}; idx < 10; idx++) {
    layers[idx]->deallocate();
  }
}

//
// Arguments    : void
// Return Type  : void
//
void decnet0_0::postsetup()
{
  targetImpl->postSetup(layers, numLayers);
}

//
// Arguments    : void
// Return Type  : void
//
void decnet0_0::resetState()
{
}

//
// Arguments    : void
// Return Type  : void
//
void decnet0_0::setSize()
{
  for (int idx{0}; idx < 10; idx++) {
    layers[idx]->propagateSize();
  }
  allocate();
  postsetup();
}

//
// Arguments    : void
// Return Type  : void
//
void decnet0_0::setup()
{
  if (isInitialized) {
    resetState();
  } else {
    targetImpl->preSetup();
    targetImpl->setAutoTune(true);
    (static_cast<MWInputLayer *>(layers[0]))
        ->createInputLayer(targetImpl, inputTensors[0], "SSCB", 0);
    (static_cast<MWElementwiseAffineLayer *>(layers[1]))
        ->createElementwiseAffineLayer(
            targetImpl, layers[0]->getOutputTensor(0), 1, 1, 18, 1, 1, 18,
            false, 1, 1,
            "./codegen/lib/Decision_Predict/cnn_decnet0_0_imageinput_scale.bin",
            "./codegen/lib/Decision_Predict/"
            "cnn_decnet0_0_imageinput_offset.bin",
            "SSCB", 0);
    (static_cast<MWFusedConvActivationLayer *>(layers[2]))
        ->createFusedConvActivationLayer(
            targetImpl, 1, layers[1]->getOutputTensor(0), 3, 3, 18, 8, 1, 1, 1,
            1, 1, 1, 1, 1, 1,
            "./codegen/lib/Decision_Predict/"
            "cnn_decnet0_0_Convolution_Layer_1_w.bin",
            "./codegen/lib/Decision_Predict/"
            "cnn_decnet0_0_Convolution_Layer_1_b.bin",
            0.0F, MWActivationFunctionType::ACTIVATION_FCN_ENUM::RELU, "SSCB",
            1);
    (static_cast<MWMaxPoolingLayer *>(layers[3]))
        ->createMaxPoolingLayer<float, float>(
            targetImpl, layers[2]->getOutputTensor(0), 2, 2, 2, 2, 0, 0, 0, 0,
            0, 0, "FLOAT", 1, "SSCB", 0);
    (static_cast<MWFusedConvActivationLayer *>(layers[4]))
        ->createFusedConvActivationLayer(
            targetImpl, 1, layers[3]->getOutputTensor(0), 3, 3, 8, 16, 1, 1, 1,
            1, 1, 1, 1, 1, 1,
            "./codegen/lib/Decision_Predict/cnn_decnet0_0_conv_1_w.bin",
            "./codegen/lib/Decision_Predict/cnn_decnet0_0_conv_1_b.bin", 0.0F,
            MWActivationFunctionType::ACTIVATION_FCN_ENUM::RELU, "SSCB", 1);
    (static_cast<MWMaxPoolingLayer *>(layers[5]))
        ->createMaxPoolingLayer<float, float>(
            targetImpl, layers[4]->getOutputTensor(0), 2, 2, 2, 2, 0, 0, 0, 0,
            0, 0, "FLOAT", 1, "SSCB", 0);
    (static_cast<MWFusedConvActivationLayer *>(layers[6]))
        ->createFusedConvActivationLayer(
            targetImpl, 1, layers[5]->getOutputTensor(0), 3, 3, 16, 32, 1, 1, 1,
            1, 1, 1, 1, 1, 1,
            "./codegen/lib/Decision_Predict/cnn_decnet0_0_conv_2_w.bin",
            "./codegen/lib/Decision_Predict/cnn_decnet0_0_conv_2_b.bin", 0.0F,
            MWActivationFunctionType::ACTIVATION_FCN_ENUM::RELU, "SSCB", 1);
    (static_cast<MWFCLayer *>(layers[7]))
        ->createFCLayer(targetImpl, layers[6]->getOutputTensor(0), 29760, 7,
                        "./codegen/lib/Decision_Predict/"
                        "cnn_decnet0_0_fully_Connected_Layer_w.bin",
                        "./codegen/lib/Decision_Predict/"
                        "cnn_decnet0_0_fully_Connected_Layer_b.bin",
                        "SSCB", 0);
    (static_cast<MWSoftmaxLayer *>(layers[8]))
        ->createSoftmaxLayer(targetImpl, layers[7]->getOutputTensor(0), "SSCB",
                             1);
    (static_cast<MWOutputLayer *>(layers[9]))
        ->createOutputLayer(targetImpl, layers[8]->getOutputTensor(0), "SSCB",
                            1);
    outputTensors[0] = layers[9]->getOutputTensor(0);
    setSize();
  }
  isInitialized = true;
}

//
// Arguments    : cudaError_t errCode
//                const char *file
//                unsigned int b_line
// Return Type  : void
//
static void checkCleanupCudaError(cudaError_t errCode, const char *file,
                                  unsigned int b_line)
{
  if ((errCode != cudaSuccess) && (errCode != cudaErrorCudartUnloading)) {
    printf(errorString, cudaGetErrorString(errCode), file, b_line);
  }
}

//
// Arguments    : const char *errMsg
//                const char *file
//                unsigned int b_line
// Return Type  : void
//
static void checkRunTimeError(const char *errMsg, const char *file,
                              unsigned int b_line)
{
  printf(errStringBase, errMsg, b_line, file);
  exit(EXIT_FAILURE);
}

//
// Arguments    : decnet0_0 *obj
// Return Type  : void
//
namespace coder {
namespace internal {
static void DeepLearningNetwork_callDelete(decnet0_0 *obj)
{
  if (obj->isInitialized) {
    obj->cleanup();
  }
}

//
// Arguments    : void
// Return Type  : ::decnet0_0
//
} // namespace internal
} // namespace coder
decnet0_0::decnet0_0()
{
  numLayers = 10;
  isInitialized = false;
  targetImpl = 0;
  layers[0] = new MWInputLayer;
  layers[0]->setName("imageinput");
  layers[1] = new MWElementwiseAffineLayer;
  layers[1]->setName("imageinput_normalization");
  layers[1]->setInPlaceIndex(0, 0);
  layers[2] = new MWFusedConvActivationLayer;
  layers[2]->setName("Convolution Layer 1_relu Layer 1");
  layers[3] = new MWMaxPoolingLayer;
  layers[3]->setName("max Pooling Layer 1");
  layers[4] = new MWFusedConvActivationLayer;
  layers[4]->setName("conv_1_relu Layer 2");
  layers[5] = new MWMaxPoolingLayer;
  layers[5]->setName("max Pooling Layer 2");
  layers[6] = new MWFusedConvActivationLayer;
  layers[6]->setName("conv_2_relu Layer 3");
  layers[7] = new MWFCLayer;
  layers[7]->setName("fully Connected Layer");
  layers[8] = new MWSoftmaxLayer;
  layers[8]->setName("softmax Layer");
  layers[9] = new MWOutputLayer;
  layers[9]->setName("classoutput");
  layers[9]->setInPlaceIndex(0, 0);
  targetImpl = new MWCudnnTarget::MWTargetNetworkImpl;
  inputTensors[0] = new MWTensor<float>;
  inputTensors[0]->setHeight(251);
  inputTensors[0]->setWidth(61);
  inputTensors[0]->setChannels(18);
  inputTensors[0]->setBatchSize(1);
  inputTensors[0]->setSequenceLength(1);
}

//
// Arguments    : void
// Return Type  : void
//
decnet0_0::~decnet0_0()
{
  try {
    if (isInitialized) {
      cleanup();
    }
    for (int idx{0}; idx < 10; idx++) {
      delete layers[idx];
    }
    if (targetImpl) {
      delete targetImpl;
    }
    delete inputTensors[0];
  } catch (...) {
  }
}

//
// Arguments    : void
// Return Type  : int
//
int decnet0_0::getBatchSize()
{
  return inputTensors[0]->getBatchSize();
}

//
// Arguments    : int b_index
// Return Type  : float *
//
float *decnet0_0::getInputDataPointer(int b_index)
{
  return (static_cast<MWTensor<float> *>(inputTensors[b_index]))->getData();
}

//
// Arguments    : void
// Return Type  : float *
//
float *decnet0_0::getInputDataPointer()
{
  return (static_cast<MWTensor<float> *>(inputTensors[0]))->getData();
}

//
// Arguments    : int layerIndex
//                int portIndex
// Return Type  : float *
//
float *decnet0_0::getLayerOutput(int layerIndex, int portIndex)
{
  return layers[layerIndex]->getLayerOutput(portIndex);
}

//
// Arguments    : int layerIndex
//                int portIndex
// Return Type  : int
//
int decnet0_0::getLayerOutputSize(int layerIndex, int portIndex)
{
  return static_cast<unsigned int>(
             layers[layerIndex]->getOutputTensor(portIndex)->getNumElements()) *
         sizeof(float);
}

//
// Arguments    : int b_index
// Return Type  : float *
//
float *decnet0_0::getOutputDataPointer(int b_index)
{
  return (static_cast<MWTensor<float> *>(outputTensors[b_index]))->getData();
}

//
// Arguments    : void
// Return Type  : float *
//
float *decnet0_0::getOutputDataPointer()
{
  return (static_cast<MWTensor<float> *>(outputTensors[0]))->getData();
}

//
// Arguments    : int layerIndex
//                int portIndex
// Return Type  : int
//
int decnet0_0::getOutputSequenceLength(int layerIndex, int portIndex)
{
  return layers[layerIndex]->getOutputTensor(portIndex)->getSequenceLength();
}

//
// Arguments    : void
// Return Type  : void
//
void decnet0_0::predict()
{
  for (int idx{0}; idx < 10; idx++) {
    layers[idx]->predict();
  }
}

//
// Arguments    : decnet0_0 *obj
// Return Type  : void
//
namespace coder {
namespace internal {
void DeepLearningNetwork_delete(decnet0_0 *obj)
{
  DeepLearningNetwork_callDelete(obj);
}

//
// Arguments    : decnet0_0 *obj
// Return Type  : void
//
void DeepLearningNetwork_setup(decnet0_0 *obj)
{
  try {
    obj->setup();
  } catch (std::runtime_error const &err) {
    obj->cleanup();
    checkRunTimeError(err.what(), __FILE__, __LINE__);
  } catch (...) {
    obj->cleanup();
    checkRunTimeError("", __FILE__, __LINE__);
  }
}

} // namespace internal
} // namespace coder

//
// File trailer for DeepLearningNetwork.cu
//
// [EOF]
//
