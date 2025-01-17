//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: Decision_Predict.h
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 11-Jun-2024 01:16:03
//

#ifndef DECISION_PREDICT_H
#define DECISION_PREDICT_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
extern void Decision_Predict(const unsigned char cpu_in[275598],
                             float cpu_out[7]);

void Decision_Predict_free();

void Decision_Predict_init();

#endif
//
// File trailer for Decision_Predict.h
//
// [EOF]
//
