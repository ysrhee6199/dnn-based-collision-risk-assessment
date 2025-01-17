//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: Decision_Predict.cu
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 11-Jun-2024 01:16:03
//

// Include Files
#include "Decision_Predict.h"
#include "Decision_Predict_data.h"
#include "Decision_Predict_initialize.h"
#include "Decision_Predict_internal_types.h"
#include "DeepLearningNetwork.h"
#include "predict.h"

// Variable Definitions
static decnet0_0 DecNet;

static bool DecNet_not_empty;

// Function Definitions
//
// Arguments    : const unsigned char cpu_in[275598]
//                float cpu_out[7]
// Return Type  : void
//
void Decision_Predict(const unsigned char cpu_in[275598], float cpu_out[7])
{
  float(*gpu_out)[7];
  unsigned char(*gpu_in)[275598];
  if (!isInitialized_Decision_Predict) {
    Decision_Predict_initialize();
  }
  cudaMalloc(&gpu_out, 28UL);
  cudaMalloc(&gpu_in, 275598UL);
  if (!DecNet_not_empty) {
    coder::internal::DeepLearningNetwork_setup(&DecNet);
    DecNet.matlabCodegenIsDeleted = false;
    DecNet_not_empty = true;
  }
  cudaMemcpy(*gpu_in, cpu_in, 275598UL, cudaMemcpyHostToDevice);
  coder::internal::DeepLearningNetwork_predict(&DecNet, *gpu_in, *gpu_out);
  cudaMemcpy(cpu_out, *gpu_out, 28UL, cudaMemcpyDeviceToHost);
  cudaFree(*gpu_in);
  cudaFree(*gpu_out);
}

//
// Arguments    : void
// Return Type  : void
//
void Decision_Predict_free()
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
void Decision_Predict_init()
{
  DecNet_not_empty = false;
  DecNet.matlabCodegenIsDeleted = true;
}

//
// File trailer for Decision_Predict.cu
//
// [EOF]
//
