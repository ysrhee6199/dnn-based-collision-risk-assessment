//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: Mixing.h
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

#ifndef MIXING_H
#define MIXING_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
double Mixing(double c_ctrv, const double x_ctrv[5], const double P_ctrv[25],
              double mu_ctrv, double c_cv, const double x_cv[5],
              const double P_cv[25], double mu_cv, double &Prob_cv, double X[5],
              double P[25]);

#endif
//
// File trailer for Mixing.h
//
// [EOF]
//
