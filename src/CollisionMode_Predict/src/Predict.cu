//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: Predict.cu
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 31-Jul-2024 04:58:22
//

// Include Files
#include "Predict.h"
#include "DeepLearningNetwork.h"
#include "Predict_data.h"
#include "Predict_initialize.h"
#include "Predict_internal_types.h"
#include "predict1.h"

// Variable Definitions
static decnet0_0 DecNet;

static bool DecNet_not_empty;

// Function Definitions
//
// Arguments    : const unsigned char cpu_in[60903]
//                float cpu_out[13]
// Return Type  : void
//
void Predict(const unsigned char cpu_in[60903], float cpu_out[13])
{
  float(*gpu_out)[13];
  unsigned char(*gpu_in)[60903];
  if (!isInitialized_Predict) {
    Predict_initialize();
  }
  cudaMalloc(&gpu_out, 52UL);
  cudaMalloc(&gpu_in, 60903UL);
  if (!DecNet_not_empty) {
    coder::internal::DeepLearningNetwork_setup(&DecNet);
    DecNet.matlabCodegenIsDeleted = false;
    DecNet_not_empty = true;
  }
  cudaMemcpy(*gpu_in, cpu_in, 60903UL, cudaMemcpyHostToDevice);
  coder::internal::DeepLearningNetwork_predict(&DecNet, *gpu_in, *gpu_out);
  cudaMemcpy(cpu_out, *gpu_out, 52UL, cudaMemcpyDeviceToHost);
  cudaFree(*gpu_in);
  cudaFree(*gpu_out);
}

//
// Arguments    : void
// Return Type  : void
//
void Predict_free()
{
  if (!DecNet.matlabCodegenIsDeleted) {
    DecNet.matlabCodegenIsDeleted = true;
    coder::internal::DeepLearningNetwork_delete(&DecNet);
  }
}

//
// Arguments    : void
// Return Type  : void
//
void Predict_init()
{
  DecNet_not_empty = false;
  DecNet.matlabCodegenIsDeleted = true;
}

//
// File trailer for Predict.cu
//
// [EOF]
//
