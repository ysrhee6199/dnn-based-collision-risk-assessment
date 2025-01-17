//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: Predict_initialize.cu
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 31-Jul-2024 04:58:22
//

// Include Files
#include "Predict_initialize.h"
#include "Predict.h"
#include "Predict_data.h"

// Function Definitions
//
// Arguments    : void
// Return Type  : void
//
void Predict_initialize()
{
  Predict_init();
  cudaGetLastError();
  isInitialized_Predict = true;
}

//
// File trailer for Predict_initialize.cu
//
// [EOF]
//
