//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: BEV_image_data.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

// Include Files
#include "BEV_image_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
omp_nest_lock_t BEV_image_nestLockGlobal;

const signed char iv[15]{1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0};

const double dv[9]{
    25.0, 0.0, 0.0, 0.0, 25.0, 0.0, 0.0, 0.0, 0.27415567780803768};

bool isInitialized_BEV_image{false};

//
// File trailer for BEV_image_data.cpp
//
// [EOF]
//
