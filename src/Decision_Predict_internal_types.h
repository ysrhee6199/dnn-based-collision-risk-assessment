//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: Decision_Predict_internal_types.h
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 11-Jun-2024 01:16:03
//

#ifndef DECISION_PREDICT_INTERNAL_TYPES_H
#define DECISION_PREDICT_INTERNAL_TYPES_H

// Include Files
#include "Decision_Predict_types.h"
#include "rtwtypes.h"
#include "MWCNNLayer.hpp"
#include "MWCudnnTargetNetworkImpl.hpp"
#include "MWTensorBase.hpp"

// Type Definitions
class decnet0_0 {
public:
  decnet0_0();
  void setSize();
  void resetState();
  void setup();
  void predict();
  void cleanup();
  float *getLayerOutput(int layerIndex, int portIndex);
  int getLayerOutputSize(int layerIndex, int portIndex);
  float *getInputDataPointer(int b_index);
  float *getInputDataPointer();
  float *getOutputDataPointer(int b_index);
  float *getOutputDataPointer();
  int getBatchSize();
  int getOutputSequenceLength(int layerIndex, int portIndex);
  ~decnet0_0();

private:
  void allocate();
  void postsetup();
  void deallocate();

public:
  bool isInitialized;
  bool matlabCodegenIsDeleted;

private:
  int numLayers;
  MWTensorBase *inputTensors[1];
  MWTensorBase *outputTensors[1];
  MWCNNLayer *layers[10];
  MWCudnnTarget::MWTargetNetworkImpl *targetImpl;
};

#endif
//
// File trailer for Decision_Predict_internal_types.h
//
// [EOF]
//
