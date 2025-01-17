//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: BEV_image_terminate.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

// Include Files
#include "BEV_image_terminate.h"
#include "BEV_image_data.h"
#include "rt_nonfinite.h"
#include "omp.h"

// Function Definitions
//
// Arguments    : void
// Return Type  : void
//
void BEV_image_terminate()
{
  omp_destroy_nest_lock(&BEV_image_nestLockGlobal);
  isInitialized_BEV_image = false;
}

//
// File trailer for BEV_image_terminate.cpp
//
// [EOF]
//
