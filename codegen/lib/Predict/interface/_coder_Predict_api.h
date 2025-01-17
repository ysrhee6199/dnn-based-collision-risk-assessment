//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_Predict_api.h
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 31-Jul-2024 04:58:22
//

#ifndef _CODER_PREDICT_API_H
#define _CODER_PREDICT_API_H

// Include Files
#include "emlrt.h"
#include "tmwtypes.h"
#include <algorithm>
#include <cstring>

// Variable Declarations
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

// Function Declarations
void Predict(uint8_T in[60903], real32_T out[13]);

void Predict_api(const mxArray *const prhs[1], const mxArray *plhs[1]);

void Predict_atexit();

void Predict_initialize();

void Predict_terminate();

void Predict_xil_shutdown();

void Predict_xil_terminate();

#endif
//
// File trailer for _coder_Predict_api.h
//
// [EOF]
//
