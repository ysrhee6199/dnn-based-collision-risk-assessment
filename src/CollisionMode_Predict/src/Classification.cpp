//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Classification.cpp
//
// Code generated for Simulink model 'Classification'.
//
// Model version                  : 8.1
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Tue Jul  9 07:20:57 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "Classification.h"
#include <cmath>
#include "rtwtypes.h"

// Model step function
void Classification::step()
{
  int32_T b_k;
  int32_T idx;
  int32_T k;
  real32_T out_1_predict;
  boolean_T exitg1;

  // MATLAB Function: '<Root>/Classification' incorporates:
  //   Inport: '<Root>/Classificationb'

  if (!std::isnan(Classification_U.out_1_predict[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 14)) {
      if (!std::isnan(Classification_U.out_1_predict[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    // Outport: '<Root>/CM_probability'
    Classification_Y.CM_probability = Classification_U.out_1_predict[0];
    k = 1;
  } else {
    Classification_Y.CM_probability = Classification_U.out_1_predict[idx - 1];
    k = idx;
    for (b_k = idx + 1; b_k < 14; b_k++) {
      out_1_predict = Classification_U.out_1_predict[b_k - 1];
      if (Classification_Y.CM_probability < out_1_predict) {
        Classification_Y.CM_probability = out_1_predict;
        k = b_k;
      }
    }
  }

  // Outport: '<Root>/Predict_CM_index' incorporates:
  //   MATLAB Function: '<Root>/Classification'

  Classification_Y.Predict_CM_index = k;
}

// Model initialize function
void Classification::initialize()
{
  // (no initialization code required)
}

// Model terminate function
void Classification::terminate()
{
  // (no terminate code required)
}

// Constructor
Classification::Classification() :
  Classification_U(),
  Classification_Y(),
  Classification_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
// Currently there is no destructor body generated.
Classification::~Classification() = default;

// Real-Time Model get method
Classification::RT_MODEL_Classification_T * Classification::getRTM()
{
  return (&Classification_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
