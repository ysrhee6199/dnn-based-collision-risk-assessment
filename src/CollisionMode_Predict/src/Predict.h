//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: Predict.h
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 31-Jul-2024 04:58:22
//

#ifndef PREDICT_H
#define PREDICT_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
extern void Predict(const unsigned char cpu_in[60903], float cpu_out[13]);

void Predict_free();

void Predict_init();

#endif
//
// File trailer for Predict.h
//
// [EOF]
//
