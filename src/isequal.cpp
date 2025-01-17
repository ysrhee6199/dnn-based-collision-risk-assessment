//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: isequal.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

// Include Files
#include "isequal.h"
#include "rt_nonfinite.h"

// Function Definitions
//
// Arguments    : const double varargin_2[275598]
// Return Type  : bool
//
namespace coder {
bool isequal(const double varargin_2[275598])
{
  int k;
  bool exitg1;
  bool p;
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 275598)) {
    if (!(varargin_2[k] == 255.0)) {
      p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }
  return p;
}

} // namespace coder

//
// File trailer for isequal.cpp
//
// [EOF]
//
