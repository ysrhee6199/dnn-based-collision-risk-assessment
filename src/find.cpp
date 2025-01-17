//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: find.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

// Include Files
#include "find.h"
#include "rt_nonfinite.h"

// Function Definitions
//
// Arguments    : const bool x[15311]
//                int i_data[]
//                int j_data[]
//                int &j_size
// Return Type  : int
//
namespace coder {
int eml_find(const bool x[15311], int i_data[], int j_data[], int &j_size)
{
  int i_size;
  int ii;
  int jj;
  bool exitg1;
  i_size = 0;
  ii = 1;
  jj = 1;
  exitg1 = false;
  while ((!exitg1) && (jj <= 251)) {
    bool guard1;
    guard1 = false;
    if (x[(ii + 61 * (jj - 1)) - 1]) {
      i_size++;
      i_data[i_size - 1] = ii;
      j_data[i_size - 1] = jj;
      if (i_size >= 15311) {
        exitg1 = true;
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }
    if (guard1) {
      ii++;
      if (ii > 61) {
        ii = 1;
        jj++;
      }
    }
  }
  if (i_size < 1) {
    i_size = 0;
  }
  j_size = i_size;
  return i_size;
}

} // namespace coder

//
// File trailer for find.cpp
//
// [EOF]
//
