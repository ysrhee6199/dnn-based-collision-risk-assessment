//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: BEV_image_rtwutil.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

// Include Files
#include "BEV_image_rtwutil.h"
#include "rt_nonfinite.h"
#include <cmath>

// Function Definitions
//
// Arguments    : double u0
//                double u1
// Return Type  : double
//
double rt_hypotd_snf(double u0, double u1)
{
  double a;
  double b;
  double y;
  a = std::abs(u0);
  b = std::abs(u1);
  if (a < b) {
    a /= b;
    y = b * std::sqrt(a * a + 1.0);
  } else if (a > b) {
    b /= a;
    y = a * std::sqrt(b * b + 1.0);
  } else if (std::isnan(b)) {
    y = rtNaN;
  } else {
    y = a * 1.4142135623730951;
  }
  return y;
}

//
// File trailer for BEV_image_rtwutil.cpp
//
// [EOF]
//
