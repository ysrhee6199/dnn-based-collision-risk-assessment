//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: CV_MODEL.h
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

#ifndef CV_MODEL_H
#define CV_MODEL_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
double CV_MODEL(const double x_cv_k[5], const double P_cv_k[25],
                const double y_k[3], double x_ini[5], double flag,
                double old_flag, double ts, double P_cv[25]);

#endif
//
// File trailer for CV_MODEL.h
//
// [EOF]
//
