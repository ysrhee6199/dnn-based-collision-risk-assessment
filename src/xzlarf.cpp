//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xzlarf.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

// Include Files
#include "xzlarf.h"
#include "rt_nonfinite.h"
#include <cstring>

// Function Declarations
static int div_nde_s32_floor(int numerator);

// Function Definitions
//
// Arguments    : int numerator
// Return Type  : int
//
static int div_nde_s32_floor(int numerator)
{
  int i;
  if ((numerator < 0) && (numerator % 5 != 0)) {
    i = -1;
  } else {
    i = 0;
  }
  return numerator / 5 + i;
}

//
// Arguments    : int m
//                int n
//                int iv0
//                double tau
//                double C[25]
//                int ic0
//                double work[5]
// Return Type  : void
//
namespace coder {
namespace internal {
namespace reflapack {
void xzlarf(int m, int n, int iv0, double tau, double C[25], int ic0,
            double work[5])
{
  int i;
  int ia;
  int lastc;
  int lastv;
  if (tau != 0.0) {
    bool exitg2;
    lastv = m;
    i = iv0 + m;
    while ((lastv > 0) && (C[i - 2] == 0.0)) {
      lastv--;
      i--;
    }
    lastc = n;
    exitg2 = false;
    while ((!exitg2) && (lastc > 0)) {
      int exitg1;
      i = ic0 + (lastc - 1) * 5;
      ia = i;
      do {
        exitg1 = 0;
        if (ia <= (i + lastv) - 1) {
          if (C[ia - 1] != 0.0) {
            exitg1 = 1;
          } else {
            ia++;
          }
        } else {
          lastc--;
          exitg1 = 2;
        }
      } while (exitg1 == 0);
      if (exitg1 == 1) {
        exitg2 = true;
      }
    }
  } else {
    lastv = 0;
    lastc = 0;
  }
  if (lastv > 0) {
    double c;
    int b_i;
    int i1;
    if (lastc != 0) {
      b_i = static_cast<unsigned char>(lastc);
      std::memset(&work[0], 0, static_cast<unsigned int>(b_i) * sizeof(double));
      b_i = ic0 + 5 * (lastc - 1);
      for (i = ic0; i <= b_i; i += 5) {
        c = 0.0;
        i1 = (i + lastv) - 1;
        for (ia = i; ia <= i1; ia++) {
          c += C[ia - 1] * C[((iv0 + ia) - i) - 1];
        }
        i1 = div_nde_s32_floor(i - ic0);
        work[i1] += c;
      }
    }
    if (!(-tau == 0.0)) {
      i = ic0;
      b_i = static_cast<unsigned char>(lastc);
      for (lastc = 0; lastc < b_i; lastc++) {
        c = work[lastc];
        if (c != 0.0) {
          c *= -tau;
          i1 = lastv + i;
          for (ia = i; ia < i1; ia++) {
            C[ia - 1] += C[((iv0 + ia) - i) - 1] * c;
          }
        }
        i += 5;
      }
    }
  }
}

} // namespace reflapack
} // namespace internal
} // namespace coder

//
// File trailer for xzlarf.cpp
//
// [EOF]
//
