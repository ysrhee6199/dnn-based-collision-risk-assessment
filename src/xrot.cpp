//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xrot.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

// Include Files
#include "xrot.h"
#include "rt_nonfinite.h"

// Function Definitions
//
// Arguments    : int n
//                double x[25]
//                int ix0
//                int iy0
//                double c
//                double s
// Return Type  : void
//
namespace coder {
namespace internal {
namespace blas {
void xrot(int n, double x[25], int ix0, int iy0, double c, double s)
{
  if (n >= 1) {
    int i;
    i = static_cast<unsigned char>(n);
    for (int k{0}; k < i; k++) {
      double b_temp_tmp;
      double temp_tmp;
      int b_temp_tmp_tmp;
      int temp_tmp_tmp;
      temp_tmp_tmp = (iy0 + k) - 1;
      temp_tmp = x[temp_tmp_tmp];
      b_temp_tmp_tmp = (ix0 + k) - 1;
      b_temp_tmp = x[b_temp_tmp_tmp];
      x[temp_tmp_tmp] = c * temp_tmp - s * b_temp_tmp;
      x[b_temp_tmp_tmp] = c * b_temp_tmp + s * temp_tmp;
    }
  }
}

} // namespace blas
} // namespace internal
} // namespace coder

//
// File trailer for xrot.cpp
//
// [EOF]
//
