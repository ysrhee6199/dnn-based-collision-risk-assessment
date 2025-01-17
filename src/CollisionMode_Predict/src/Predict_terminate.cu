//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: Predict_terminate.cu
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 31-Jul-2024 04:58:22
//

// Include Files
#include "Predict_terminate.h"
#include "Predict.h"
#include "Predict_data.h"
#include "stdio.h"

// Function Definitions
//
// Arguments    : void
// Return Type  : void
//
void Predict_terminate()
{
  cudaError_t errCode;
  errCode = cudaGetLastError();
  if (errCode != cudaSuccess) {
    fprintf(stderr, "ERR[%d] %s:%s\n", errCode, cudaGetErrorName(errCode),
            cudaGetErrorString(errCode));
    exit(errCode);
  }
  Predict_free();
  isInitialized_Predict = false;
}

//
// File trailer for Predict_terminate.cu
//
// [EOF]
//
