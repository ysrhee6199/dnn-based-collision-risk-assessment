//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Subsystem.cpp
//
// Code generated for Simulink model 'Subsystem'.
//
// Model version                  : 8.1
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Tue Jul  9 07:01:46 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "Subsystem.h"
#include "rtwtypes.h"
#include "Subsystem_types.h"
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <stddef.h>

// Function for MATLAB Function: '<S1>/DSM'
real_T Subsystem::Subsystem_minimum(const real_T x[5])
{
  real_T ex;
  int32_T idx;
  int32_T k;
  if (!std::isnan(x[0])) {
    idx = 1;
  } else {
    boolean_T exitg1;
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (!std::isnan(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    for (k = idx + 1; k < 6; k++) {
      real_T x_0;
      x_0 = x[k - 1];
      if (ex > x_0) {
        ex = x_0;
      }
    }
  }

  return ex;
}

// Function for MATLAB Function: '<S1>/DSM'
real_T Subsystem::Subsystem_maximum(const real_T x[5])
{
  real_T ex;
  int32_T idx;
  int32_T k;
  if (!std::isnan(x[0])) {
    idx = 1;
  } else {
    boolean_T exitg1;
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 6)) {
      if (!std::isnan(x[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    ex = x[0];
  } else {
    ex = x[idx - 1];
    for (k = idx + 1; k < 6; k++) {
      real_T x_0;
      x_0 = x[k - 1];
      if (ex < x_0) {
        ex = x_0;
      }
    }
  }

  return ex;
}

// Function for MATLAB Function: '<S1>/DSM'
boolean_T Subsystem::Subsystem_isequal(const real_T varargin_2[60903])
{
  int32_T k;
  boolean_T b_p;
  boolean_T exitg1;
  boolean_T p;
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 60903)) {
    if (!(varargin_2[k] == 255.0)) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (b_p) {
    p = true;
  }

  return p;
}

void Subsystem::Subsystem_emxInit_real_T(emxArray_real_T_Subsystem_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_real_T_Subsystem_T *emxArray;
  *pEmxArray = static_cast<emxArray_real_T_Subsystem_T *>(std::malloc(sizeof
    (emxArray_real_T_Subsystem_T)));
  emxArray = *pEmxArray;
  emxArray->data = static_cast<real_T *>(nullptr);
  emxArray->numDimensions = numDimensions;
  emxArray->size = static_cast<int32_T *>(std::malloc(sizeof(int32_T) *
    static_cast<uint32_T>(numDimensions)));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (int32_T i{0}; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_minimum_g(const real_T x[101], real_T *ex, int32_T
  *idx)
{
  int32_T b_idx;
  int32_T k;
  if (!std::isnan(x[0])) {
    b_idx = 1;
  } else {
    boolean_T exitg1;
    b_idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 102)) {
      if (!std::isnan(x[k - 1])) {
        b_idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (b_idx == 0) {
    *ex = x[0];
    *idx = 1;
  } else {
    *ex = x[b_idx - 1];
    *idx = b_idx;
    for (k = b_idx + 1; k < 102; k++) {
      real_T x_0;
      x_0 = x[k - 1];
      if (*ex > x_0) {
        *ex = x_0;
        *idx = k;
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_minimum_g4(const real_T x[201], real_T *ex, int32_T
  *idx)
{
  int32_T b_idx;
  int32_T k;
  if (!std::isnan(x[0])) {
    b_idx = 1;
  } else {
    boolean_T exitg1;
    b_idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 202)) {
      if (!std::isnan(x[k - 1])) {
        b_idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (b_idx == 0) {
    *ex = x[0];
    *idx = 1;
  } else {
    *ex = x[b_idx - 1];
    *idx = b_idx;
    for (k = b_idx + 1; k < 202; k++) {
      real_T x_0;
      x_0 = x[k - 1];
      if (*ex > x_0) {
        *ex = x_0;
        *idx = k;
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_plotLineHigh(real_T x0, real_T b_y0, real_T x1, real_T
  b_y1, real_T x_total_data[], int32_T *x_total_size, real_T y_total_data[],
  int32_T *y_total_size)
{
  real_T D;
  real_T d_y_tmp;
  real_T dx;
  real_T x;
  int32_T b;
  int32_T xi;
  dx = x1 - x0;
  D = std::abs(dx + 1.0);
  d_y_tmp = b_y1 - b_y0;
  x = std::abs(d_y_tmp + 1.0);
  if (D > x) {
    *x_total_size = static_cast<int32_T>(D);
    *y_total_size = static_cast<int32_T>(D);
    if (static_cast<int32_T>(D) - 1 >= 0) {
      std::memset(&x_total_data[0], 0, static_cast<uint32_T>(static_cast<int32_T>
        (D)) * sizeof(real_T));
    }

    if (static_cast<int32_T>(D) - 1 >= 0) {
      std::memset(&y_total_data[0], 0, static_cast<uint32_T>(static_cast<int32_T>
        (D)) * sizeof(real_T));
    }
  } else if (D < x) {
    *x_total_size = static_cast<int32_T>(x);
    *y_total_size = static_cast<int32_T>(x);
    if (static_cast<int32_T>(x) - 1 >= 0) {
      std::memset(&x_total_data[0], 0, static_cast<uint32_T>(static_cast<int32_T>
        (x)) * sizeof(real_T));
    }

    if (static_cast<int32_T>(x) - 1 >= 0) {
      std::memset(&y_total_data[0], 0, static_cast<uint32_T>(static_cast<int32_T>
        (x)) * sizeof(real_T));
    }
  } else {
    *x_total_size = static_cast<int32_T>(D);
    *y_total_size = static_cast<int32_T>(D);
    if (static_cast<int32_T>(D) - 1 >= 0) {
      std::memset(&x_total_data[0], 0, static_cast<uint32_T>(static_cast<int32_T>
        (D)) * sizeof(real_T));
    }

    if (static_cast<int32_T>(D) - 1 >= 0) {
      std::memset(&y_total_data[0], 0, static_cast<uint32_T>(static_cast<int32_T>
        (D)) * sizeof(real_T));
    }
  }

  xi = 1;
  if (dx < 0.0) {
    xi = -1;
    dx = -dx;
  }

  D = 2.0 * dx - d_y_tmp;
  x = x0;
  b = static_cast<int32_T>((1.0 - b_y0) + b_y1) - 1;
  for (int32_T y{0}; y <= b; y++) {
    x_total_data[y] = x;
    y_total_data[y] = b_y0 + static_cast<real_T>(y);
    if (D > 0.0) {
      x += static_cast<real_T>(xi);
      D += (dx - d_y_tmp) * 2.0;
    } else {
      D += 2.0 * dx;
    }
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_plotLineLow(real_T x0, real_T b_y0, real_T x1, real_T
  b_y1, real_T x_total_data[], int32_T *x_total_size, real_T y_total_data[],
  int32_T *y_total_size)
{
  real_T D;
  real_T c_y_tmp;
  real_T dy;
  real_T y;
  int32_T b;
  int32_T yi;
  c_y_tmp = x1 - x0;
  D = std::abs(c_y_tmp + 1.0);
  dy = b_y1 - b_y0;
  y = std::abs(dy + 1.0);
  if (D > y) {
    *x_total_size = static_cast<int32_T>(D);
    *y_total_size = static_cast<int32_T>(D);
    if (static_cast<int32_T>(D) - 1 >= 0) {
      std::memset(&x_total_data[0], 0, static_cast<uint32_T>(static_cast<int32_T>
        (D)) * sizeof(real_T));
    }

    if (static_cast<int32_T>(D) - 1 >= 0) {
      std::memset(&y_total_data[0], 0, static_cast<uint32_T>(static_cast<int32_T>
        (D)) * sizeof(real_T));
    }
  } else if (D < y) {
    *x_total_size = static_cast<int32_T>(y);
    *y_total_size = static_cast<int32_T>(y);
    if (static_cast<int32_T>(y) - 1 >= 0) {
      std::memset(&x_total_data[0], 0, static_cast<uint32_T>(static_cast<int32_T>
        (y)) * sizeof(real_T));
    }

    if (static_cast<int32_T>(y) - 1 >= 0) {
      std::memset(&y_total_data[0], 0, static_cast<uint32_T>(static_cast<int32_T>
        (y)) * sizeof(real_T));
    }
  } else {
    *x_total_size = static_cast<int32_T>(D);
    *y_total_size = static_cast<int32_T>(D);
    if (static_cast<int32_T>(D) - 1 >= 0) {
      std::memset(&x_total_data[0], 0, static_cast<uint32_T>(static_cast<int32_T>
        (D)) * sizeof(real_T));
    }

    if (static_cast<int32_T>(D) - 1 >= 0) {
      std::memset(&y_total_data[0], 0, static_cast<uint32_T>(static_cast<int32_T>
        (D)) * sizeof(real_T));
    }
  }

  yi = 1;
  if (dy < 0.0) {
    yi = -1;
    dy = -dy;
  }

  D = 2.0 * dy - c_y_tmp;
  y = b_y0;
  b = static_cast<int32_T>((1.0 - x0) + x1) - 1;
  for (int32_T x{0}; x <= b; x++) {
    x_total_data[x] = x0 + static_cast<real_T>(x);
    y_total_data[x] = y;
    if (D > 0.0) {
      y += static_cast<real_T>(yi);
      D += (dy - c_y_tmp) * 2.0;
    } else {
      D += 2.0 * dy;
    }
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_plotLine(real_T x0, real_T b_y0, real_T x1, real_T
  b_y1, real_T x_total_data[], int32_T *x_total_size, real_T y_total_data[],
  int32_T *y_total_size)
{
  if (std::abs(b_y1 - b_y0) < std::abs(x1 - x0)) {
    if (x0 > x1) {
      Subsystem_plotLineLow(x1, b_y1, x0, b_y0, x_total_data, x_total_size,
                            y_total_data, y_total_size);
    } else {
      Subsystem_plotLineLow(x0, b_y0, x1, b_y1, x_total_data, x_total_size,
                            y_total_data, y_total_size);
    }
  } else if (b_y0 > b_y1) {
    Subsystem_plotLineHigh(x1, b_y1, x0, b_y0, x_total_data, x_total_size,
      y_total_data, y_total_size);
  } else {
    Subsystem_plotLineHigh(x0, b_y0, x1, b_y1, x_total_data, x_total_size,
      y_total_data, y_total_size);
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_nullAssignment(real_T x_data[], int32_T *x_size, const
  int32_T idx_data[], const int32_T idx_size[2])
{
  int32_T b_k;
  int32_T d;
  int32_T k0;
  std::memset(&Subsystem_B.b_data[0], 0, 200U * sizeof(boolean_T));
  d = idx_size[1];
  for (b_k = 0; b_k < d; b_k++) {
    Subsystem_B.b_data[idx_data[b_k] - 1] = true;
  }

  d = 0;
  k0 = -1;
  for (b_k = 0; b_k < 200; b_k++) {
    boolean_T b;
    b = Subsystem_B.b_data[b_k];
    d += b;
    if (!b) {
      k0++;
      x_data[k0] = x_data[b_k];
    }
  }

  if (200 - d < 1) {
    b_k = -1;
  } else {
    b_k = 199 - d;
  }

  *x_size = b_k + 1;
}

void Subsystem::Subsys_emxEnsureCapacity_real_T(emxArray_real_T_Subsystem_T
  *emxArray, int32_T oldNumel)
{
  int32_T i;
  int32_T newNumel;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = std::calloc(static_cast<uint32_T>(i), sizeof(real_T));
    if (emxArray->data != nullptr) {
      std::memcpy(newData, emxArray->data, sizeof(real_T) * static_cast<uint32_T>
                  (oldNumel));
      if (emxArray->canFreeData) {
        std::free(emxArray->data);
      }
    }

    emxArray->data = static_cast<real_T *>(newData);
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_merge(int32_T idx_data[], real_T x_data[], int32_T
  offset, int32_T np, int32_T nq, int32_T iwork_data[], real_T xwork_data[])
{
  if (nq != 0) {
    int32_T iout;
    int32_T offset1;
    int32_T p;
    int32_T q;
    offset1 = np + nq;
    for (q = 0; q < offset1; q++) {
      iout = offset + q;
      iwork_data[q] = idx_data[iout];
      xwork_data[q] = x_data[iout];
    }

    p = 0;
    q = np;
    iout = offset - 1;
    int32_T exitg1;
    do {
      exitg1 = 0;
      iout++;
      if (xwork_data[p] <= xwork_data[q]) {
        idx_data[iout] = iwork_data[p];
        x_data[iout] = xwork_data[p];
        if (p + 1 < np) {
          p++;
        } else {
          exitg1 = 1;
        }
      } else {
        idx_data[iout] = iwork_data[q];
        x_data[iout] = xwork_data[q];
        if (q + 1 < offset1) {
          q++;
        } else {
          offset1 = iout - p;
          for (q = p + 1; q <= np; q++) {
            iout = offset1 + q;
            idx_data[iout] = iwork_data[q - 1];
            x_data[iout] = xwork_data[q - 1];
          }

          exitg1 = 1;
        }
      }
    } while (exitg1 == 0);
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_sort(real_T x_data[], const int32_T *x_size, int32_T
  idx_data[], int32_T *idx_size)
{
  int32_T bLen;
  int32_T d_k;
  int32_T i3;
  int32_T i4;
  int32_T tailOffset;
  int32_T vwork_size_idx_0;
  int8_T perm;
  int8_T perm_0;
  int8_T perm_1;
  int8_T perm_2;
  Subsystem_B.dim = 0;
  if (*x_size != 1) {
    Subsystem_B.dim = -1;
    tailOffset = *x_size;
  } else {
    tailOffset = 1;
  }

  Subsystem_B.b = tailOffset - 1;
  vwork_size_idx_0 = tailOffset;
  *idx_size = *x_size;
  Subsystem_B.vstride = 1;
  for (bLen = 0; bLen <= Subsystem_B.dim; bLen++) {
    Subsystem_B.vstride *= *x_size;
  }

  for (Subsystem_B.dim = 0; Subsystem_B.dim < Subsystem_B.vstride;
       Subsystem_B.dim++) {
    for (bLen = 0; bLen <= Subsystem_B.b; bLen++) {
      Subsystem_B.vwork_data[bLen] = x_data[bLen * Subsystem_B.vstride +
        Subsystem_B.dim];
    }

    if (vwork_size_idx_0 - 1 >= 0) {
      std::memcpy(&Subsystem_B.b_x_data[0], &Subsystem_B.vwork_data[0],
                  static_cast<uint32_T>(vwork_size_idx_0) * sizeof(real_T));
    }

    if (static_cast<uint8_T>(vwork_size_idx_0) - 1 >= 0) {
      std::memset(&Subsystem_B.b_idx_data[0], 0, static_cast<uint8_T>
                  (vwork_size_idx_0) * sizeof(int32_T));
    }

    if (vwork_size_idx_0 != 0) {
      if (static_cast<uint8_T>(vwork_size_idx_0) - 1 >= 0) {
        std::memset(&Subsystem_B.b_idx_data[0], 0, static_cast<uint8_T>
                    (vwork_size_idx_0) * sizeof(int32_T));
      }

      Subsystem_B.x4[0] = 0.0;
      Subsystem_B.idx4[0] = 0U;
      Subsystem_B.x4[1] = 0.0;
      Subsystem_B.idx4[1] = 0U;
      Subsystem_B.x4[2] = 0.0;
      Subsystem_B.idx4[2] = 0U;
      Subsystem_B.x4[3] = 0.0;
      Subsystem_B.idx4[3] = 0U;
      std::memset(&Subsystem_B.vwork_data[0], 0, static_cast<uint32_T>
                  (vwork_size_idx_0) * sizeof(real_T));
      tailOffset = 0;
      Subsystem_B.ib = -1;
      for (d_k = 0; d_k < vwork_size_idx_0; d_k++) {
        if (std::isnan(Subsystem_B.b_x_data[d_k])) {
          Subsystem_B.quartetOffset = (vwork_size_idx_0 - tailOffset) - 1;
          Subsystem_B.b_idx_data[Subsystem_B.quartetOffset] = d_k + 1;
          Subsystem_B.vwork_data[Subsystem_B.quartetOffset] =
            Subsystem_B.b_x_data[d_k];
          tailOffset++;
        } else {
          Subsystem_B.ib++;
          Subsystem_B.idx4[Subsystem_B.ib] = static_cast<uint8_T>(d_k + 1);
          Subsystem_B.x4[Subsystem_B.ib] = Subsystem_B.b_x_data[d_k];
          if (Subsystem_B.ib + 1 == 4) {
            Subsystem_B.quartetOffset = d_k - tailOffset;
            if (Subsystem_B.x4[0] <= Subsystem_B.x4[1]) {
              Subsystem_B.ib = 1;
              bLen = 2;
            } else {
              Subsystem_B.ib = 2;
              bLen = 1;
            }

            if (Subsystem_B.x4[2] <= Subsystem_B.x4[3]) {
              i3 = 3;
              i4 = 4;
            } else {
              i3 = 4;
              i4 = 3;
            }

            Subsystem_B.d1 = Subsystem_B.x4[i3 - 1];
            Subsystem_B.d2 = Subsystem_B.x4[Subsystem_B.ib - 1];
            if (Subsystem_B.d2 <= Subsystem_B.d1) {
              Subsystem_B.d2 = Subsystem_B.x4[bLen - 1];
              if (Subsystem_B.d2 <= Subsystem_B.d1) {
                perm = static_cast<int8_T>(Subsystem_B.ib);
                perm_0 = static_cast<int8_T>(bLen);
                perm_1 = static_cast<int8_T>(i3);
                perm_2 = static_cast<int8_T>(i4);
              } else if (Subsystem_B.d2 <= Subsystem_B.x4[i4 - 1]) {
                perm = static_cast<int8_T>(Subsystem_B.ib);
                perm_0 = static_cast<int8_T>(i3);
                perm_1 = static_cast<int8_T>(bLen);
                perm_2 = static_cast<int8_T>(i4);
              } else {
                perm = static_cast<int8_T>(Subsystem_B.ib);
                perm_0 = static_cast<int8_T>(i3);
                perm_1 = static_cast<int8_T>(i4);
                perm_2 = static_cast<int8_T>(bLen);
              }
            } else {
              Subsystem_B.d1 = Subsystem_B.x4[i4 - 1];
              if (Subsystem_B.d2 <= Subsystem_B.d1) {
                if (Subsystem_B.x4[bLen - 1] <= Subsystem_B.d1) {
                  perm = static_cast<int8_T>(i3);
                  perm_0 = static_cast<int8_T>(Subsystem_B.ib);
                  perm_1 = static_cast<int8_T>(bLen);
                  perm_2 = static_cast<int8_T>(i4);
                } else {
                  perm = static_cast<int8_T>(i3);
                  perm_0 = static_cast<int8_T>(Subsystem_B.ib);
                  perm_1 = static_cast<int8_T>(i4);
                  perm_2 = static_cast<int8_T>(bLen);
                }
              } else {
                perm = static_cast<int8_T>(i3);
                perm_0 = static_cast<int8_T>(i4);
                perm_1 = static_cast<int8_T>(Subsystem_B.ib);
                perm_2 = static_cast<int8_T>(bLen);
              }
            }

            Subsystem_B.b_idx_data[Subsystem_B.quartetOffset - 3] =
              Subsystem_B.idx4[perm - 1];
            Subsystem_B.b_idx_data[Subsystem_B.quartetOffset - 2] =
              Subsystem_B.idx4[perm_0 - 1];
            Subsystem_B.b_idx_data[Subsystem_B.quartetOffset - 1] =
              Subsystem_B.idx4[perm_1 - 1];
            Subsystem_B.b_idx_data[Subsystem_B.quartetOffset] =
              Subsystem_B.idx4[perm_2 - 1];
            Subsystem_B.b_x_data[Subsystem_B.quartetOffset - 3] =
              Subsystem_B.x4[perm - 1];
            Subsystem_B.b_x_data[Subsystem_B.quartetOffset - 2] =
              Subsystem_B.x4[perm_0 - 1];
            Subsystem_B.b_x_data[Subsystem_B.quartetOffset - 1] =
              Subsystem_B.x4[perm_1 - 1];
            Subsystem_B.b_x_data[Subsystem_B.quartetOffset] =
              Subsystem_B.x4[perm_2 - 1];
            Subsystem_B.ib = -1;
          }
        }
      }

      d_k = vwork_size_idx_0 - tailOffset;
      if (Subsystem_B.ib + 1 > 0) {
        Subsystem_B.perm[1] = 0;
        Subsystem_B.perm[2] = 0;
        Subsystem_B.perm[3] = 0;
        switch (Subsystem_B.ib + 1) {
         case 1:
          Subsystem_B.perm[0] = 1;
          break;

         case 2:
          if (Subsystem_B.x4[0] <= Subsystem_B.x4[1]) {
            Subsystem_B.perm[0] = 1;
            Subsystem_B.perm[1] = 2;
          } else {
            Subsystem_B.perm[0] = 2;
            Subsystem_B.perm[1] = 1;
          }
          break;

         default:
          if (Subsystem_B.x4[0] <= Subsystem_B.x4[1]) {
            if (Subsystem_B.x4[1] <= Subsystem_B.x4[2]) {
              Subsystem_B.perm[0] = 1;
              Subsystem_B.perm[1] = 2;
              Subsystem_B.perm[2] = 3;
            } else if (Subsystem_B.x4[0] <= Subsystem_B.x4[2]) {
              Subsystem_B.perm[0] = 1;
              Subsystem_B.perm[1] = 3;
              Subsystem_B.perm[2] = 2;
            } else {
              Subsystem_B.perm[0] = 3;
              Subsystem_B.perm[1] = 1;
              Subsystem_B.perm[2] = 2;
            }
          } else if (Subsystem_B.x4[0] <= Subsystem_B.x4[2]) {
            Subsystem_B.perm[0] = 2;
            Subsystem_B.perm[1] = 1;
            Subsystem_B.perm[2] = 3;
          } else if (Subsystem_B.x4[1] <= Subsystem_B.x4[2]) {
            Subsystem_B.perm[0] = 2;
            Subsystem_B.perm[1] = 3;
            Subsystem_B.perm[2] = 1;
          } else {
            Subsystem_B.perm[0] = 3;
            Subsystem_B.perm[1] = 2;
            Subsystem_B.perm[2] = 1;
          }
          break;
        }

        bLen = static_cast<uint8_T>(Subsystem_B.ib + 1);
        for (i4 = 0; i4 < bLen; i4++) {
          perm = Subsystem_B.perm[i4];
          Subsystem_B.quartetOffset = ((d_k - Subsystem_B.ib) + i4) - 1;
          Subsystem_B.b_idx_data[Subsystem_B.quartetOffset] =
            Subsystem_B.idx4[perm - 1];
          Subsystem_B.b_x_data[Subsystem_B.quartetOffset] = Subsystem_B.x4[perm
            - 1];
        }
      }

      Subsystem_B.ib = tailOffset >> 1;
      for (i4 = 0; i4 < Subsystem_B.ib; i4++) {
        bLen = d_k + i4;
        i3 = Subsystem_B.b_idx_data[bLen];
        Subsystem_B.quartetOffset = (vwork_size_idx_0 - i4) - 1;
        Subsystem_B.b_idx_data[bLen] =
          Subsystem_B.b_idx_data[Subsystem_B.quartetOffset];
        Subsystem_B.b_idx_data[Subsystem_B.quartetOffset] = i3;
        Subsystem_B.b_x_data[bLen] =
          Subsystem_B.vwork_data[Subsystem_B.quartetOffset];
        Subsystem_B.b_x_data[Subsystem_B.quartetOffset] =
          Subsystem_B.vwork_data[bLen];
      }

      if ((static_cast<uint32_T>(tailOffset) & 1U) != 0U) {
        i4 = d_k + Subsystem_B.ib;
        Subsystem_B.b_x_data[i4] = Subsystem_B.vwork_data[i4];
      }

      if (d_k > 1) {
        if (static_cast<uint8_T>(vwork_size_idx_0) - 1 >= 0) {
          std::memset(&Subsystem_B.iwork_data[0], 0, static_cast<uint8_T>
                      (vwork_size_idx_0) * sizeof(int32_T));
        }

        i4 = d_k >> 2;
        bLen = 4;
        while (i4 > 1) {
          if ((static_cast<uint32_T>(i4) & 1U) != 0U) {
            i4--;
            tailOffset = bLen * i4;
            Subsystem_B.quartetOffset = d_k - tailOffset;
            if (Subsystem_B.quartetOffset > bLen) {
              Subsystem_merge(Subsystem_B.b_idx_data, Subsystem_B.b_x_data,
                              tailOffset, bLen, Subsystem_B.quartetOffset - bLen,
                              Subsystem_B.iwork_data, Subsystem_B.vwork_data);
            }
          }

          Subsystem_B.quartetOffset = bLen << 1;
          i4 >>= 1;
          for (tailOffset = 0; tailOffset < i4; tailOffset++) {
            Subsystem_merge(Subsystem_B.b_idx_data, Subsystem_B.b_x_data,
                            tailOffset * Subsystem_B.quartetOffset, bLen, bLen,
                            Subsystem_B.iwork_data, Subsystem_B.vwork_data);
          }

          bLen = Subsystem_B.quartetOffset;
        }

        if (d_k > bLen) {
          Subsystem_merge(Subsystem_B.b_idx_data, Subsystem_B.b_x_data, 0, bLen,
                          d_k - bLen, Subsystem_B.iwork_data,
                          Subsystem_B.vwork_data);
        }
      }
    }

    if (vwork_size_idx_0 - 1 >= 0) {
      std::memcpy(&Subsystem_B.vwork_data[0], &Subsystem_B.b_x_data[0],
                  static_cast<uint32_T>(vwork_size_idx_0) * sizeof(real_T));
    }

    for (bLen = 0; bLen <= Subsystem_B.b; bLen++) {
      tailOffset = bLen * Subsystem_B.vstride + Subsystem_B.dim;
      x_data[tailOffset] = Subsystem_B.b_x_data[bLen];
      idx_data[tailOffset] = Subsystem_B.b_idx_data[bLen];
    }
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_minimum_g4r(const real_T x[255], real_T *ex, int32_T
  *idx)
{
  int32_T b_idx;
  int32_T k;
  if (!std::isnan(x[0])) {
    b_idx = 1;
  } else {
    boolean_T exitg1;
    b_idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 256)) {
      if (!std::isnan(x[k - 1])) {
        b_idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (b_idx == 0) {
    *ex = x[0];
    *idx = 1;
  } else {
    *ex = x[b_idx - 1];
    *idx = b_idx;
    for (k = b_idx + 1; k < 256; k++) {
      real_T x_0;
      x_0 = x[k - 1];
      if (*ex > x_0) {
        *ex = x_0;
        *idx = k;
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_sum(const real_T x[220], real_T y[20])
{
  for (int32_T xi{0}; xi < 20; xi++) {
    real_T y_0;
    int32_T xpageoffset;
    xpageoffset = xi * 11;
    y_0 = x[xpageoffset];
    for (int32_T k{0}; k < 10; k++) {
      y_0 += x[(xpageoffset + k) + 1];
    }

    y[xi] = y_0;
  }
}

// Function for MATLAB Function: '<S1>/DSM'
boolean_T Subsystem::Subsystem_ifWhileCond(const boolean_T x[20])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T y;
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 20)) {
    if (!x[k]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_countLoops(const real_T xv[5], const real_T yv[5],
  int32_T *nloops, int32_T first[5], int32_T last[5])
{
  int32_T i;
  *nloops = 0;
  for (i = 0; i < 5; i++) {
    first[i] = 0;
    last[i] = 0;
  }

  i = 1;
  while ((i <= 5) && std::isnan(xv[i - 1])) {
    i++;
  }

  while (i <= 5) {
    int32_T kfirst;
    boolean_T exitg1;
    (*nloops)++;
    kfirst = i;
    first[*nloops - 1] = i;
    exitg1 = false;
    while ((!exitg1) && (i < 5)) {
      i++;
      if (std::isnan(xv[i - 1])) {
        i--;
        exitg1 = true;
      } else if (std::isnan(yv[i - 1])) {
        i--;
        exitg1 = true;
      }
    }

    if (xv[i - 1] == xv[kfirst - 1]) {
      if (yv[i - 1] == yv[kfirst - 1]) {
        if (kfirst != i) {
          last[*nloops - 1] = i - 1;
        } else {
          last[*nloops - 1] = i;
        }
      } else {
        last[*nloops - 1] = i;
      }
    } else {
      last[*nloops - 1] = i;
    }

    i += 2;
    while ((i <= 5) && std::isnan(xv[i - 1])) {
      i++;
    }
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_computeRange(const real_T xv[5], const real_T yv[5],
  int32_T nloops, const int32_T first[5], const int32_T last[5], real_T *minxv,
  real_T *maxxv, real_T *minyv, real_T *maxyv)
{
  int32_T b;
  *minxv = xv[first[0] - 1];
  *maxxv = *minxv;
  *minyv = yv[first[0] - 1];
  *maxyv = *minyv;
  b = static_cast<uint8_T>(nloops);
  for (int32_T k{0}; k < b; k++) {
    real_T lminxv_tmp;
    real_T xv_0;
    int32_T endIdx;
    int32_T first_0;
    first_0 = first[k];
    endIdx = last[k];
    lminxv_tmp = xv[first_0 - 1];
    Subsystem_B.lmaxxv = lminxv_tmp;
    for (int32_T i{first_0}; i <= endIdx; i++) {
      xv_0 = xv[i - 1];
      if (lminxv_tmp > xv_0) {
        lminxv_tmp = xv_0;
      }

      if (Subsystem_B.lmaxxv < xv_0) {
        Subsystem_B.lmaxxv = xv_0;
      }
    }

    first_0 = first[k];
    endIdx = last[k];
    xv_0 = yv[first_0 - 1];
    Subsystem_B.lmaxyv = xv_0;
    for (int32_T i{first_0}; i <= endIdx; i++) {
      real_T yv_0;
      yv_0 = yv[i - 1];
      if (xv_0 > yv_0) {
        xv_0 = yv_0;
      }

      if (Subsystem_B.lmaxyv < yv_0) {
        Subsystem_B.lmaxyv = yv_0;
      }
    }

    if (*minxv > lminxv_tmp) {
      *minxv = lminxv_tmp;
    }

    if (*maxxv < Subsystem_B.lmaxxv) {
      *maxxv = Subsystem_B.lmaxxv;
    }

    if (*minyv > xv_0) {
      *minyv = xv_0;
    }

    if (*maxyv < Subsystem_B.lmaxyv) {
      *maxyv = Subsystem_B.lmaxyv;
    }
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_computeScaleFactors(const real_T xv[5], const real_T
  yv[5], int32_T nloops, const int32_T first[5], const int32_T last[5], real_T
  scale[5])
{
  int32_T b;
  int32_T i;
  for (i = 0; i < 5; i++) {
    scale[i] = 0.0;
  }

  b = static_cast<uint8_T>(nloops);
  for (int32_T j{0}; j < b; j++) {
    real_T b_a;
    real_T c_b;
    int32_T c;
    int32_T d;
    c = first[j];
    d = last[j] - 1;
    for (i = c; i <= d; i++) {
      b_a = std::abs((xv[i - 1] + xv[i]) * 0.5);
      c_b = std::abs((yv[i - 1] + yv[i]) * 0.5);
      if ((b_a > 1.0) && (c_b > 1.0)) {
        b_a *= c_b;
      } else if (c_b > b_a) {
        b_a = c_b;
      } else if (std::isnan(b_a)) {
        b_a = c_b;
      }

      scale[i - 1] = b_a * 6.6613381477509392E-16;
    }

    i = first[j];
    c = last[j];
    b_a = std::abs((xv[c - 1] + xv[i - 1]) * 0.5);
    c_b = std::abs((yv[c - 1] + yv[i - 1]) * 0.5);
    if ((b_a > 1.0) && (c_b > 1.0)) {
      b_a *= c_b;
    } else if (c_b > b_a) {
      b_a = c_b;
    } else if (std::isnan(b_a)) {
      b_a = c_b;
    }

    scale[c - 1] = b_a * 6.6613381477509392E-16;
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_contrib(real_T x1, real_T b_y1, real_T x2, real_T y2,
  int8_T quad1, int8_T quad2, real_T scale, int8_T *diffQuad, boolean_T *onj)
{
  real_T cp;
  *onj = false;
  *diffQuad = static_cast<int8_T>(quad2 - quad1);
  cp = x1 * y2 - x2 * b_y1;
  if (std::abs(cp) < scale) {
    *onj = (x1 * x2 + b_y1 * y2 <= 0.0);
    if ((*diffQuad == 2) || (*diffQuad == -2)) {
      *diffQuad = 0;
    } else {
      switch (*diffQuad) {
       case -3:
        *diffQuad = 1;
        break;

       case 3:
        *diffQuad = -1;
        break;
      }
    }
  } else if (cp < 0.0) {
    switch (*diffQuad) {
     case 2:
      *diffQuad = -2;
      break;

     case -3:
      *diffQuad = 1;
      break;

     case 3:
      *diffQuad = -1;
      break;
    }
  } else {
    switch (*diffQuad) {
     case -2:
      *diffQuad = 2;
      break;

     case -3:
      *diffQuad = 1;
      break;

     case 3:
      *diffQuad = -1;
      break;
    }
  }
}

// Function for MATLAB Function: '<S1>/DSM'
boolean_T Subsystem::Subsystem_scalarInpolygon(real_T xj, real_T yj, const
  real_T xv[5], const real_T yv[5], int32_T nloops, const int32_T first[5],
  const int32_T last[5], real_T minxv, real_T maxxv, real_T minyv, real_T maxyv,
  const real_T scale[5])
{
  real_T xv1;
  real_T yv1;
  int32_T exitg1;
  int32_T exitg2;
  int32_T i;
  int32_T k;
  int8_T b_dquad;
  int8_T quad1;
  int8_T quad2;
  int8_T quadFirst;
  int8_T sdq;
  boolean_T inj;
  boolean_T onj;
  inj = false;
  if ((xj >= minxv) && (xj <= maxxv) && (yj >= minyv) && (yj <= maxyv)) {
    sdq = 0;
    k = 0;
    do {
      exitg2 = 0;
      if (k <= static_cast<uint8_T>(nloops) - 1) {
        Subsystem_B.xvFirst = xv[first[k] - 1] - xj;
        Subsystem_B.yvFirst = yv[first[k] - 1] - yj;
        if (Subsystem_B.xvFirst > 0.0) {
          if (Subsystem_B.yvFirst > 0.0) {
            quadFirst = 0;
          } else {
            quadFirst = 3;
          }
        } else if (Subsystem_B.yvFirst > 0.0) {
          quadFirst = 1;
        } else {
          quadFirst = 2;
        }

        Subsystem_B.xv2 = Subsystem_B.xvFirst;
        Subsystem_B.yv2 = Subsystem_B.yvFirst;
        quad2 = quadFirst;
        i = first[k];
        do {
          exitg1 = 0;
          if (i <= last[k] - 1) {
            xv1 = Subsystem_B.xv2;
            yv1 = Subsystem_B.yv2;
            Subsystem_B.xv2 = xv[i] - xj;
            Subsystem_B.yv2 = yv[i] - yj;
            quad1 = quad2;
            if (Subsystem_B.xv2 > 0.0) {
              if (Subsystem_B.yv2 > 0.0) {
                quad2 = 0;
              } else {
                quad2 = 3;
              }
            } else if (Subsystem_B.yv2 > 0.0) {
              quad2 = 1;
            } else {
              quad2 = 2;
            }

            Subsystem_contrib(xv1, yv1, Subsystem_B.xv2, Subsystem_B.yv2, quad1,
                              quad2, scale[i - 1], &b_dquad, &onj);
            if (onj) {
              inj = true;
              exitg1 = 1;
            } else {
              sdq = static_cast<int8_T>(sdq + b_dquad);
              i++;
            }
          } else {
            Subsystem_contrib(Subsystem_B.xv2, Subsystem_B.yv2,
                              Subsystem_B.xvFirst, Subsystem_B.yvFirst, quad2,
                              quadFirst, scale[last[k] - 1], &quad1, &onj);
            exitg1 = 2;
          }
        } while (exitg1 == 0);

        if (exitg1 == 1) {
          exitg2 = 1;
        } else if (onj) {
          inj = true;
          exitg2 = 1;
        } else {
          sdq = static_cast<int8_T>(sdq + quad1);
          k++;
        }
      } else {
        inj = (sdq != 0);
        exitg2 = 1;
      }
    } while (exitg2 == 0);
  }

  return inj;
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_inpolygon(const real_T xv[5], const real_T yv[5],
  boolean_T in[5])
{
  static const real_T b[5]{ -4.995, 0.0, 0.0, -4.995, -4.995 };

  static const real_T c[5]{ -0.9625, -0.9625, 0.9625, 0.9625, -0.9625 };

  int32_T j;
  int32_T nloops;
  for (nloops = 0; nloops < 5; nloops++) {
    in[nloops] = false;
  }

  Subsystem_countLoops(xv, yv, &nloops, Subsystem_B.first_c, Subsystem_B.last_k);
  if (nloops != 0) {
    Subsystem_computeRange(xv, yv, nloops, Subsystem_B.first_c,
      Subsystem_B.last_k, &Subsystem_B.minxv_c, &Subsystem_B.maxxv_f,
      &Subsystem_B.minyv_g, &Subsystem_B.maxyv_g);
    Subsystem_computeScaleFactors(xv, yv, nloops, Subsystem_B.first_c,
      Subsystem_B.last_k, Subsystem_B.scale_m);
    for (j = 0; j < 5; j++) {
      in[j] = Subsystem_scalarInpolygon(b[j], c[j], xv, yv, nloops,
        Subsystem_B.first_c, Subsystem_B.last_k, Subsystem_B.minxv_c,
        Subsystem_B.maxxv_f, Subsystem_B.minyv_g, Subsystem_B.maxyv_g,
        Subsystem_B.scale_m);
    }
  }
}

// Function for MATLAB Function: '<S1>/DSM'
real_T Subsystem::Subsystem_applyToMultipleDims(const boolean_T x[5])
{
  return (((static_cast<real_T>(x[0]) + static_cast<real_T>(x[1])) +
           static_cast<real_T>(x[2])) + static_cast<real_T>(x[3])) +
    static_cast<real_T>(x[4]);
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_inpolygon_f(const real_T x[5], const real_T y[5],
  const real_T xv[5], const real_T yv[5], boolean_T in[5])
{
  int32_T j;
  int32_T nloops;
  for (nloops = 0; nloops < 5; nloops++) {
    in[nloops] = false;
  }

  Subsystem_countLoops(xv, yv, &nloops, Subsystem_B.first, Subsystem_B.last);
  if (nloops != 0) {
    Subsystem_computeRange(xv, yv, nloops, Subsystem_B.first, Subsystem_B.last,
      &Subsystem_B.minxv, &Subsystem_B.maxxv, &Subsystem_B.minyv,
      &Subsystem_B.maxyv);
    Subsystem_computeScaleFactors(xv, yv, nloops, Subsystem_B.first,
      Subsystem_B.last, Subsystem_B.scale);
    for (j = 0; j < 5; j++) {
      in[j] = Subsystem_scalarInpolygon(x[j], y[j], xv, yv, nloops,
        Subsystem_B.first, Subsystem_B.last, Subsystem_B.minxv,
        Subsystem_B.maxxv, Subsystem_B.minyv, Subsystem_B.maxyv,
        Subsystem_B.scale);
    }
  }
}

// Function for MATLAB Function: '<S1>/DSM'
boolean_T Subsystem::Subsystem_all(const boolean_T x[5])
{
  int32_T k;
  boolean_T exitg1;
  boolean_T y;
  y = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 5)) {
    if (!x[k]) {
      y = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::Subsystem_all_k(const real_T x[16], boolean_T y[4])
{
  int32_T i2;
  y[0] = true;
  y[1] = true;
  y[2] = true;
  y[3] = true;
  i2 = 1;
  for (int32_T i{0}; i < 4; i++) {
    int32_T a;
    int32_T ix;
    boolean_T exitg1;
    a = i2 + 3;
    ix = i2;
    i2 += 4;
    exitg1 = false;
    while ((!exitg1) && (ix <= a)) {
      if (x[ix - 1] == 0.0) {
        y[i] = false;
        exitg1 = true;
      } else {
        ix++;
      }
    }
  }
}

// Function for MATLAB Function: '<S1>/DSM'
int32_T Subsystem::Subsystem_intnnz(const boolean_T s[4])
{
  int32_T n;
  n = 0;
  if (s[0]) {
    n = 1;
  }

  if (s[1]) {
    n++;
  }

  if (s[2]) {
    n++;
  }

  if (s[3]) {
    n++;
  }

  return n;
}

void Subsystem::Subsystem_emxFree_real_T(emxArray_real_T_Subsystem_T **pEmxArray)
{
  if (*pEmxArray != static_cast<emxArray_real_T_Subsystem_T *>(nullptr)) {
    if (((*pEmxArray)->data != static_cast<real_T *>(nullptr)) && (*pEmxArray)
        ->canFreeData) {
      std::free((*pEmxArray)->data);
    }

    std::free((*pEmxArray)->size);
    std::free(*pEmxArray);
    *pEmxArray = static_cast<emxArray_real_T_Subsystem_T *>(nullptr);
  }
}

// Function for MATLAB Function: '<S1>/DSM'
void Subsystem::DSMMaxCollisionProbabilityCN7_v(real_T SBEV_in[60903], const
  real_T State_trajectory[9], const real_T Target_X_pred[220], real_T
  EGO_SHAPE_FLAG_in, real_T *LANE_MARK_FLAG_out, real_T *EGO_SHAPE_FLAG_out)
{
  static const real_T wc[255]{ -0.2, -0.1952755905511811, -0.19055118110236222,
    -0.18582677165354333, -0.18110236220472442, -0.17637795275590551,
    -0.17165354330708663, -0.16692913385826774, -0.16220472440944883,
    -0.15748031496062992, -0.15275590551181104, -0.14803149606299215,
    -0.14330708661417324, -0.13858267716535433, -0.13385826771653545,
    -0.12913385826771656, -0.12440944881889765, -0.11968503937007875,
    -0.11496062992125985, -0.11023622047244096, -0.10551181102362206,
    -0.10078740157480316, -0.096062992125984265, -0.091338582677165367,
    -0.086614173228346469, -0.081889763779527572, -0.077165354330708674,
    -0.072440944881889791, -0.067716535433070879, -0.062992125984251968,
    -0.058267716535433084, -0.0535433070866142, -0.048818897637795289,
    -0.044094488188976377, -0.039370078740157494, -0.03464566929133861,
    -0.0299212598425197, -0.025196850393700787, -0.020472440944881903,
    -0.01574803149606302, -0.011023622047244108, -0.0062992125984251968,
    -0.0015748031496063131, 0.0031496062992125706, 0.0078740157480314821,
    0.012598425196850394, 0.017322834645669277, 0.022047244094488161,
    0.026771653543307072, 0.031496062992125984, 0.036220472440944868,
    0.040944881889763751, 0.045669291338582663, 0.050393700787401574,
    0.05511811023622043, 0.059842519685039341, 0.064566929133858253,
    0.069291338582677164, 0.074015748031496076, 0.078740157480314932,
    0.083464566929133843, 0.088188976377952755, 0.092913385826771611,
    0.097637795275590522, 0.10236220472440943, 0.10708661417322834,
    0.11181102362204726, 0.11653543307086611, 0.12125984251968502,
    0.12598425196850394, 0.13070866141732279, 0.1354330708661417,
    0.14015748031496061, 0.14488188976377953, 0.14960629921259844,
    0.15433070866141729, 0.1590551181102362, 0.16377952755905512,
    0.16850393700787397, 0.17322834645669288, 0.17795275590551179,
    0.18267716535433071, 0.18740157480314962, 0.19212598425196847,
    0.19685039370078738, 0.2015748031496063, 0.20629921259842515,
    0.21102362204724406, 0.21574803149606298, 0.22047244094488189,
    0.2251968503937008, 0.22992125984251965, 0.23464566929133857,
    0.23937007874015748, 0.24409448818897633, 0.24881889763779524,
    0.25354330708661416, 0.25826771653543307, 0.262992125984252,
    0.26771653543307083, 0.27244094488188975, 0.27716535433070866,
    0.28188976377952751, 0.28661417322834642, 0.29133858267716534,
    0.29606299212598425, 0.30078740157480316, 0.30551181102362207,
    0.31023622047244087, 0.31496062992125978, 0.31968503937007869,
    0.32440944881889761, 0.32913385826771652, 0.33385826771653543,
    0.33858267716535434, 0.34330708661417325, 0.34803149606299216,
    0.35275590551181096, 0.35748031496062987, 0.36220472440944879,
    0.3669291338582677, 0.37165354330708661, 0.37637795275590552,
    0.38110236220472443, 0.38582677165354323, 0.39055118110236214,
    0.39527559055118106, 0.39999999999999997, 0.40472440944881888,
    0.40944881889763779, 0.4141732283464567, 0.41889763779527561,
    0.42362204724409452, 0.42834645669291332, 0.43307086614173224,
    0.43779527559055115, 0.44251968503937006, 0.44724409448818897,
    0.45196850393700788, 0.45669291338582679, 0.46141732283464559,
    0.4661417322834645, 0.47086614173228342, 0.47559055118110233,
    0.48031496062992124, 0.48503937007874015, 0.48976377952755906,
    0.494488188976378, 0.49921259842519689, 0.50393700787401574,
    0.50866141732283454, 0.51338582677165356, 0.51811023622047236,
    0.52283464566929139, 0.52755905511811019, 0.53228346456692921,
    0.537007874015748, 0.54173228346456681, 0.54645669291338583,
    0.55118110236220463, 0.55590551181102366, 0.56062992125984246,
    0.56535433070866148, 0.57007874015748028, 0.5748031496062993,
    0.5795275590551181, 0.5842519685039369, 0.58897637795275593,
    0.59370078740157473, 0.59842519685039375, 0.60314960629921255,
    0.60787401574803157, 0.61259842519685037, 0.61732283464566917,
    0.62204724409448819, 0.626771653543307, 0.631496062992126,
    0.63622047244094482, 0.64094488188976384, 0.64566929133858264,
    0.65039370078740166, 0.65511811023622046, 0.65984251968503926,
    0.66456692913385829, 0.66929133858267709, 0.67401574803149611,
    0.67874015748031491, 0.68346456692913393, 0.68818897637795273,
    0.69291338582677153, 0.69763779527559056, 0.70236220472440936,
    0.70708661417322838, 0.71181102362204718, 0.7165354330708662,
    0.721259842519685, 0.725984251968504, 0.73070866141732282,
    0.73543307086614162, 0.74015748031496065, 0.74488188976377945,
    0.74960629921259847, 0.75433070866141727, 0.75905511811023629,
    0.76377952755905509, 0.76850393700787389, 0.77322834645669292,
    0.77795275590551172, 0.78267716535433074, 0.78740157480314954,
    0.79212598425196856, 0.79685039370078736, 0.80157480314960639,
    0.80629921259842519, 0.81102362204724421, 0.815748031496063,
    0.82047244094488181, 0.82519685039370083, 0.82992125984251963,
    0.83464566929133865, 0.83937007874015745, 0.84409448818897648,
    0.84881889763779528, 0.8535433070866143, 0.8582677165354331,
    0.8629921259842519, 0.86771653543307092, 0.87244094488188972,
    0.87716535433070875, 0.88188976377952755, 0.88661417322834657,
    0.89133858267716537, 0.89606299212598439, 0.90078740157480319,
    0.905511811023622, 0.910236220472441, 0.91496062992125982,
    0.91968503937007884, 0.92440944881889764, 0.92913385826771666,
    0.93385826771653546, 0.93858267716535426, 0.94330708661417328,
    0.94803149606299209, 0.95275590551181111, 0.95748031496062991,
    0.96220472440944893, 0.96692913385826773, 0.97165354330708653,
    0.97637795275590555, 0.98110236220472435, 0.98582677165354338,
    0.99055118110236218, 0.9952755905511812, 1.0 };

  static const real_T bd[201]{ 30.0, 29.8, 29.6, 29.4, 29.2, 29.0, 28.8, 28.6,
    28.4, 28.2, 28.0, 27.8, 27.6, 27.4, 27.2, 27.0, 26.8, 26.6, 26.4, 26.2, 26.0,
    25.8, 25.6, 25.4, 25.2, 25.0, 24.8, 24.6, 24.4, 24.2, 24.0, 23.8, 23.6, 23.4,
    23.2, 23.0, 22.8, 22.6, 22.4, 22.2, 22.0, 21.799999999999997, 21.6, 21.4,
    21.2, 21.0, 20.799999999999997, 20.6, 20.4, 20.2, 20.0, 19.799999999999997,
    19.6, 19.4, 19.2, 19.0, 18.799999999999997, 18.6, 18.4, 18.2, 18.0,
    17.799999999999997, 17.6, 17.4, 17.2, 17.0, 16.799999999999997, 16.6, 16.4,
    16.2, 16.0, 15.799999999999999, 15.6, 15.399999999999999, 15.2, 15.0,
    14.799999999999999, 14.6, 14.399999999999999, 14.2, 14.0, 13.8,
    13.599999999999998, 13.399999999999999, 13.2, 13.0, 12.8, 12.599999999999998,
    12.399999999999999, 12.2, 12.0, 11.8, 11.599999999999998, 11.399999999999999,
    11.2, 11.0, 10.799999999999997, 10.599999999999998, 10.399999999999999, 10.2,
    10.0, 9.7999999999999972, 9.5999999999999979, 9.3999999999999986, 9.2, 9.0,
    8.7999999999999972, 8.5999999999999979, 8.3999999999999986, 8.2, 8.0,
    7.7999999999999972, 7.5999999999999979, 7.3999999999999986,
    7.1999999999999993, 7.0, 6.7999999999999972, 6.5999999999999979,
    6.3999999999999986, 6.1999999999999993, 6.0, 5.7999999999999972,
    5.5999999999999979, 5.3999999999999986, 5.1999999999999993, 5.0,
    4.7999999999999972, 4.5999999999999979, 4.3999999999999986,
    4.1999999999999993, 4.0, 3.7999999999999972, 3.5999999999999979,
    3.3999999999999986, 3.1999999999999993, 3.0, 2.7999999999999972,
    2.5999999999999979, 2.3999999999999986, 2.1999999999999993, 2.0,
    1.7999999999999972, 1.5999999999999979, 1.3999999999999986,
    1.1999999999999993, 1.0, 0.79999999999999716, 0.59999999999999787,
    0.39999999999999858, 0.19999999999999929, 0.0, -0.20000000000000284,
    -0.40000000000000213, -0.60000000000000142, -0.80000000000000071, -1.0,
    -1.2000000000000028, -1.4000000000000021, -1.6000000000000014,
    -1.8000000000000007, -2.0, -2.2000000000000028, -2.3999999999999986,
    -2.6000000000000014, -2.8000000000000043, -3.0, -3.2000000000000028,
    -3.3999999999999986, -3.6000000000000014, -3.8000000000000043, -4.0,
    -4.2000000000000028, -4.3999999999999986, -4.6000000000000014,
    -4.8000000000000043, -5.0, -5.2000000000000028, -5.3999999999999986,
    -5.6000000000000014, -5.8000000000000043, -6.0, -6.2000000000000028,
    -6.3999999999999986, -6.6000000000000014, -6.8000000000000043, -7.0,
    -7.2000000000000028, -7.3999999999999986, -7.6000000000000014,
    -7.8000000000000043, -8.0, -8.2000000000000028, -8.4000000000000057,
    -8.6000000000000014, -8.8000000000000043, -9.0, -9.2000000000000028,
    -9.4000000000000057, -9.6000000000000014, -9.8000000000000043, -10.0 };

  static const real_T yc[101]{ 10.0, 9.8, 9.6000000000000014, 9.4,
    9.2000000000000011, 9.0, 8.8, 8.6, 8.4, 8.2000000000000011, 8.0,
    7.8000000000000007, 7.6000000000000005, 7.4, 7.2, 7.0, 6.8000000000000007,
    6.6000000000000005, 6.4, 6.2, 6.0, 5.8000000000000007, 5.6000000000000005,
    5.4, 5.2, 5.0, 4.8000000000000007, 4.6000000000000005, 4.4, 4.2, 4.0,
    3.8000000000000003, 3.6, 3.4000000000000004, 3.2, 3.0, 2.8000000000000003,
    2.6, 2.4000000000000004, 2.2, 2.0, 1.8, 1.6, 1.4000000000000001,
    1.2000000000000002, 1.0, 0.8, 0.60000000000000009, 0.4, 0.2, 0.0, -0.2, -0.4,
    -0.60000000000000009, -0.8, -1.0, -1.2000000000000002, -1.4000000000000001,
    -1.6, -1.8, -2.0, -2.2, -2.4000000000000004, -2.6, -2.8000000000000003, -3.0,
    -3.2, -3.4000000000000004, -3.6, -3.8000000000000003, -4.0, -4.2, -4.4,
    -4.6000000000000005, -4.8000000000000007, -5.0, -5.2, -5.4,
    -5.6000000000000005, -5.8000000000000007, -6.0, -6.2, -6.4,
    -6.6000000000000005, -6.8000000000000007, -7.0, -7.2, -7.4,
    -7.6000000000000005, -7.8000000000000007, -8.0, -8.2000000000000011, -8.4,
    -8.6, -8.8, -9.0, -9.2000000000000011, -9.4, -9.6000000000000014, -9.8,
    -10.0 };

  static const real_T ad[5]{ -4.995, 0.0, 0.0, -4.995, -4.995 };

  static const real_T xc[5]{ -0.9625, -0.9625, 0.9625, 0.9625, -0.9625 };

  emxArray_real_T_Subsystem_T *pixel_info;
  boolean_T exitg1;
  boolean_T g;
  boolean_T guard1;
  boolean_T guard11;
  boolean_T guard2;
  boolean_T guard3;
  boolean_T guard4;
  Subsystem_B.Target_Shape_Exist_Flag = 0;
  Subsystem_B.Target_Exist_in_Input_SBEV = 0;
  Subsystem_B.y_cross_1 = 0.0;
  Subsystem_B.x_cross_1 = 0.0;
  Subsystem_B.y_cross_2 = 0.0;
  Subsystem_B.x_cross_2 = 0.0;
  Subsystem_B.c_overlap_btw_ego_pred_detail_f = 0;
  if (!Subsystem_isequal(SBEV_in)) {
    Subsystem_B.Target_Exist_in_Input_SBEV = 1;
  }

  Subsystem_B.tmp_target_y_vertex_tmp_tmp = -State_trajectory[4] / 2.0;
  Subsystem_B.tmp_target_y_vertex_tmp[0] =
    Subsystem_B.tmp_target_y_vertex_tmp_tmp;
  Subsystem_B.tmp_target_y_vertex_tmp[1] =
    Subsystem_B.tmp_target_y_vertex_tmp_tmp;
  Subsystem_B.tmp_target_y_vertex_tmp[2] = State_trajectory[4] / 2.0;
  Subsystem_B.tmp_target_y_vertex_tmp[3] = State_trajectory[4] / 2.0;
  Subsystem_B.tmp_target_y_vertex_tmp[4] =
    Subsystem_B.tmp_target_y_vertex_tmp_tmp;
  Subsystem_B.tmp_target_x_vertex_tmp[0] = 0.0;
  Subsystem_B.tmp_target_x_vertex_tmp[1] = State_trajectory[5];
  Subsystem_B.tmp_target_x_vertex_tmp[2] = State_trajectory[5];
  Subsystem_B.tmp_target_x_vertex_tmp[3] = 0.0;
  Subsystem_B.tmp_target_x_vertex_tmp[4] = 0.0;
  Subsystem_B.tmp_target_y_vertex_tmp_tmp = std::sin(State_trajectory[6]);
  Subsystem_B.c_x_tmp = std::cos(State_trajectory[6]);
  Subsystem_B.y_f = State_trajectory[0];
  Subsystem_B.x_cross = State_trajectory[1];
  for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
       Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
       Subsystem_B.c_vertex_index_beforeCurrentNex++) {
    Subsystem_B.i_row =
      Subsystem_B.tmp_target_x_vertex_tmp[Subsystem_B.c_vertex_index_beforeCurrentNex];
    Subsystem_B.tmp_base =
      Subsystem_B.tmp_target_y_vertex_tmp[Subsystem_B.c_vertex_index_beforeCurrentNex];
    Subsystem_B.f_row = Subsystem_B.i_row *
      Subsystem_B.tmp_target_y_vertex_tmp_tmp + Subsystem_B.tmp_base *
      Subsystem_B.c_x_tmp;
    Subsystem_B.target_y_vertex_rot[Subsystem_B.c_vertex_index_beforeCurrentNex]
      = Subsystem_B.f_row;
    Subsystem_B.i_row = Subsystem_B.i_row * Subsystem_B.c_x_tmp -
      Subsystem_B.tmp_base * Subsystem_B.tmp_target_y_vertex_tmp_tmp;
    Subsystem_B.target_x_vertex_rot[Subsystem_B.c_vertex_index_beforeCurrentNex]
      = Subsystem_B.i_row;
    Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex] =
      Subsystem_B.f_row + Subsystem_B.y_f;
    Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex] =
      Subsystem_B.i_row + Subsystem_B.x_cross;
  }

  Subsystem_B.tmp_base = Subsystem_minimum(Subsystem_B.target_y);
  guard1 = false;
  if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 10.0)) {
    guard1 = true;
  } else {
    Subsystem_B.tmp_base = Subsystem_maximum(Subsystem_B.target_y);
    if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 10.0)) {
      guard1 = true;
    }
  }

  if (guard1) {
    Subsystem_B.tmp_base = Subsystem_minimum(Subsystem_B.target_x);
    if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 30.0)) {
      Subsystem_B.Target_Shape_Exist_Flag = 1;
    } else {
      Subsystem_B.tmp_base = Subsystem_maximum(Subsystem_B.target_x);
      if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 30.0)) {
        Subsystem_B.Target_Shape_Exist_Flag = 1;
      }
    }
  }

  *LANE_MARK_FLAG_out = 0.0;
  Subsystem_emxInit_real_T(&pixel_info, 2);
  if ((Subsystem_B.Target_Shape_Exist_Flag == 1) && (EGO_SHAPE_FLAG_in == 0.0))
  {
    Subsystem_B.ego_x_contour_total_size = 200;
    Subsystem_B.ego_y_contour_total_size = 200;
    std::memset(&Subsystem_B.ego_x_contour_total_data[0], 0, 200U * sizeof
                (real_T));
    std::memset(&Subsystem_B.ego_y_contour_total_data[0], 0, 200U * sizeof
                (real_T));
    Subsystem_B.i_row = 1.0;
    Subsystem_B.f_row = 0.0;
    for (Subsystem_B.tmp_i = 0; Subsystem_B.tmp_i < 4; Subsystem_B.tmp_i++) {
      Subsystem_B.tmp_base = xc[Subsystem_B.tmp_i];
      for (Subsystem_B.prediction_time_step_at_overlap = 0;
           Subsystem_B.prediction_time_step_at_overlap < 101;
           Subsystem_B.prediction_time_step_at_overlap++) {
        Subsystem_B.b_varargin_1[Subsystem_B.prediction_time_step_at_overlap] =
          std::abs(Subsystem_B.tmp_base -
                   yc[Subsystem_B.prediction_time_step_at_overlap]);
      }

      Subsystem_minimum_g(Subsystem_B.b_varargin_1, &Subsystem_B.tmp_base,
                          &Subsystem_B.prediction_time_step_at_overlap);
      Subsystem_B.tmp_base = ad[Subsystem_B.tmp_i];
      for (Subsystem_B.overlap_btw_ego_pred_flag = 0;
           Subsystem_B.overlap_btw_ego_pred_flag < 201;
           Subsystem_B.overlap_btw_ego_pred_flag++) {
        Subsystem_B.c_varargin_1[Subsystem_B.overlap_btw_ego_pred_flag] = std::
          abs(Subsystem_B.tmp_base - bd[Subsystem_B.overlap_btw_ego_pred_flag]);
      }

      Subsystem_minimum_g4(Subsystem_B.c_varargin_1, &Subsystem_B.tmp_base,
                           &Subsystem_B.overlap_btw_ego_pred_flag);
      Subsystem_B.tmp_base = xc[Subsystem_B.tmp_i + 1];
      for (Subsystem_B.c_prediction_time_step_detail_a = 0;
           Subsystem_B.c_prediction_time_step_detail_a < 101;
           Subsystem_B.c_prediction_time_step_detail_a++) {
        Subsystem_B.b_varargin_1[Subsystem_B.c_prediction_time_step_detail_a] =
          std::abs(Subsystem_B.tmp_base -
                   yc[Subsystem_B.c_prediction_time_step_detail_a]);
      }

      Subsystem_minimum_g(Subsystem_B.b_varargin_1, &Subsystem_B.tmp_base,
                          &Subsystem_B.c_prediction_time_step_detail_a);
      Subsystem_B.tmp_base = ad[Subsystem_B.tmp_i + 1];
      for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
           Subsystem_B.c_vertex_index_beforeCurrentNex < 201;
           Subsystem_B.c_vertex_index_beforeCurrentNex++) {
        Subsystem_B.c_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex] =
          std::abs(Subsystem_B.tmp_base -
                   bd[Subsystem_B.c_vertex_index_beforeCurrentNex]);
      }

      Subsystem_minimum_g4(Subsystem_B.c_varargin_1, &Subsystem_B.tmp_base,
                           &Subsystem_B.c_vertex_index_beforeCurrentNex);
      Subsystem_plotLine(static_cast<real_T>
                         (Subsystem_B.overlap_btw_ego_pred_flag),
                         static_cast<real_T>
                         (Subsystem_B.prediction_time_step_at_overlap),
                         static_cast<real_T>
                         (Subsystem_B.c_vertex_index_beforeCurrentNex),
                         static_cast<real_T>
                         (Subsystem_B.c_prediction_time_step_detail_a),
                         Subsystem_B.c_varargin_1,
                         &Subsystem_B.ego_y_contour_total_size,
                         Subsystem_B.tmp_y_contour_data,
                         &Subsystem_B.tmp_y_contour_size);
      Subsystem_B.f_row = (Subsystem_B.i_row + static_cast<real_T>
                           (Subsystem_B.ego_y_contour_total_size)) - 1.0;
      if (Subsystem_B.i_row > Subsystem_B.f_row) {
        Subsystem_B.prediction_time_step_at_overlap = 0;
        Subsystem_B.overlap_btw_ego_pred_flag = 0;
      } else {
        Subsystem_B.prediction_time_step_at_overlap = static_cast<int32_T>
          (Subsystem_B.i_row) - 1;
        Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
          (Subsystem_B.f_row);
      }

      Subsystem_B.index_pred_detail = Subsystem_B.overlap_btw_ego_pred_flag -
        Subsystem_B.prediction_time_step_at_overlap;
      for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
           Subsystem_B.c_vertex_index_beforeCurrentNex <
           Subsystem_B.index_pred_detail;
           Subsystem_B.c_vertex_index_beforeCurrentNex++) {
        Subsystem_B.ego_x_contour_total_data[Subsystem_B.prediction_time_step_at_overlap
          + Subsystem_B.c_vertex_index_beforeCurrentNex] =
          Subsystem_B.c_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex];
      }

      if (Subsystem_B.i_row > Subsystem_B.f_row) {
        Subsystem_B.prediction_time_step_at_overlap = 0;
        Subsystem_B.overlap_btw_ego_pred_flag = 0;
      } else {
        Subsystem_B.prediction_time_step_at_overlap = static_cast<int32_T>
          (Subsystem_B.i_row) - 1;
        Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
          (Subsystem_B.f_row);
      }

      Subsystem_B.index_pred_detail = Subsystem_B.overlap_btw_ego_pred_flag -
        Subsystem_B.prediction_time_step_at_overlap;
      for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
           Subsystem_B.c_vertex_index_beforeCurrentNex <
           Subsystem_B.index_pred_detail;
           Subsystem_B.c_vertex_index_beforeCurrentNex++) {
        Subsystem_B.ego_y_contour_total_data[Subsystem_B.prediction_time_step_at_overlap
          + Subsystem_B.c_vertex_index_beforeCurrentNex] =
          Subsystem_B.tmp_y_contour_data[Subsystem_B.c_vertex_index_beforeCurrentNex];
      }

      Subsystem_B.i_row = Subsystem_B.f_row + 1.0;
    }

    Subsystem_B.ego_x_contour_total_tmp_size[0] = 1;
    Subsystem_B.ego_x_contour_total_tmp_size[1] = static_cast<int32_T>(200.0 -
      (Subsystem_B.f_row + 1.0)) + 1;
    Subsystem_B.index_pred_detail = static_cast<int32_T>(200.0 -
      (Subsystem_B.f_row + 1.0));
    for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
         Subsystem_B.c_vertex_index_beforeCurrentNex <=
         Subsystem_B.index_pred_detail;
         Subsystem_B.c_vertex_index_beforeCurrentNex++) {
      Subsystem_B.ego_x_contour_total_tmp_data[Subsystem_B.c_vertex_index_beforeCurrentNex]
        = static_cast<int32_T>((Subsystem_B.f_row + 1.0) + static_cast<real_T>
        (Subsystem_B.c_vertex_index_beforeCurrentNex));
    }

    Subsystem_nullAssignment(Subsystem_B.ego_x_contour_total_data,
      &Subsystem_B.ego_x_contour_total_size,
      Subsystem_B.ego_x_contour_total_tmp_data,
      Subsystem_B.ego_x_contour_total_tmp_size);
    Subsystem_nullAssignment(Subsystem_B.ego_y_contour_total_data,
      &Subsystem_B.ego_y_contour_total_size,
      Subsystem_B.ego_x_contour_total_tmp_data,
      Subsystem_B.ego_x_contour_total_tmp_size);
    Subsystem_B.c_vertex_index_beforeCurrentNex = pixel_info->size[0] *
      pixel_info->size[1];
    pixel_info->size[0] = static_cast<int32_T>(Subsystem_B.f_row);
    pixel_info->size[1] = 3;
    Subsys_emxEnsureCapacity_real_T(pixel_info,
      Subsystem_B.c_vertex_index_beforeCurrentNex);
    Subsystem_B.index_pred_detail = static_cast<int32_T>(Subsystem_B.f_row) * 3;
    if (Subsystem_B.index_pred_detail - 1 >= 0) {
      std::memset(&pixel_info->data[0], 0, static_cast<uint32_T>
                  (Subsystem_B.index_pred_detail) * sizeof(real_T));
    }

    Subsystem_B.sorted_x_contour_total_size =
      Subsystem_B.ego_x_contour_total_size;
    Subsystem_B.index_pred_detail = Subsystem_B.ego_x_contour_total_size;
    if (Subsystem_B.index_pred_detail - 1 >= 0) {
      std::memcpy(&Subsystem_B.sorted_x_contour_total_data[0],
                  &Subsystem_B.ego_x_contour_total_data[0], static_cast<uint32_T>
                  (Subsystem_B.index_pred_detail) * sizeof(real_T));
    }

    Subsystem_sort(Subsystem_B.sorted_x_contour_total_data,
                   &Subsystem_B.sorted_x_contour_total_size,
                   Subsystem_B.ego_x_contour_total_tmp_data,
                   &Subsystem_B.ego_y_contour_total_size);
    Subsystem_B.f_row = 1000.0;
    Subsystem_B.y_f = 0.0;
    Subsystem_B.i_row = 0.0;
    Subsystem_B.overlap_btw_ego_pred_flag = Subsystem_B.ego_x_contour_total_size;
    for (Subsystem_B.prediction_time_step_at_overlap = 0;
         Subsystem_B.prediction_time_step_at_overlap <=
         Subsystem_B.overlap_btw_ego_pred_flag - 2;
         Subsystem_B.prediction_time_step_at_overlap++) {
      Subsystem_B.x_cross =
        Subsystem_B.sorted_x_contour_total_data[Subsystem_B.prediction_time_step_at_overlap];
      if (Subsystem_B.sorted_x_contour_total_data[Subsystem_B.prediction_time_step_at_overlap
          + 1] == Subsystem_B.x_cross) {
        Subsystem_B.tmp_i =
          Subsystem_B.ego_x_contour_total_tmp_data[Subsystem_B.prediction_time_step_at_overlap];
        Subsystem_B.tmp_base =
          Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
        if (Subsystem_B.tmp_base > Subsystem_B.y_f) {
          Subsystem_B.y_f =
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
        }

        if (Subsystem_B.tmp_base < Subsystem_B.f_row) {
          Subsystem_B.f_row =
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
        }

        if (Subsystem_B.prediction_time_step_at_overlap + 1 ==
            Subsystem_B.ego_x_contour_total_size - 1) {
          Subsystem_B.i_row++;
          pixel_info->data[static_cast<int32_T>(Subsystem_B.i_row) - 1] =
            Subsystem_B.x_cross;
          Subsystem_B.tmp_i =
            Subsystem_B.ego_x_contour_total_tmp_data[Subsystem_B.prediction_time_step_at_overlap
            + 1];
          Subsystem_B.tmp_base =
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
          if (Subsystem_B.f_row > Subsystem_B.tmp_base) {
            Subsystem_B.f_row =
              Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
          }

          if (Subsystem_B.y_f < Subsystem_B.tmp_base) {
            Subsystem_B.y_f = Subsystem_B.tmp_base;
          }

          pixel_info->data[(static_cast<int32_T>(Subsystem_B.i_row) +
                            pixel_info->size[0]) - 1] = Subsystem_B.f_row;
          pixel_info->data[(static_cast<int32_T>(Subsystem_B.i_row) +
                            (pixel_info->size[0] << 1)) - 1] = Subsystem_B.y_f;
        }
      } else {
        Subsystem_B.i_row++;
        pixel_info->data[static_cast<int32_T>(Subsystem_B.i_row) - 1] =
          Subsystem_B.x_cross;
        if (Subsystem_B.prediction_time_step_at_overlap + 1 == 1) {
          Subsystem_B.f_row =
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.ego_x_contour_total_tmp_data
            [0] - 1];
          Subsystem_B.y_f = Subsystem_B.f_row;
        } else if (Subsystem_B.prediction_time_step_at_overlap + 1 ==
                   Subsystem_B.ego_x_contour_total_size - 1) {
          Subsystem_B.tmp_base =
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.ego_x_contour_total_tmp_data
            [Subsystem_B.prediction_time_step_at_overlap + 1] - 1];
          pixel_info->data[(static_cast<int32_T>(Subsystem_B.i_row + 1.0) +
                            pixel_info->size[0]) - 1] = Subsystem_B.tmp_base;
          pixel_info->data[(static_cast<int32_T>(Subsystem_B.i_row + 1.0) +
                            (pixel_info->size[0] << 1)) - 1] =
            Subsystem_B.tmp_base;
        } else if (Subsystem_B.f_row == Subsystem_B.y_f) {
          Subsystem_B.tmp_base =
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.ego_x_contour_total_tmp_data
            [Subsystem_B.prediction_time_step_at_overlap] - 1];
          Subsystem_B.y_f =
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.ego_x_contour_total_tmp_data
            [Subsystem_B.prediction_time_step_at_overlap - 1] - 1];
          if (Subsystem_B.y_f > Subsystem_B.tmp_base) {
            Subsystem_B.f_row = Subsystem_B.tmp_base;
          } else if (Subsystem_B.y_f < Subsystem_B.tmp_base) {
            Subsystem_B.f_row = Subsystem_B.y_f;
            Subsystem_B.y_f = Subsystem_B.tmp_base;
          } else {
            Subsystem_B.f_row = Subsystem_B.y_f;
          }
        } else {
          Subsystem_B.tmp_i =
            Subsystem_B.ego_x_contour_total_tmp_data[Subsystem_B.prediction_time_step_at_overlap];
          Subsystem_B.tmp_base =
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
          if (Subsystem_B.f_row > Subsystem_B.tmp_base) {
            Subsystem_B.f_row =
              Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
          }

          if (Subsystem_B.y_f < Subsystem_B.tmp_base) {
            Subsystem_B.y_f = Subsystem_B.tmp_base;
          }
        }

        pixel_info->data[(static_cast<int32_T>(Subsystem_B.i_row) +
                          pixel_info->size[0]) - 1] = Subsystem_B.f_row;
        pixel_info->data[(static_cast<int32_T>(Subsystem_B.i_row) +
                          (pixel_info->size[0] << 1)) - 1] = Subsystem_B.y_f;
        Subsystem_B.f_row = 1000.0;
        Subsystem_B.y_f = 0.0;
      }
    }

    Subsystem_B.prediction_time_step_at_overlap = 0;
    while ((Subsystem_B.prediction_time_step_at_overlap <= pixel_info->size[0] -
            1) && (pixel_info->data[Subsystem_B.prediction_time_step_at_overlap]
                   != 0.0)) {
      Subsystem_B.i_row = pixel_info->
        data[Subsystem_B.prediction_time_step_at_overlap + pixel_info->size[0]];
      Subsystem_B.tmp_base = pixel_info->data[(pixel_info->size[0] << 1) +
        Subsystem_B.prediction_time_step_at_overlap];
      if (Subsystem_B.i_row > Subsystem_B.tmp_base) {
        Subsystem_B.overlap_btw_ego_pred_flag = 0;
        Subsystem_B.tmp_i = 0;
      } else {
        Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
          (Subsystem_B.i_row) - 1;
        Subsystem_B.tmp_i = static_cast<int32_T>(Subsystem_B.tmp_base);
      }

      Subsystem_B.index_pred_detail = Subsystem_B.tmp_i -
        Subsystem_B.overlap_btw_ego_pred_flag;
      Subsystem_B.tmp_i = static_cast<int32_T>(pixel_info->
        data[Subsystem_B.prediction_time_step_at_overlap]);
      for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
           Subsystem_B.c_vertex_index_beforeCurrentNex < 3;
           Subsystem_B.c_vertex_index_beforeCurrentNex++) {
        for (Subsystem_B.c_prediction_time_step_detail_a = 0;
             Subsystem_B.c_prediction_time_step_detail_a <
             Subsystem_B.index_pred_detail;
             Subsystem_B.c_prediction_time_step_detail_a++) {
          SBEV_in[((Subsystem_B.tmp_i + 201 *
                    (Subsystem_B.overlap_btw_ego_pred_flag +
                     Subsystem_B.c_prediction_time_step_detail_a)) + 20301 *
                   Subsystem_B.c_vertex_index_beforeCurrentNex) - 1] = 0.0;
        }
      }

      Subsystem_B.prediction_time_step_at_overlap++;
    }

    EGO_SHAPE_FLAG_in = 1.0;
  }

  *EGO_SHAPE_FLAG_out = EGO_SHAPE_FLAG_in;
  if (Subsystem_B.Target_Shape_Exist_Flag == 1) {
    if (!Subsystem_isequal(SBEV_in)) {
      Subsystem_B.y_f = State_trajectory[8];
      for (Subsystem_B.tmp_i = 0; Subsystem_B.tmp_i < 255; Subsystem_B.tmp_i++)
      {
        Subsystem_B.varargin_1[Subsystem_B.tmp_i] = std::abs(Subsystem_B.y_f -
          wc[Subsystem_B.tmp_i]);
      }

      Subsystem_minimum_g4r(Subsystem_B.varargin_1, &Subsystem_B.i_row,
                            &Subsystem_B.tmp_i);
      Subsystem_sum(Target_X_pred, Subsystem_B.dv);
      for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
           Subsystem_B.c_vertex_index_beforeCurrentNex < 20;
           Subsystem_B.c_vertex_index_beforeCurrentNex++) {
        Subsystem_B.bv[Subsystem_B.c_vertex_index_beforeCurrentNex] =
          (Subsystem_B.dv[Subsystem_B.c_vertex_index_beforeCurrentNex] != 0.0);
      }

      if (Subsystem_ifWhileCond(Subsystem_B.bv)) {
        Subsystem_B.overlap_btw_ego_pred_flag = 0;
        Subsystem_B.prediction_time_step_at_overlap = 0;
        Subsystem_B.c_prediction_time_step_detail_a = 0;
        guard1 = false;
        exitg1 = false;
        while ((!exitg1) && (Subsystem_B.c_prediction_time_step_detail_a < 5)) {
          Subsystem_B.index_pred_detail = static_cast<int32_T>(std::round((
            static_cast<real_T>(Subsystem_B.c_prediction_time_step_detail_a) +
            1.0) * 0.2 / 0.05)) - 1;
          Subsystem_B.i_row = Target_X_pred[11 * Subsystem_B.index_pred_detail +
            8];
          Subsystem_B.m_x_tmp = std::sin(Subsystem_B.i_row);
          Subsystem_B.tmp_y_vertex_1 = std::cos(Subsystem_B.i_row);
          Subsystem_B.y_f = Target_X_pred[11 * Subsystem_B.index_pred_detail];
          Subsystem_B.x_cross = Target_X_pred[11 * Subsystem_B.index_pred_detail
            + 3];
          for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
               Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
               Subsystem_B.c_vertex_index_beforeCurrentNex++) {
            Subsystem_B.i_row =
              Subsystem_B.tmp_target_x_vertex_tmp[Subsystem_B.c_vertex_index_beforeCurrentNex];
            Subsystem_B.tmp_base =
              Subsystem_B.tmp_target_y_vertex_tmp[Subsystem_B.c_vertex_index_beforeCurrentNex];
            Subsystem_B.f_row = Subsystem_B.i_row * Subsystem_B.m_x_tmp +
              Subsystem_B.tmp_base * Subsystem_B.tmp_y_vertex_1;
            Subsystem_B.target_y_vertex_rot[Subsystem_B.c_vertex_index_beforeCurrentNex]
              = Subsystem_B.f_row;
            Subsystem_B.i_row = Subsystem_B.i_row * Subsystem_B.tmp_y_vertex_1 -
              Subsystem_B.tmp_base * Subsystem_B.m_x_tmp;
            Subsystem_B.target_x_vertex_rot[Subsystem_B.c_vertex_index_beforeCurrentNex]
              = Subsystem_B.i_row;
            Subsystem_B.tmp_base = Subsystem_B.f_row + Subsystem_B.y_f;
            Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG =
              Subsystem_B.c_vertex_index_beforeCurrentNex << 1;
            Subsystem_B.target_vertex[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG] =
              Subsystem_B.tmp_base;
            Subsystem_B.i_row += Subsystem_B.x_cross;
            Subsystem_B.target_vertex[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG + 1] =
              Subsystem_B.i_row;
            Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex] =
              Subsystem_B.i_row;
            Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex] =
              Subsystem_B.tmp_base;
          }

          Subsystem_inpolygon(Subsystem_B.target_y, Subsystem_B.target_x,
                              Subsystem_B.target_y_m);
          if (Subsystem_applyToMultipleDims(Subsystem_B.target_y_m) != 0.0) {
            guard1 = true;
            exitg1 = true;
          } else {
            for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                 Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
                 Subsystem_B.c_vertex_index_beforeCurrentNex++) {
              Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG =
                Subsystem_B.c_vertex_index_beforeCurrentNex << 1;
              Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex] =
                Subsystem_B.target_vertex[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG +
                1];
              Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex] =
                Subsystem_B.target_vertex[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG];
            }

            Subsystem_inpolygon_f(Subsystem_B.target_y, Subsystem_B.target_x, ad,
                                  xc, Subsystem_B.target_y_m);
            if (Subsystem_applyToMultipleDims(Subsystem_B.target_y_m) != 0.0) {
              guard1 = true;
              exitg1 = true;
            } else {
              Subsystem_B.c_prediction_time_step_detail_a++;
              guard1 = false;
            }
          }
        }

        if (guard1) {
          Subsystem_B.overlap_btw_ego_pred_flag = 1;
          Subsystem_B.prediction_time_step_at_overlap =
            Subsystem_B.c_prediction_time_step_detail_a + 1;
        }

        if ((Subsystem_B.overlap_btw_ego_pred_flag != 1) ||
            (Subsystem_B.prediction_time_step_at_overlap == 0)) {
          Subsystem_B.prediction_time_step_at_overlap = 5;
        }

        Subsystem_B.overlap_btw_ego_pred_flag = 0;
        Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
        Subsystem_B.c_prediction_time_step_detail_a = -1;
        Subsystem_B.v = static_cast<int32_T>(std::round(static_cast<real_T>
          (Subsystem_B.prediction_time_step_at_overlap) * 0.2 / 0.05)) - 1;
        Subsystem_B.w = Subsystem_B.v - static_cast<int32_T>(std::round((
          static_cast<real_T>(Subsystem_B.prediction_time_step_at_overlap) - 1.0)
          * 0.2 / 0.05));
        Subsystem_B.b_index_pred_detail = 0;
        exitg1 = false;
        while ((!exitg1) && (Subsystem_B.b_index_pred_detail <= Subsystem_B.w))
        {
          Subsystem_B.index_pred_detail = Subsystem_B.v -
            Subsystem_B.b_index_pred_detail;
          Subsystem_B.c_overlap_btw_ego_pred_detail_f = 0;
          Subsystem_B.i_row = Target_X_pred[11 * Subsystem_B.index_pred_detail +
            8];
          Subsystem_B.m_x_tmp = std::sin(Subsystem_B.i_row);
          Subsystem_B.tmp_y_vertex_1 = std::cos(Subsystem_B.i_row);
          Subsystem_B.y_f = Target_X_pred[11 * Subsystem_B.index_pred_detail];
          Subsystem_B.x_cross = Target_X_pred[11 * Subsystem_B.index_pred_detail
            + 3];
          for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
               Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
               Subsystem_B.c_vertex_index_beforeCurrentNex++) {
            Subsystem_B.i_row =
              Subsystem_B.tmp_target_x_vertex_tmp[Subsystem_B.c_vertex_index_beforeCurrentNex];
            Subsystem_B.tmp_base =
              Subsystem_B.tmp_target_y_vertex_tmp[Subsystem_B.c_vertex_index_beforeCurrentNex];
            Subsystem_B.f_row = Subsystem_B.i_row * Subsystem_B.m_x_tmp +
              Subsystem_B.tmp_base * Subsystem_B.tmp_y_vertex_1;
            Subsystem_B.target_y_vertex_rot[Subsystem_B.c_vertex_index_beforeCurrentNex]
              = Subsystem_B.f_row;
            Subsystem_B.i_row = Subsystem_B.i_row * Subsystem_B.tmp_y_vertex_1 -
              Subsystem_B.tmp_base * Subsystem_B.m_x_tmp;
            Subsystem_B.target_x_vertex_rot[Subsystem_B.c_vertex_index_beforeCurrentNex]
              = Subsystem_B.i_row;
            Subsystem_B.tmp_base = Subsystem_B.f_row + Subsystem_B.y_f;
            Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG =
              Subsystem_B.c_vertex_index_beforeCurrentNex << 1;
            Subsystem_B.target_vertex[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG] =
              Subsystem_B.tmp_base;
            Subsystem_B.i_row += Subsystem_B.x_cross;
            Subsystem_B.target_vertex[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG + 1] =
              Subsystem_B.i_row;
            Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex] =
              Subsystem_B.i_row;
            Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex] =
              Subsystem_B.tmp_base;
          }

          Subsystem_inpolygon(Subsystem_B.target_y, Subsystem_B.target_x,
                              Subsystem_B.target_y_m);
          guard11 = false;
          if (Subsystem_applyToMultipleDims(Subsystem_B.target_y_m) != 0.0) {
            guard11 = true;
          } else {
            for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                 Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
                 Subsystem_B.c_vertex_index_beforeCurrentNex++) {
              Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG =
                Subsystem_B.c_vertex_index_beforeCurrentNex << 1;
              Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex] =
                Subsystem_B.target_vertex[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG +
                1];
              Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex] =
                Subsystem_B.target_vertex[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG];
            }

            Subsystem_inpolygon_f(Subsystem_B.target_y, Subsystem_B.target_x, ad,
                                  xc, Subsystem_B.target_y_m);
            if (Subsystem_applyToMultipleDims(Subsystem_B.target_y_m) != 0.0) {
              guard11 = true;
            } else if (Subsystem_B.c_overlap_btw_ego_pred_before_d != 0) {
              Subsystem_B.overlap_btw_ego_pred_flag = 1;
              exitg1 = true;
            } else {
              Subsystem_B.b_index_pred_detail++;
            }
          }

          if (guard11) {
            Subsystem_B.c_overlap_btw_ego_pred_detail_f = 1;
            Subsystem_B.c_overlap_btw_ego_pred_before_d = 1;
            Subsystem_B.c_prediction_time_step_detail_a =
              Subsystem_B.index_pred_detail;
            Subsystem_B.b_index_pred_detail++;
          }
        }

        if ((Subsystem_B.overlap_btw_ego_pred_flag == 0) &&
            (Subsystem_B.c_overlap_btw_ego_pred_detail_f == 1) &&
            (Subsystem_B.c_overlap_btw_ego_pred_before_d == 1)) {
          Subsystem_B.overlap_btw_ego_pred_flag = 1;
        }

        for (Subsystem_B.c_overlap_btw_ego_pred_detail_f = 0;
             Subsystem_B.c_overlap_btw_ego_pred_detail_f <
             Subsystem_B.prediction_time_step_at_overlap;
             Subsystem_B.c_overlap_btw_ego_pred_detail_f++) {
          Subsystem_B.c_vertex_index_beforeCurrentNex =
            Subsystem_B.prediction_time_step_at_overlap -
            Subsystem_B.c_overlap_btw_ego_pred_detail_f;
          guard1 = false;
          guard2 = false;
          guard3 = false;
          if (Subsystem_B.c_vertex_index_beforeCurrentNex ==
              Subsystem_B.prediction_time_step_at_overlap) {
            if (Subsystem_B.overlap_btw_ego_pred_flag == 0) {
              if (Subsystem_B.c_vertex_index_beforeCurrentNex == 1) {
              } else {
                Subsystem_B.index_pred_detail = static_cast<int32_T>(std::round(
                  static_cast<real_T>
                  (Subsystem_B.c_vertex_index_beforeCurrentNex) * 0.2 / 0.05)) -
                  1;
                Subsystem_B.y_f = Target_X_pred[11 *
                  Subsystem_B.index_pred_detail];
                Subsystem_B.x_cross = Target_X_pred[11 *
                  Subsystem_B.index_pred_detail + 3];
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    =
                    Subsystem_B.target_y_vertex_rot[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    + Subsystem_B.y_f;
                  Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    =
                    Subsystem_B.target_x_vertex_rot[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    + Subsystem_B.x_cross;
                }

                guard3 = true;
              }
            } else {
              Subsystem_B.y_f = Target_X_pred[11 *
                Subsystem_B.c_prediction_time_step_detail_a];
              Subsystem_B.x_cross = Target_X_pred[11 *
                Subsystem_B.c_prediction_time_step_detail_a + 3];
              for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                   Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
                   Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  =
                  Subsystem_B.target_y_vertex_rot[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  + Subsystem_B.y_f;
                Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  =
                  Subsystem_B.target_x_vertex_rot[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  + Subsystem_B.x_cross;
              }

              guard3 = true;
            }
          } else {
            Subsystem_B.index_pred_detail = static_cast<int32_T>(std::round(
              static_cast<real_T>(Subsystem_B.c_vertex_index_beforeCurrentNex) *
              0.2 / 0.05)) - 1;
            Subsystem_B.y_f = Target_X_pred[11 * Subsystem_B.index_pred_detail];
            Subsystem_B.x_cross = Target_X_pred[11 *
              Subsystem_B.index_pred_detail + 3];
            for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                 Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
                 Subsystem_B.c_vertex_index_beforeCurrentNex++) {
              Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex] =
                Subsystem_B.target_y_vertex_rot[Subsystem_B.c_vertex_index_beforeCurrentNex]
                + Subsystem_B.y_f;
              Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex] =
                Subsystem_B.target_x_vertex_rot[Subsystem_B.c_vertex_index_beforeCurrentNex]
                + Subsystem_B.x_cross;
            }

            guard3 = true;
          }

          if (guard3) {
            Subsystem_B.index_pred_detail = 0;
            Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG = 0;
            Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
            for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                 Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
                 Subsystem_B.c_vertex_index_beforeCurrentNex++) {
              Subsystem_B.target_y_m[Subsystem_B.c_vertex_index_beforeCurrentNex]
                =
                (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                 >= -10.0);
            }

            if (Subsystem_all(Subsystem_B.target_y_m)) {
              for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                   Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
                   Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                Subsystem_B.target_y_m[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  =
                  (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                   <= 10.0);
              }

              if (Subsystem_all(Subsystem_B.target_y_m)) {
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.target_y_m[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    =
                    (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                     >= -10.0);
                }

                if (Subsystem_all(Subsystem_B.target_y_m)) {
                  for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                       Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
                       Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                    Subsystem_B.target_y_m[Subsystem_B.c_vertex_index_beforeCurrentNex]
                      =
                      (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                       <= 30.0);
                  }

                  g = Subsystem_all(Subsystem_B.target_y_m);
                } else {
                  g = false;
                }
              } else {
                g = false;
              }
            } else {
              g = false;
            }

            if (!g) {
              Subsystem_B.vertex_total[0] = (Subsystem_B.target_y[0] >= -10.0);
              Subsystem_B.vertex_total[1] = (Subsystem_B.target_y[0] <= 10.0);
              Subsystem_B.vertex_total[2] = (Subsystem_B.target_x[0] >= -10.0);
              Subsystem_B.vertex_total[3] = (Subsystem_B.target_x[0] <= 30.0);
              Subsystem_B.vertex_total[4] = (Subsystem_B.target_y[1] >= -10.0);
              Subsystem_B.vertex_total[5] = (Subsystem_B.target_y[1] <= 10.0);
              Subsystem_B.vertex_total[6] = (Subsystem_B.target_x[1] >= -10.0);
              Subsystem_B.vertex_total[7] = (Subsystem_B.target_x[1] <= 30.0);
              Subsystem_B.vertex_total[8] = (Subsystem_B.target_y[2] >= -10.0);
              Subsystem_B.vertex_total[9] = (Subsystem_B.target_y[2] <= 10.0);
              Subsystem_B.vertex_total[10] = (Subsystem_B.target_x[2] >= -10.0);
              Subsystem_B.vertex_total[11] = (Subsystem_B.target_x[2] <= 30.0);
              Subsystem_B.vertex_total[12] = (Subsystem_B.target_y[3] >= -10.0);
              Subsystem_B.vertex_total[13] = (Subsystem_B.target_y[3] <= 10.0);
              Subsystem_B.vertex_total[14] = (Subsystem_B.target_x[3] >= -10.0);
              Subsystem_B.vertex_total[15] = (Subsystem_B.target_x[3] <= 30.0);
              Subsystem_all_k(Subsystem_B.vertex_total, Subsystem_B.bv1);
              switch (Subsystem_intnnz(Subsystem_B.bv1)) {
               case 3:
                Subsystem_B.index_pred_detail = 1;
                break;

               case 2:
                Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG = 1;
                break;

               case 1:
                Subsystem_B.c_overlap_btw_ego_pred_before_d = 1;
                break;
              }
            }

            Subsystem_B.tmp_base = Subsystem_minimum(Subsystem_B.target_y);
            if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 10.0))
            {
              guard2 = true;
            } else {
              Subsystem_B.tmp_base = Subsystem_maximum(Subsystem_B.target_y);
              if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <=
                   10.0)) {
                guard2 = true;
              }
            }
          }

          if (guard2) {
            Subsystem_B.tmp_base = Subsystem_minimum(Subsystem_B.target_x);
            if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 30.0))
            {
              guard1 = true;
            } else {
              Subsystem_B.tmp_base = Subsystem_maximum(Subsystem_B.target_x);
              if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <=
                   30.0)) {
                guard1 = true;
              }
            }
          }

          if (guard1) {
            Subsystem_B.ego_x_contour_total_size = 200;
            Subsystem_B.ego_y_contour_total_size = 200;
            std::memset(&Subsystem_B.ego_x_contour_total_data[0], 0, 200U *
                        sizeof(real_T));
            std::memset(&Subsystem_B.ego_y_contour_total_data[0], 0, 200U *
                        sizeof(real_T));
            Subsystem_B.i_row = 1.0;
            Subsystem_B.f_row = 0.0;
            if (Subsystem_B.index_pred_detail != 0) {
              for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                   Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
                   Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  =
                  Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex];
                Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  =
                  Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex];
              }

              Subsystem_B.y_f = 0.0;
              Subsystem_B.x_cross = 0.0;
              for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                   Subsystem_B.c_vertex_index_beforeCurrentNex < 4;
                   Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                if (Subsystem_B.c_vertex_index_beforeCurrentNex + 1 == 1) {
                  Subsystem_B.tmp_y_vertex_1 = Subsystem_B.target_y[3];
                  Subsystem_B.tmp_x_vertex_1 = Subsystem_B.target_x[3];
                } else {
                  Subsystem_B.tmp_y_vertex_1 =
                    Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex
                    - 1];
                  Subsystem_B.tmp_x_vertex_1 =
                    Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex
                    - 1];
                }

                if (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    >= -10.0) {
                  if (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                      <= 10.0) {
                    g =
                      ((Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        >= -10.0) &&
                       (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        <= 30.0));
                  } else {
                    g = false;
                  }
                } else {
                  g = false;
                }

                if (!g) {
                  Subsystem_B.tmp_base =
                    Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex
                    + 1];
                  guard4 = false;
                  if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <=
                       10.0)) {
                    Subsystem_B.m_x_tmp =
                      Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex
                      + 1];
                    if ((Subsystem_B.m_x_tmp >= -10.0) && (Subsystem_B.m_x_tmp <=
                         30.0) && ((Subsystem_B.tmp_y_vertex_1 >= -10.0) &&
                                   (Subsystem_B.tmp_y_vertex_1 <= 10.0) &&
                                   (Subsystem_B.tmp_x_vertex_1 >= -10.0) &&
                                   (Subsystem_B.tmp_x_vertex_1 <= 30.0))) {
                      switch (Subsystem_B.c_vertex_index_beforeCurrentNex + 1) {
                       case 1:
                        Subsystem_B.m = Subsystem_B.target_y_correction[2];
                        Subsystem_B.target_y_correction_idx_2 =
                          Subsystem_B.target_y_correction[3];
                        Subsystem_B.target_y_correction[2] =
                          Subsystem_B.target_y_correction[1];
                        Subsystem_B.target_y_correction[3] = Subsystem_B.m;
                        Subsystem_B.target_y_correction[4] =
                          Subsystem_B.target_y_correction_idx_2;
                        Subsystem_B.m = Subsystem_B.target_x_correction[2];
                        Subsystem_B.target_y_correction_idx_2 =
                          Subsystem_B.target_x_correction[3];
                        Subsystem_B.target_x_correction[2] =
                          Subsystem_B.target_x_correction[1];
                        Subsystem_B.target_x_correction[3] = Subsystem_B.m;
                        Subsystem_B.target_x_correction[4] =
                          Subsystem_B.target_y_correction_idx_2;
                        break;

                       case 2:
                        Subsystem_B.m = Subsystem_B.target_y_correction[3];
                        Subsystem_B.target_y_correction[3] =
                          Subsystem_B.target_y_correction[2];
                        Subsystem_B.target_y_correction[4] = Subsystem_B.m;
                        Subsystem_B.m = Subsystem_B.target_x_correction[3];
                        Subsystem_B.target_x_correction[3] =
                          Subsystem_B.target_x_correction[2];
                        Subsystem_B.target_x_correction[4] = Subsystem_B.m;
                        break;

                       case 3:
                        Subsystem_B.target_y_correction[4] =
                          Subsystem_B.target_y_correction[3];
                        Subsystem_B.target_x_correction[4] =
                          Subsystem_B.target_x_correction[3];
                        break;
                      }

                      Subsystem_B.m =
                        (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                         - Subsystem_B.tmp_y_vertex_1) /
                        (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                         - Subsystem_B.tmp_x_vertex_1);
                      Subsystem_B.tmp_y_vertex_1 -= Subsystem_B.m *
                        Subsystem_B.tmp_x_vertex_1;
                      if (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                          < -10.0) {
                        Subsystem_B.y_cross_1 = -10.0;
                        Subsystem_B.x_cross_1 = (-10.0 -
                          Subsystem_B.tmp_y_vertex_1) / Subsystem_B.m;
                      } else if
                          (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                           > 10.0) {
                        Subsystem_B.y_cross_1 = 10.0;
                        Subsystem_B.x_cross_1 = (10.0 -
                          Subsystem_B.tmp_y_vertex_1) / Subsystem_B.m;
                      } else if
                          (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                           < -10.0) {
                        Subsystem_B.x_cross_1 = -10.0;
                        Subsystem_B.y_cross_1 = Subsystem_B.m * -10.0 +
                          Subsystem_B.tmp_y_vertex_1;
                      } else if
                          (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                           > 30.0) {
                        Subsystem_B.x_cross_1 = 30.0;
                        Subsystem_B.y_cross_1 = Subsystem_B.m * 30.0 +
                          Subsystem_B.tmp_y_vertex_1;
                      }

                      Subsystem_B.tmp_y_vertex_1 = (Subsystem_B.tmp_base -
                        Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex])
                        / (Subsystem_B.m_x_tmp -
                           Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]);
                      Subsystem_B.tmp_base -= Subsystem_B.m_x_tmp *
                        Subsystem_B.tmp_y_vertex_1;
                      if (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                          < -10.0) {
                        Subsystem_B.y_cross_2 = -10.0;
                        Subsystem_B.x_cross_2 = (-10.0 - Subsystem_B.tmp_base) /
                          Subsystem_B.tmp_y_vertex_1;
                      } else if
                          (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                           > 10.0) {
                        Subsystem_B.y_cross_2 = 10.0;
                        Subsystem_B.x_cross_2 = (10.0 - Subsystem_B.tmp_base) /
                          Subsystem_B.tmp_y_vertex_1;
                      } else if
                          (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                           < -10.0) {
                        Subsystem_B.x_cross_2 = -10.0;
                        Subsystem_B.y_cross_2 = Subsystem_B.tmp_y_vertex_1 *
                          -10.0 + Subsystem_B.tmp_base;
                      } else if
                          (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                           > 30.0) {
                        Subsystem_B.x_cross_2 = 30.0;
                        Subsystem_B.y_cross_2 = Subsystem_B.tmp_y_vertex_1 *
                          30.0 + Subsystem_B.tmp_base;
                      }

                      Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        = Subsystem_B.y_cross_1;
                      Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        = Subsystem_B.x_cross_1;
                      Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex
                        + 1] = Subsystem_B.y_cross_2;
                      Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex
                        + 1] = Subsystem_B.x_cross_2;
                    } else {
                      guard4 = true;
                    }
                  } else {
                    guard4 = true;
                  }

                  if (guard4) {
                    if ((Subsystem_B.tmp_y_vertex_1 >= -10.0) &&
                        (Subsystem_B.tmp_y_vertex_1 <= 10.0) &&
                        (Subsystem_B.tmp_x_vertex_1 >= -10.0) &&
                        (Subsystem_B.tmp_x_vertex_1 <= 30.0)) {
                      if (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                          == Subsystem_B.tmp_x_vertex_1) {
                        if (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                            < -10.0) {
                          Subsystem_B.y_f = -10.0;
                          Subsystem_B.x_cross =
                            Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex];
                        } else if
                            (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             > 10.0) {
                          Subsystem_B.y_f = 10.0;
                          Subsystem_B.x_cross =
                            Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex];
                        }
                      } else if
                          (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                           == Subsystem_B.tmp_y_vertex_1) {
                        if (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                            < -10.0) {
                          Subsystem_B.x_cross = -10.0;
                          Subsystem_B.y_f =
                            Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex];
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             > 30.0) {
                          Subsystem_B.x_cross = 30.0;
                          Subsystem_B.y_f =
                            Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex];
                        }
                      } else {
                        Subsystem_B.m =
                          (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                           - Subsystem_B.tmp_y_vertex_1) /
                          (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                           - Subsystem_B.tmp_x_vertex_1);
                        Subsystem_B.tmp_base = Subsystem_B.tmp_y_vertex_1 -
                          Subsystem_B.m * Subsystem_B.tmp_x_vertex_1;
                        if (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                            < -10.0) {
                          Subsystem_B.y_f = -10.0;
                          Subsystem_B.x_cross = (-10.0 - Subsystem_B.tmp_base) /
                            Subsystem_B.m;
                        } else if
                            (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             > 10.0) {
                          Subsystem_B.y_f = 10.0;
                          Subsystem_B.x_cross = (10.0 - Subsystem_B.tmp_base) /
                            Subsystem_B.m;
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             < -10.0) {
                          Subsystem_B.x_cross = -10.0;
                          Subsystem_B.y_f = Subsystem_B.m * -10.0 +
                            Subsystem_B.tmp_base;
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             > 30.0) {
                          Subsystem_B.x_cross = 30.0;
                          Subsystem_B.y_f = Subsystem_B.m * 30.0 +
                            Subsystem_B.tmp_base;
                        }
                      }

                      if (Subsystem_B.c_vertex_index_beforeCurrentNex + 1 == 1)
                      {
                        Subsystem_B.target_y_correction[0] = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[0] = Subsystem_B.x_cross;
                        Subsystem_B.target_y_correction[4] = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[4] = Subsystem_B.x_cross;
                      } else {
                        Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                          = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                          = Subsystem_B.x_cross;
                      }
                    }
                  }
                }
              }

              for (Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG = 0;
                   Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG < 5;
                   Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG++) {
                if (Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG + 1 < 5) {
                  Subsystem_B.f_row =
                    Subsystem_B.target_y_correction[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG
                    + 1];
                  Subsystem_B.tmp_base =
                    Subsystem_B.target_x_correction[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG
                    + 1];
                } else {
                  Subsystem_B.f_row = Subsystem_B.target_y_correction[0];
                  Subsystem_B.tmp_base = Subsystem_B.target_x_correction[0];
                }

                Subsystem_B.y_f =
                  Subsystem_B.target_y_correction[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG];
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex < 101;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.b_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    = std::abs(Subsystem_B.y_f -
                               yc[Subsystem_B.c_vertex_index_beforeCurrentNex]);
                }

                Subsystem_minimum_g(Subsystem_B.b_varargin_1, &Subsystem_B.y_f,
                                    &Subsystem_B.c_vertex_index_beforeCurrentNex);
                Subsystem_B.y_f =
                  Subsystem_B.target_x_correction[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG];
                for (Subsystem_B.index_pred_detail = 0;
                     Subsystem_B.index_pred_detail < 201;
                     Subsystem_B.index_pred_detail++) {
                  Subsystem_B.c_varargin_1[Subsystem_B.index_pred_detail] = std::
                    abs(Subsystem_B.y_f - bd[Subsystem_B.index_pred_detail]);
                }

                Subsystem_minimum_g4(Subsystem_B.c_varargin_1, &Subsystem_B.y_f,
                                     &Subsystem_B.index_pred_detail);
                for (Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
                     Subsystem_B.c_overlap_btw_ego_pred_before_d < 101;
                     Subsystem_B.c_overlap_btw_ego_pred_before_d++) {
                  Subsystem_B.b_varargin_1[Subsystem_B.c_overlap_btw_ego_pred_before_d]
                    = std::abs(Subsystem_B.f_row -
                               yc[Subsystem_B.c_overlap_btw_ego_pred_before_d]);
                }

                Subsystem_minimum_g(Subsystem_B.b_varargin_1, &Subsystem_B.f_row,
                                    &Subsystem_B.c_overlap_btw_ego_pred_before_d);
                for (Subsystem_B.v = 0; Subsystem_B.v < 201; Subsystem_B.v++) {
                  Subsystem_B.c_varargin_1[Subsystem_B.v] = std::abs
                    (Subsystem_B.tmp_base - bd[Subsystem_B.v]);
                }

                Subsystem_minimum_g4(Subsystem_B.c_varargin_1,
                                     &Subsystem_B.tmp_base, &Subsystem_B.v);
                Subsystem_plotLine(static_cast<real_T>
                                   (Subsystem_B.index_pred_detail), static_cast<
                                   real_T>
                                   (Subsystem_B.c_vertex_index_beforeCurrentNex),
                                   static_cast<real_T>(Subsystem_B.v),
                                   static_cast<real_T>
                                   (Subsystem_B.c_overlap_btw_ego_pred_before_d),
                                   Subsystem_B.c_varargin_1,
                                   &Subsystem_B.ego_y_contour_total_size,
                                   Subsystem_B.tmp_y_contour_data,
                                   &Subsystem_B.tmp_y_contour_size);
                Subsystem_B.f_row = (Subsystem_B.i_row + static_cast<real_T>
                                     (Subsystem_B.ego_y_contour_total_size)) -
                  1.0;
                if (Subsystem_B.i_row > Subsystem_B.f_row) {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
                  Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                } else {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d =
                    static_cast<int32_T>(Subsystem_B.i_row) - 1;
                  Subsystem_B.c_vertex_index_beforeCurrentNex =
                    static_cast<int32_T>(Subsystem_B.f_row);
                }

                Subsystem_B.index_pred_detail =
                  Subsystem_B.c_vertex_index_beforeCurrentNex -
                  Subsystem_B.c_overlap_btw_ego_pred_before_d;
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex <
                     Subsystem_B.index_pred_detail;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.ego_x_contour_total_data[Subsystem_B.c_overlap_btw_ego_pred_before_d
                    + Subsystem_B.c_vertex_index_beforeCurrentNex] =
                    Subsystem_B.c_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex];
                }

                if (Subsystem_B.i_row > Subsystem_B.f_row) {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
                  Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                } else {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d =
                    static_cast<int32_T>(Subsystem_B.i_row) - 1;
                  Subsystem_B.c_vertex_index_beforeCurrentNex =
                    static_cast<int32_T>(Subsystem_B.f_row);
                }

                Subsystem_B.index_pred_detail =
                  Subsystem_B.c_vertex_index_beforeCurrentNex -
                  Subsystem_B.c_overlap_btw_ego_pred_before_d;
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex <
                     Subsystem_B.index_pred_detail;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.ego_y_contour_total_data[Subsystem_B.c_overlap_btw_ego_pred_before_d
                    + Subsystem_B.c_vertex_index_beforeCurrentNex] =
                    Subsystem_B.tmp_y_contour_data[Subsystem_B.c_vertex_index_beforeCurrentNex];
                }

                Subsystem_B.i_row = Subsystem_B.f_row + 1.0;
              }
            } else if (Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG != 0) {
              for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                   Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
                   Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  =
                  Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex];
                Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  =
                  Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex];
              }

              Subsystem_B.y_f = 0.0;
              Subsystem_B.x_cross = 0.0;
              for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                   Subsystem_B.c_vertex_index_beforeCurrentNex < 4;
                   Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                if (Subsystem_B.c_vertex_index_beforeCurrentNex + 1 == 1) {
                  Subsystem_B.tmp_y_vertex_1 = Subsystem_B.target_y[3];
                  Subsystem_B.tmp_x_vertex_1 = Subsystem_B.target_x[3];
                } else {
                  Subsystem_B.tmp_y_vertex_1 =
                    Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex
                    - 1];
                  Subsystem_B.tmp_x_vertex_1 =
                    Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex
                    - 1];
                }

                if (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    >= -10.0) {
                  if (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                      <= 10.0) {
                    g =
                      ((Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        >= -10.0) &&
                       (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        <= 30.0));
                  } else {
                    g = false;
                  }
                } else {
                  g = false;
                }

                if (!g) {
                  Subsystem_B.tmp_base =
                    Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex
                    + 1];
                  guard4 = false;
                  if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <=
                       10.0)) {
                    Subsystem_B.m_x_tmp =
                      Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex
                      + 1];
                    if ((Subsystem_B.m_x_tmp >= -10.0) && (Subsystem_B.m_x_tmp <=
                         30.0)) {
                      if (Subsystem_B.m_x_tmp ==
                          Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex])
                      {
                        if (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                            < -10.0) {
                          Subsystem_B.y_f = -10.0;
                          Subsystem_B.x_cross =
                            Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex];
                        } else if
                            (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             > 10.0) {
                          Subsystem_B.y_f = 10.0;
                          Subsystem_B.x_cross =
                            Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex];
                        }
                      } else if (Subsystem_B.tmp_base ==
                                 Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex])
                      {
                        if (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                            < -10.0) {
                          Subsystem_B.y_f =
                            Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex];
                          Subsystem_B.x_cross = -10.0;
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             > 30.0) {
                          Subsystem_B.y_f =
                            Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex];
                          Subsystem_B.x_cross = 30.0;
                        }
                      } else {
                        Subsystem_B.m = (Subsystem_B.tmp_base -
                                         Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex])
                          / (Subsystem_B.m_x_tmp -
                             Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]);
                        Subsystem_B.tmp_base -= Subsystem_B.m_x_tmp *
                          Subsystem_B.m;
                        if (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                            < -10.0) {
                          Subsystem_B.y_f = -10.0;
                          Subsystem_B.x_cross = (-10.0 - Subsystem_B.tmp_base) /
                            Subsystem_B.m;
                        } else if
                            (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             > 10.0) {
                          Subsystem_B.y_f = 10.0;
                          Subsystem_B.x_cross = (10.0 - Subsystem_B.tmp_base) /
                            Subsystem_B.m;
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             < -10.0) {
                          Subsystem_B.x_cross = -10.0;
                          Subsystem_B.y_f = Subsystem_B.m * -10.0 +
                            Subsystem_B.tmp_base;
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             > 30.0) {
                          Subsystem_B.x_cross = 30.0;
                          Subsystem_B.y_f = Subsystem_B.m * 30.0 +
                            Subsystem_B.tmp_base;
                        }
                      }

                      if (Subsystem_B.c_vertex_index_beforeCurrentNex + 1 == 1)
                      {
                        Subsystem_B.target_y_correction[0] = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[0] = Subsystem_B.x_cross;
                        Subsystem_B.target_y_correction[4] = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[4] = Subsystem_B.x_cross;
                      } else {
                        Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                          = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                          = Subsystem_B.x_cross;
                      }
                    } else {
                      guard4 = true;
                    }
                  } else {
                    guard4 = true;
                  }

                  if (guard4) {
                    if ((Subsystem_B.tmp_y_vertex_1 >= -10.0) &&
                        (Subsystem_B.tmp_y_vertex_1 <= 10.0) &&
                        (Subsystem_B.tmp_x_vertex_1 >= -10.0) &&
                        (Subsystem_B.tmp_x_vertex_1 <= 30.0)) {
                      if (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                          == Subsystem_B.tmp_x_vertex_1) {
                        if (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                            < -10.0) {
                          Subsystem_B.y_f = -10.0;
                          Subsystem_B.x_cross =
                            Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex];
                        } else if
                            (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             > 10.0) {
                          Subsystem_B.y_f = 10.0;
                          Subsystem_B.x_cross =
                            Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex];
                        }
                      } else if
                          (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                           == Subsystem_B.tmp_y_vertex_1) {
                        if (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                            < -10.0) {
                          Subsystem_B.x_cross = -10.0;
                          Subsystem_B.y_f =
                            Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex];
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             > 30.0) {
                          Subsystem_B.x_cross = 30.0;
                          Subsystem_B.y_f =
                            Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex];
                        }
                      } else {
                        Subsystem_B.m =
                          (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                           - Subsystem_B.tmp_y_vertex_1) /
                          (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                           - Subsystem_B.tmp_x_vertex_1);
                        Subsystem_B.tmp_base = Subsystem_B.tmp_y_vertex_1 -
                          Subsystem_B.m * Subsystem_B.tmp_x_vertex_1;
                        if (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                            < -10.0) {
                          Subsystem_B.y_f = -10.0;
                          Subsystem_B.x_cross = (-10.0 - Subsystem_B.tmp_base) /
                            Subsystem_B.m;
                        } else if
                            (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             > 10.0) {
                          Subsystem_B.y_f = 10.0;
                          Subsystem_B.x_cross = (10.0 - Subsystem_B.tmp_base) /
                            Subsystem_B.m;
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             < -10.0) {
                          Subsystem_B.x_cross = -10.0;
                          Subsystem_B.y_f = Subsystem_B.m * -10.0 +
                            Subsystem_B.tmp_base;
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
                             > 30.0) {
                          Subsystem_B.x_cross = 30.0;
                          Subsystem_B.y_f = Subsystem_B.m * 30.0 +
                            Subsystem_B.tmp_base;
                        }
                      }

                      if (Subsystem_B.c_vertex_index_beforeCurrentNex + 1 == 1)
                      {
                        Subsystem_B.target_y_correction[0] = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[0] = Subsystem_B.x_cross;
                        Subsystem_B.target_y_correction[4] = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[4] = Subsystem_B.x_cross;
                      } else {
                        Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                          = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                          = Subsystem_B.x_cross;
                      }
                    }
                  }
                }
              }

              for (Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG = 0;
                   Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG < 4;
                   Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG++) {
                Subsystem_B.y_f =
                  Subsystem_B.target_y_correction[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG];
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex < 101;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.b_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    = std::abs(Subsystem_B.y_f -
                               yc[Subsystem_B.c_vertex_index_beforeCurrentNex]);
                }

                Subsystem_minimum_g(Subsystem_B.b_varargin_1,
                                    &Subsystem_B.tmp_base,
                                    &Subsystem_B.c_vertex_index_beforeCurrentNex);
                Subsystem_B.y_f =
                  Subsystem_B.target_x_correction[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG];
                for (Subsystem_B.index_pred_detail = 0;
                     Subsystem_B.index_pred_detail < 201;
                     Subsystem_B.index_pred_detail++) {
                  Subsystem_B.c_varargin_1[Subsystem_B.index_pred_detail] = std::
                    abs(Subsystem_B.y_f - bd[Subsystem_B.index_pred_detail]);
                }

                Subsystem_minimum_g4(Subsystem_B.c_varargin_1,
                                     &Subsystem_B.tmp_base,
                                     &Subsystem_B.index_pred_detail);
                Subsystem_B.y_f =
                  Subsystem_B.target_y_correction[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG
                  + 1];
                for (Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
                     Subsystem_B.c_overlap_btw_ego_pred_before_d < 101;
                     Subsystem_B.c_overlap_btw_ego_pred_before_d++) {
                  Subsystem_B.b_varargin_1[Subsystem_B.c_overlap_btw_ego_pred_before_d]
                    = std::abs(Subsystem_B.y_f -
                               yc[Subsystem_B.c_overlap_btw_ego_pred_before_d]);
                }

                Subsystem_minimum_g(Subsystem_B.b_varargin_1,
                                    &Subsystem_B.tmp_base,
                                    &Subsystem_B.c_overlap_btw_ego_pred_before_d);
                Subsystem_B.y_f =
                  Subsystem_B.target_x_correction[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG
                  + 1];
                for (Subsystem_B.v = 0; Subsystem_B.v < 201; Subsystem_B.v++) {
                  Subsystem_B.c_varargin_1[Subsystem_B.v] = std::abs
                    (Subsystem_B.y_f - bd[Subsystem_B.v]);
                }

                Subsystem_minimum_g4(Subsystem_B.c_varargin_1,
                                     &Subsystem_B.tmp_base, &Subsystem_B.v);
                Subsystem_plotLine(static_cast<real_T>
                                   (Subsystem_B.index_pred_detail), static_cast<
                                   real_T>
                                   (Subsystem_B.c_vertex_index_beforeCurrentNex),
                                   static_cast<real_T>(Subsystem_B.v),
                                   static_cast<real_T>
                                   (Subsystem_B.c_overlap_btw_ego_pred_before_d),
                                   Subsystem_B.c_varargin_1,
                                   &Subsystem_B.ego_y_contour_total_size,
                                   Subsystem_B.tmp_y_contour_data,
                                   &Subsystem_B.tmp_y_contour_size);
                Subsystem_B.f_row = (Subsystem_B.i_row + static_cast<real_T>
                                     (Subsystem_B.ego_y_contour_total_size)) -
                  1.0;
                if (Subsystem_B.i_row > Subsystem_B.f_row) {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
                  Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                } else {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d =
                    static_cast<int32_T>(Subsystem_B.i_row) - 1;
                  Subsystem_B.c_vertex_index_beforeCurrentNex =
                    static_cast<int32_T>(Subsystem_B.f_row);
                }

                Subsystem_B.index_pred_detail =
                  Subsystem_B.c_vertex_index_beforeCurrentNex -
                  Subsystem_B.c_overlap_btw_ego_pred_before_d;
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex <
                     Subsystem_B.index_pred_detail;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.ego_x_contour_total_data[Subsystem_B.c_overlap_btw_ego_pred_before_d
                    + Subsystem_B.c_vertex_index_beforeCurrentNex] =
                    Subsystem_B.c_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex];
                }

                if (Subsystem_B.i_row > Subsystem_B.f_row) {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
                  Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                } else {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d =
                    static_cast<int32_T>(Subsystem_B.i_row) - 1;
                  Subsystem_B.c_vertex_index_beforeCurrentNex =
                    static_cast<int32_T>(Subsystem_B.f_row);
                }

                Subsystem_B.index_pred_detail =
                  Subsystem_B.c_vertex_index_beforeCurrentNex -
                  Subsystem_B.c_overlap_btw_ego_pred_before_d;
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex <
                     Subsystem_B.index_pred_detail;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.ego_y_contour_total_data[Subsystem_B.c_overlap_btw_ego_pred_before_d
                    + Subsystem_B.c_vertex_index_beforeCurrentNex] =
                    Subsystem_B.tmp_y_contour_data[Subsystem_B.c_vertex_index_beforeCurrentNex];
                }

                Subsystem_B.i_row = Subsystem_B.f_row + 1.0;
              }
            } else if (Subsystem_B.c_overlap_btw_ego_pred_before_d != 0) {
              for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                   Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
                   Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  =
                  Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex];
                Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  =
                  Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex];
              }

              Subsystem_B.y_f = 0.0;
              Subsystem_B.x_cross = 0.0;
              Subsystem_B.c_vertex_index_beforeCurrentNex = -1;
              for (Subsystem_B.index_pred_detail = 0;
                   Subsystem_B.index_pred_detail < 4;
                   Subsystem_B.index_pred_detail++) {
                if (Subsystem_B.index_pred_detail + 1 == 1) {
                  Subsystem_B.tmp_y_vertex_1 = Subsystem_B.target_y[3];
                  Subsystem_B.tmp_x_vertex_1 = Subsystem_B.target_x[3];
                } else {
                  Subsystem_B.tmp_y_vertex_1 =
                    Subsystem_B.target_y[Subsystem_B.index_pred_detail - 1];
                  Subsystem_B.tmp_x_vertex_1 =
                    Subsystem_B.target_x[Subsystem_B.index_pred_detail - 1];
                }

                if (Subsystem_B.target_y[Subsystem_B.index_pred_detail] >= -10.0)
                {
                  if (Subsystem_B.target_y[Subsystem_B.index_pred_detail] <=
                      10.0) {
                    g = ((Subsystem_B.target_x[Subsystem_B.index_pred_detail] >=
                          -10.0) &&
                         (Subsystem_B.target_x[Subsystem_B.index_pred_detail] <=
                          30.0));
                  } else {
                    g = false;
                  }
                } else {
                  g = false;
                }

                if (!g) {
                  Subsystem_B.tmp_base =
                    Subsystem_B.target_y[Subsystem_B.index_pred_detail + 1];
                  guard4 = false;
                  if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <=
                       10.0)) {
                    Subsystem_B.m_x_tmp =
                      Subsystem_B.target_x[Subsystem_B.index_pred_detail + 1];
                    if ((Subsystem_B.m_x_tmp >= -10.0) && (Subsystem_B.m_x_tmp <=
                         30.0)) {
                      if (Subsystem_B.m_x_tmp ==
                          Subsystem_B.target_x[Subsystem_B.index_pred_detail]) {
                        if (Subsystem_B.target_y[Subsystem_B.index_pred_detail] <
                            -10.0) {
                          Subsystem_B.y_f = -10.0;
                          Subsystem_B.x_cross =
                            Subsystem_B.target_x[Subsystem_B.index_pred_detail];
                        } else if
                            (Subsystem_B.target_y[Subsystem_B.index_pred_detail]
                             > 10.0) {
                          Subsystem_B.y_f = 10.0;
                          Subsystem_B.x_cross =
                            Subsystem_B.target_x[Subsystem_B.index_pred_detail];
                        }
                      } else if (Subsystem_B.tmp_base ==
                                 Subsystem_B.target_y[Subsystem_B.index_pred_detail])
                      {
                        if (Subsystem_B.target_x[Subsystem_B.index_pred_detail] <
                            -10.0) {
                          Subsystem_B.y_f =
                            Subsystem_B.target_y[Subsystem_B.index_pred_detail];
                          Subsystem_B.x_cross = -10.0;
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.index_pred_detail]
                             > 30.0) {
                          Subsystem_B.y_f =
                            Subsystem_B.target_y[Subsystem_B.index_pred_detail];
                          Subsystem_B.x_cross = 30.0;
                        }
                      } else {
                        Subsystem_B.m = (Subsystem_B.tmp_base -
                                         Subsystem_B.target_y[Subsystem_B.index_pred_detail])
                          / (Subsystem_B.m_x_tmp -
                             Subsystem_B.target_x[Subsystem_B.index_pred_detail]);
                        Subsystem_B.tmp_base -= Subsystem_B.m_x_tmp *
                          Subsystem_B.m;
                        if (Subsystem_B.target_y[Subsystem_B.index_pred_detail] <
                            -10.0) {
                          Subsystem_B.y_f = -10.0;
                          Subsystem_B.x_cross = (-10.0 - Subsystem_B.tmp_base) /
                            Subsystem_B.m;
                        } else if
                            (Subsystem_B.target_y[Subsystem_B.index_pred_detail]
                             > 10.0) {
                          Subsystem_B.y_f = 10.0;
                          Subsystem_B.x_cross = (10.0 - Subsystem_B.tmp_base) /
                            Subsystem_B.m;
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.index_pred_detail]
                             < -10.0) {
                          Subsystem_B.x_cross = -10.0;
                          Subsystem_B.y_f = Subsystem_B.m * -10.0 +
                            Subsystem_B.tmp_base;
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.index_pred_detail]
                             > 30.0) {
                          Subsystem_B.x_cross = 30.0;
                          Subsystem_B.y_f = Subsystem_B.m * 30.0 +
                            Subsystem_B.tmp_base;
                        }
                      }

                      if (Subsystem_B.index_pred_detail + 1 == 1) {
                        Subsystem_B.target_y_correction[0] = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[0] = Subsystem_B.x_cross;
                        Subsystem_B.target_y_correction[4] = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[4] = Subsystem_B.x_cross;
                      } else {
                        Subsystem_B.target_y_correction[Subsystem_B.index_pred_detail]
                          = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[Subsystem_B.index_pred_detail]
                          = Subsystem_B.x_cross;
                      }
                    } else {
                      guard4 = true;
                    }
                  } else {
                    guard4 = true;
                  }

                  if (guard4) {
                    if ((Subsystem_B.tmp_y_vertex_1 >= -10.0) &&
                        (Subsystem_B.tmp_y_vertex_1 <= 10.0) &&
                        (Subsystem_B.tmp_x_vertex_1 >= -10.0) &&
                        (Subsystem_B.tmp_x_vertex_1 <= 30.0)) {
                      if (Subsystem_B.target_x[Subsystem_B.index_pred_detail] ==
                          Subsystem_B.tmp_x_vertex_1) {
                        if (Subsystem_B.target_y[Subsystem_B.index_pred_detail] <
                            -10.0) {
                          Subsystem_B.y_f = -10.0;
                          Subsystem_B.x_cross =
                            Subsystem_B.target_x[Subsystem_B.index_pred_detail];
                        } else if
                            (Subsystem_B.target_y[Subsystem_B.index_pred_detail]
                             > 10.0) {
                          Subsystem_B.y_f = 10.0;
                          Subsystem_B.x_cross =
                            Subsystem_B.target_x[Subsystem_B.index_pred_detail];
                        }
                      } else if
                          (Subsystem_B.target_y[Subsystem_B.index_pred_detail] ==
                           Subsystem_B.tmp_y_vertex_1) {
                        if (Subsystem_B.target_x[Subsystem_B.index_pred_detail] <
                            -10.0) {
                          Subsystem_B.x_cross = -10.0;
                          Subsystem_B.y_f =
                            Subsystem_B.target_y[Subsystem_B.index_pred_detail];
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.index_pred_detail]
                             > 30.0) {
                          Subsystem_B.x_cross = 30.0;
                          Subsystem_B.y_f =
                            Subsystem_B.target_y[Subsystem_B.index_pred_detail];
                        }
                      } else {
                        Subsystem_B.m =
                          (Subsystem_B.target_y[Subsystem_B.index_pred_detail] -
                           Subsystem_B.tmp_y_vertex_1) /
                          (Subsystem_B.target_x[Subsystem_B.index_pred_detail] -
                           Subsystem_B.tmp_x_vertex_1);
                        Subsystem_B.tmp_base = Subsystem_B.tmp_y_vertex_1 -
                          Subsystem_B.m * Subsystem_B.tmp_x_vertex_1;
                        if (Subsystem_B.target_y[Subsystem_B.index_pred_detail] <
                            -10.0) {
                          Subsystem_B.y_f = -10.0;
                          Subsystem_B.x_cross = (-10.0 - Subsystem_B.tmp_base) /
                            Subsystem_B.m;
                        } else if
                            (Subsystem_B.target_y[Subsystem_B.index_pred_detail]
                             > 10.0) {
                          Subsystem_B.y_f = 10.0;
                          Subsystem_B.x_cross = (10.0 - Subsystem_B.tmp_base) /
                            Subsystem_B.m;
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.index_pred_detail]
                             < -10.0) {
                          Subsystem_B.x_cross = -10.0;
                          Subsystem_B.y_f = Subsystem_B.m * -10.0 +
                            Subsystem_B.tmp_base;
                        } else if
                            (Subsystem_B.target_x[Subsystem_B.index_pred_detail]
                             > 30.0) {
                          Subsystem_B.x_cross = 30.0;
                          Subsystem_B.y_f = Subsystem_B.m * 30.0 +
                            Subsystem_B.tmp_base;
                        }
                      }

                      if (Subsystem_B.index_pred_detail + 1 == 1) {
                        Subsystem_B.target_y_correction[0] = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[0] = Subsystem_B.x_cross;
                        Subsystem_B.target_y_correction[4] = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[4] = Subsystem_B.x_cross;
                      } else {
                        Subsystem_B.target_y_correction[Subsystem_B.index_pred_detail]
                          = Subsystem_B.y_f;
                        Subsystem_B.target_x_correction[Subsystem_B.index_pred_detail]
                          = Subsystem_B.x_cross;
                      }
                    } else {
                      Subsystem_B.c_vertex_index_beforeCurrentNex =
                        Subsystem_B.index_pred_detail;
                    }
                  }
                }
              }

              if (Subsystem_B.c_vertex_index_beforeCurrentNex + 1 != 0) {
                if (((Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                      >= -10.0) &&
                     (Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                      <= 10.0)) ||
                    ((Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                      >= -10.0) &&
                     (Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                      <= 30.0))) {
                  if (Subsystem_B.c_vertex_index_beforeCurrentNex + 1 == 1) {
                    Subsystem_B.target_y_correction[0] =
                      Subsystem_B.target_y_correction[3];
                    Subsystem_B.target_x_correction[0] =
                      Subsystem_B.target_x_correction[3];
                  } else {
                    Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                      =
                      Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex
                      - 1];
                    Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                      =
                      Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex
                      - 1];
                  }
                } else {
                  if (Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                      >= -10.0) {
                    if (Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        <= 10.0) {
                      g =
                        ((Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                          >= -10.0) &&
                         (Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                          <= 30.0));
                    } else {
                      g = false;
                    }
                  } else {
                    g = false;
                  }

                  if (!g) {
                    if (Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        < -10.0) {
                      Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        = -10.0;
                    } else if
                        (Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                         > 10.0) {
                      Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        = 10.0;
                    }

                    if (Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        < -10.0) {
                      Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        = -10.0;
                    } else if
                        (Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                         > 30.0) {
                      Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                        = 30.0;
                    }
                  }
                }
              }

              for (Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG = 0;
                   Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG < 4;
                   Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG++) {
                Subsystem_B.y_f =
                  Subsystem_B.target_y_correction[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG];
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex < 101;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.b_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    = std::abs(Subsystem_B.y_f -
                               yc[Subsystem_B.c_vertex_index_beforeCurrentNex]);
                }

                Subsystem_minimum_g(Subsystem_B.b_varargin_1,
                                    &Subsystem_B.tmp_base,
                                    &Subsystem_B.c_vertex_index_beforeCurrentNex);
                Subsystem_B.y_f =
                  Subsystem_B.target_x_correction[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG];
                for (Subsystem_B.index_pred_detail = 0;
                     Subsystem_B.index_pred_detail < 201;
                     Subsystem_B.index_pred_detail++) {
                  Subsystem_B.c_varargin_1[Subsystem_B.index_pred_detail] = std::
                    abs(Subsystem_B.y_f - bd[Subsystem_B.index_pred_detail]);
                }

                Subsystem_minimum_g4(Subsystem_B.c_varargin_1,
                                     &Subsystem_B.tmp_base,
                                     &Subsystem_B.index_pred_detail);
                Subsystem_B.y_f =
                  Subsystem_B.target_y_correction[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG
                  + 1];
                for (Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
                     Subsystem_B.c_overlap_btw_ego_pred_before_d < 101;
                     Subsystem_B.c_overlap_btw_ego_pred_before_d++) {
                  Subsystem_B.b_varargin_1[Subsystem_B.c_overlap_btw_ego_pred_before_d]
                    = std::abs(Subsystem_B.y_f -
                               yc[Subsystem_B.c_overlap_btw_ego_pred_before_d]);
                }

                Subsystem_minimum_g(Subsystem_B.b_varargin_1,
                                    &Subsystem_B.tmp_base,
                                    &Subsystem_B.c_overlap_btw_ego_pred_before_d);
                Subsystem_B.y_f =
                  Subsystem_B.target_x_correction[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG
                  + 1];
                for (Subsystem_B.v = 0; Subsystem_B.v < 201; Subsystem_B.v++) {
                  Subsystem_B.c_varargin_1[Subsystem_B.v] = std::abs
                    (Subsystem_B.y_f - bd[Subsystem_B.v]);
                }

                Subsystem_minimum_g4(Subsystem_B.c_varargin_1,
                                     &Subsystem_B.tmp_base, &Subsystem_B.v);
                Subsystem_plotLine(static_cast<real_T>
                                   (Subsystem_B.index_pred_detail), static_cast<
                                   real_T>
                                   (Subsystem_B.c_vertex_index_beforeCurrentNex),
                                   static_cast<real_T>(Subsystem_B.v),
                                   static_cast<real_T>
                                   (Subsystem_B.c_overlap_btw_ego_pred_before_d),
                                   Subsystem_B.c_varargin_1,
                                   &Subsystem_B.ego_y_contour_total_size,
                                   Subsystem_B.tmp_y_contour_data,
                                   &Subsystem_B.tmp_y_contour_size);
                Subsystem_B.f_row = (Subsystem_B.i_row + static_cast<real_T>
                                     (Subsystem_B.ego_y_contour_total_size)) -
                  1.0;
                if (Subsystem_B.i_row > Subsystem_B.f_row) {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
                  Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                } else {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d =
                    static_cast<int32_T>(Subsystem_B.i_row) - 1;
                  Subsystem_B.c_vertex_index_beforeCurrentNex =
                    static_cast<int32_T>(Subsystem_B.f_row);
                }

                Subsystem_B.index_pred_detail =
                  Subsystem_B.c_vertex_index_beforeCurrentNex -
                  Subsystem_B.c_overlap_btw_ego_pred_before_d;
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex <
                     Subsystem_B.index_pred_detail;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.ego_x_contour_total_data[Subsystem_B.c_overlap_btw_ego_pred_before_d
                    + Subsystem_B.c_vertex_index_beforeCurrentNex] =
                    Subsystem_B.c_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex];
                }

                if (Subsystem_B.i_row > Subsystem_B.f_row) {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
                  Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                } else {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d =
                    static_cast<int32_T>(Subsystem_B.i_row) - 1;
                  Subsystem_B.c_vertex_index_beforeCurrentNex =
                    static_cast<int32_T>(Subsystem_B.f_row);
                }

                Subsystem_B.index_pred_detail =
                  Subsystem_B.c_vertex_index_beforeCurrentNex -
                  Subsystem_B.c_overlap_btw_ego_pred_before_d;
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex <
                     Subsystem_B.index_pred_detail;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.ego_y_contour_total_data[Subsystem_B.c_overlap_btw_ego_pred_before_d
                    + Subsystem_B.c_vertex_index_beforeCurrentNex] =
                    Subsystem_B.tmp_y_contour_data[Subsystem_B.c_vertex_index_beforeCurrentNex];
                }

                Subsystem_B.i_row = Subsystem_B.f_row + 1.0;
              }
            } else {
              for (Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG = 0;
                   Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG < 4;
                   Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG++) {
                Subsystem_B.f_row =
                  Subsystem_B.target_y[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG];
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex < 101;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.b_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    = std::abs(Subsystem_B.f_row -
                               yc[Subsystem_B.c_vertex_index_beforeCurrentNex]);
                }

                Subsystem_minimum_g(Subsystem_B.b_varargin_1,
                                    &Subsystem_B.tmp_base,
                                    &Subsystem_B.c_vertex_index_beforeCurrentNex);
                Subsystem_B.tmp_base =
                  Subsystem_B.target_x[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG];
                for (Subsystem_B.index_pred_detail = 0;
                     Subsystem_B.index_pred_detail < 201;
                     Subsystem_B.index_pred_detail++) {
                  Subsystem_B.c_varargin_1[Subsystem_B.index_pred_detail] = std::
                    abs(Subsystem_B.tmp_base - bd[Subsystem_B.index_pred_detail]);
                }

                Subsystem_minimum_g4(Subsystem_B.c_varargin_1,
                                     &Subsystem_B.tmp_base,
                                     &Subsystem_B.index_pred_detail);
                Subsystem_B.f_row =
                  Subsystem_B.target_y[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG + 1];
                for (Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
                     Subsystem_B.c_overlap_btw_ego_pred_before_d < 101;
                     Subsystem_B.c_overlap_btw_ego_pred_before_d++) {
                  Subsystem_B.b_varargin_1[Subsystem_B.c_overlap_btw_ego_pred_before_d]
                    = std::abs(Subsystem_B.f_row -
                               yc[Subsystem_B.c_overlap_btw_ego_pred_before_d]);
                }

                Subsystem_minimum_g(Subsystem_B.b_varargin_1,
                                    &Subsystem_B.tmp_base,
                                    &Subsystem_B.c_overlap_btw_ego_pred_before_d);
                Subsystem_B.tmp_base =
                  Subsystem_B.target_x[Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG + 1];
                for (Subsystem_B.v = 0; Subsystem_B.v < 201; Subsystem_B.v++) {
                  Subsystem_B.c_varargin_1[Subsystem_B.v] = std::abs
                    (Subsystem_B.tmp_base - bd[Subsystem_B.v]);
                }

                Subsystem_minimum_g4(Subsystem_B.c_varargin_1,
                                     &Subsystem_B.tmp_base, &Subsystem_B.v);
                Subsystem_plotLine(static_cast<real_T>
                                   (Subsystem_B.index_pred_detail), static_cast<
                                   real_T>
                                   (Subsystem_B.c_vertex_index_beforeCurrentNex),
                                   static_cast<real_T>(Subsystem_B.v),
                                   static_cast<real_T>
                                   (Subsystem_B.c_overlap_btw_ego_pred_before_d),
                                   Subsystem_B.c_varargin_1,
                                   &Subsystem_B.ego_y_contour_total_size,
                                   Subsystem_B.tmp_y_contour_data,
                                   &Subsystem_B.tmp_y_contour_size);
                Subsystem_B.f_row = (Subsystem_B.i_row + static_cast<real_T>
                                     (Subsystem_B.ego_y_contour_total_size)) -
                  1.0;
                if (Subsystem_B.i_row > Subsystem_B.f_row) {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
                  Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                } else {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d =
                    static_cast<int32_T>(Subsystem_B.i_row) - 1;
                  Subsystem_B.c_vertex_index_beforeCurrentNex =
                    static_cast<int32_T>(Subsystem_B.f_row);
                }

                Subsystem_B.index_pred_detail =
                  Subsystem_B.c_vertex_index_beforeCurrentNex -
                  Subsystem_B.c_overlap_btw_ego_pred_before_d;
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex <
                     Subsystem_B.index_pred_detail;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.ego_x_contour_total_data[Subsystem_B.c_overlap_btw_ego_pred_before_d
                    + Subsystem_B.c_vertex_index_beforeCurrentNex] =
                    Subsystem_B.c_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex];
                }

                if (Subsystem_B.i_row > Subsystem_B.f_row) {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
                  Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                } else {
                  Subsystem_B.c_overlap_btw_ego_pred_before_d =
                    static_cast<int32_T>(Subsystem_B.i_row) - 1;
                  Subsystem_B.c_vertex_index_beforeCurrentNex =
                    static_cast<int32_T>(Subsystem_B.f_row);
                }

                Subsystem_B.index_pred_detail =
                  Subsystem_B.c_vertex_index_beforeCurrentNex -
                  Subsystem_B.c_overlap_btw_ego_pred_before_d;
                for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                     Subsystem_B.c_vertex_index_beforeCurrentNex <
                     Subsystem_B.index_pred_detail;
                     Subsystem_B.c_vertex_index_beforeCurrentNex++) {
                  Subsystem_B.ego_y_contour_total_data[Subsystem_B.c_overlap_btw_ego_pred_before_d
                    + Subsystem_B.c_vertex_index_beforeCurrentNex] =
                    Subsystem_B.tmp_y_contour_data[Subsystem_B.c_vertex_index_beforeCurrentNex];
                }

                Subsystem_B.i_row = Subsystem_B.f_row + 1.0;
              }
            }

            Subsystem_B.ego_x_contour_total_tmp_size[0] = 1;
            Subsystem_B.ego_x_contour_total_tmp_size[1] = static_cast<int32_T>
              (200.0 - (Subsystem_B.f_row + 1.0)) + 1;
            Subsystem_B.index_pred_detail = static_cast<int32_T>(200.0 -
              (Subsystem_B.f_row + 1.0));
            for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                 Subsystem_B.c_vertex_index_beforeCurrentNex <=
                 Subsystem_B.index_pred_detail;
                 Subsystem_B.c_vertex_index_beforeCurrentNex++) {
              Subsystem_B.ego_x_contour_total_tmp_data[Subsystem_B.c_vertex_index_beforeCurrentNex]
                = static_cast<int32_T>((Subsystem_B.f_row + 1.0) + static_cast<
                real_T>(Subsystem_B.c_vertex_index_beforeCurrentNex));
            }

            Subsystem_nullAssignment(Subsystem_B.ego_x_contour_total_data,
              &Subsystem_B.ego_x_contour_total_size,
              Subsystem_B.ego_x_contour_total_tmp_data,
              Subsystem_B.ego_x_contour_total_tmp_size);
            Subsystem_nullAssignment(Subsystem_B.ego_y_contour_total_data,
              &Subsystem_B.ego_y_contour_total_size,
              Subsystem_B.ego_x_contour_total_tmp_data,
              Subsystem_B.ego_x_contour_total_tmp_size);
            Subsystem_B.index_pred_detail = Subsystem_B.ego_x_contour_total_size;
            for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                 Subsystem_B.c_vertex_index_beforeCurrentNex <
                 Subsystem_B.index_pred_detail;
                 Subsystem_B.c_vertex_index_beforeCurrentNex++) {
              SBEV_in[(static_cast<int32_T>
                       (Subsystem_B.ego_x_contour_total_data[Subsystem_B.c_vertex_index_beforeCurrentNex])
                       + 201 * (static_cast<int32_T>
                                (Subsystem_B.ego_y_contour_total_data[Subsystem_B.c_vertex_index_beforeCurrentNex])
                                - 1)) - 1] = static_cast<real_T>
                (Subsystem_B.tmp_i) - 1.0;
            }

            Subsystem_B.index_pred_detail = Subsystem_B.ego_x_contour_total_size;
            for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                 Subsystem_B.c_vertex_index_beforeCurrentNex <
                 Subsystem_B.index_pred_detail;
                 Subsystem_B.c_vertex_index_beforeCurrentNex++) {
              SBEV_in[(static_cast<int32_T>
                       (Subsystem_B.ego_x_contour_total_data[Subsystem_B.c_vertex_index_beforeCurrentNex])
                       + 201 * (static_cast<int32_T>
                                (Subsystem_B.ego_y_contour_total_data[Subsystem_B.c_vertex_index_beforeCurrentNex])
                                - 1)) + 20300] = 0.0;
            }

            Subsystem_B.index_pred_detail = Subsystem_B.ego_x_contour_total_size;
            for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
                 Subsystem_B.c_vertex_index_beforeCurrentNex <
                 Subsystem_B.index_pred_detail;
                 Subsystem_B.c_vertex_index_beforeCurrentNex++) {
              SBEV_in[(static_cast<int32_T>
                       (Subsystem_B.ego_x_contour_total_data[Subsystem_B.c_vertex_index_beforeCurrentNex])
                       + 201 * (static_cast<int32_T>
                                (Subsystem_B.ego_y_contour_total_data[Subsystem_B.c_vertex_index_beforeCurrentNex])
                                - 1)) + 40601] = 0.0;
            }
          }
        }
      }
    }

    Subsystem_B.y_f = State_trajectory[0];
    Subsystem_B.x_cross = State_trajectory[1];
    Subsystem_B.index_pred_detail = 0;
    Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG = 0;
    Subsystem_B.c_overlap_btw_ego_pred_before_d = 0;
    for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
         Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
         Subsystem_B.c_vertex_index_beforeCurrentNex++) {
      Subsystem_B.i_row =
        Subsystem_B.tmp_target_x_vertex_tmp[Subsystem_B.c_vertex_index_beforeCurrentNex];
      Subsystem_B.tmp_base =
        Subsystem_B.tmp_target_y_vertex_tmp[Subsystem_B.c_vertex_index_beforeCurrentNex];
      Subsystem_B.f_row = (Subsystem_B.i_row *
                           Subsystem_B.tmp_target_y_vertex_tmp_tmp +
                           Subsystem_B.tmp_base * Subsystem_B.c_x_tmp) +
        Subsystem_B.y_f;
      Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex] =
        Subsystem_B.f_row;
      Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex] =
        (Subsystem_B.i_row * Subsystem_B.c_x_tmp - Subsystem_B.tmp_base *
         Subsystem_B.tmp_target_y_vertex_tmp_tmp) + Subsystem_B.x_cross;
      Subsystem_B.target_y_m[Subsystem_B.c_vertex_index_beforeCurrentNex] =
        (Subsystem_B.f_row >= -10.0);
    }

    if (Subsystem_all(Subsystem_B.target_y_m)) {
      for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
           Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
           Subsystem_B.c_vertex_index_beforeCurrentNex++) {
        Subsystem_B.target_y_m[Subsystem_B.c_vertex_index_beforeCurrentNex] =
          (Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex] <=
           10.0);
      }

      if (Subsystem_all(Subsystem_B.target_y_m)) {
        for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
             Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
             Subsystem_B.c_vertex_index_beforeCurrentNex++) {
          Subsystem_B.target_y_m[Subsystem_B.c_vertex_index_beforeCurrentNex] =
            (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex] >=
             -10.0);
        }

        if (Subsystem_all(Subsystem_B.target_y_m)) {
          for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
               Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
               Subsystem_B.c_vertex_index_beforeCurrentNex++) {
            Subsystem_B.target_y_m[Subsystem_B.c_vertex_index_beforeCurrentNex] =
              (Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex]
               <= 30.0);
          }

          g = Subsystem_all(Subsystem_B.target_y_m);
        } else {
          g = false;
        }
      } else {
        g = false;
      }
    } else {
      g = false;
    }

    if (!g) {
      Subsystem_B.vertex_total[0] = (Subsystem_B.target_y[0] >= -10.0);
      Subsystem_B.vertex_total[1] = (Subsystem_B.target_y[0] <= 10.0);
      Subsystem_B.vertex_total[2] = (Subsystem_B.target_x[0] >= -10.0);
      Subsystem_B.vertex_total[3] = (Subsystem_B.target_x[0] <= 30.0);
      Subsystem_B.vertex_total[4] = (Subsystem_B.target_y[1] >= -10.0);
      Subsystem_B.vertex_total[5] = (Subsystem_B.target_y[1] <= 10.0);
      Subsystem_B.vertex_total[6] = (Subsystem_B.target_x[1] >= -10.0);
      Subsystem_B.vertex_total[7] = (Subsystem_B.target_x[1] <= 30.0);
      Subsystem_B.vertex_total[8] = (Subsystem_B.target_y[2] >= -10.0);
      Subsystem_B.vertex_total[9] = (Subsystem_B.target_y[2] <= 10.0);
      Subsystem_B.vertex_total[10] = (Subsystem_B.target_x[2] >= -10.0);
      Subsystem_B.vertex_total[11] = (Subsystem_B.target_x[2] <= 30.0);
      Subsystem_B.vertex_total[12] = (Subsystem_B.target_y[3] >= -10.0);
      Subsystem_B.vertex_total[13] = (Subsystem_B.target_y[3] <= 10.0);
      Subsystem_B.vertex_total[14] = (Subsystem_B.target_x[3] >= -10.0);
      Subsystem_B.vertex_total[15] = (Subsystem_B.target_x[3] <= 30.0);
      Subsystem_all_k(Subsystem_B.vertex_total, Subsystem_B.bv1);
      switch (Subsystem_intnnz(Subsystem_B.bv1)) {
       case 3:
        Subsystem_B.index_pred_detail = 1;
        break;

       case 2:
        Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG = 1;
        break;

       case 1:
        Subsystem_B.c_overlap_btw_ego_pred_before_d = 1;
        break;
      }
    }

    Subsystem_B.tmp_base = Subsystem_minimum(Subsystem_B.target_y);
    guard1 = false;
    guard2 = false;
    if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 10.0)) {
      guard2 = true;
    } else {
      Subsystem_B.tmp_base = Subsystem_maximum(Subsystem_B.target_y);
      if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 10.0)) {
        guard2 = true;
      }
    }

    if (guard2) {
      Subsystem_B.tmp_base = Subsystem_minimum(Subsystem_B.target_x);
      if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 30.0)) {
        guard1 = true;
      } else {
        Subsystem_B.tmp_base = Subsystem_maximum(Subsystem_B.target_x);
        if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 30.0)) {
          guard1 = true;
        }
      }
    }

    if (guard1) {
      Subsystem_B.ego_x_contour_total_size = 200;
      Subsystem_B.ego_y_contour_total_size = 200;
      std::memset(&Subsystem_B.ego_x_contour_total_data[0], 0, 200U * sizeof
                  (real_T));
      std::memset(&Subsystem_B.ego_y_contour_total_data[0], 0, 200U * sizeof
                  (real_T));
      Subsystem_B.i_row = 1.0;
      Subsystem_B.f_row = 0.0;
      if (Subsystem_B.index_pred_detail != 0) {
        for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
             Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
             Subsystem_B.c_vertex_index_beforeCurrentNex++) {
          Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
            = Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex];
          Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
            = Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex];
        }

        Subsystem_B.y_f = 0.0;
        Subsystem_B.x_cross = 0.0;
        for (Subsystem_B.tmp_i = 0; Subsystem_B.tmp_i < 4; Subsystem_B.tmp_i++)
        {
          if (Subsystem_B.tmp_i + 1 == 1) {
            Subsystem_B.tmp_y_vertex_1 = Subsystem_B.target_y[3];
            Subsystem_B.tmp_x_vertex_1 = Subsystem_B.target_x[3];
          } else {
            Subsystem_B.tmp_y_vertex_1 = Subsystem_B.target_y[Subsystem_B.tmp_i
              - 1];
            Subsystem_B.tmp_x_vertex_1 = Subsystem_B.target_x[Subsystem_B.tmp_i
              - 1];
          }

          if (Subsystem_B.target_y[Subsystem_B.tmp_i] >= -10.0) {
            if (Subsystem_B.target_y[Subsystem_B.tmp_i] <= 10.0) {
              g = ((Subsystem_B.target_x[Subsystem_B.tmp_i] >= -10.0) &&
                   (Subsystem_B.target_x[Subsystem_B.tmp_i] <= 30.0));
            } else {
              g = false;
            }
          } else {
            g = false;
          }

          if (!g) {
            Subsystem_B.tmp_base = Subsystem_B.target_y[Subsystem_B.tmp_i + 1];
            guard3 = false;
            if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 10.0))
            {
              Subsystem_B.m_x_tmp = Subsystem_B.target_x[Subsystem_B.tmp_i + 1];
              if ((Subsystem_B.m_x_tmp >= -10.0) && (Subsystem_B.m_x_tmp <= 30.0)
                  && ((Subsystem_B.tmp_y_vertex_1 >= -10.0) &&
                      (Subsystem_B.tmp_y_vertex_1 <= 10.0) &&
                      (Subsystem_B.tmp_x_vertex_1 >= -10.0) &&
                      (Subsystem_B.tmp_x_vertex_1 <= 30.0))) {
                switch (Subsystem_B.tmp_i + 1) {
                 case 1:
                  Subsystem_B.m = Subsystem_B.target_y_correction[2];
                  Subsystem_B.target_y_correction_idx_2 =
                    Subsystem_B.target_y_correction[3];
                  Subsystem_B.target_y_correction[2] =
                    Subsystem_B.target_y_correction[1];
                  Subsystem_B.target_y_correction[3] = Subsystem_B.m;
                  Subsystem_B.target_y_correction[4] =
                    Subsystem_B.target_y_correction_idx_2;
                  Subsystem_B.m = Subsystem_B.target_x_correction[2];
                  Subsystem_B.target_y_correction_idx_2 =
                    Subsystem_B.target_x_correction[3];
                  Subsystem_B.target_x_correction[2] =
                    Subsystem_B.target_x_correction[1];
                  Subsystem_B.target_x_correction[3] = Subsystem_B.m;
                  Subsystem_B.target_x_correction[4] =
                    Subsystem_B.target_y_correction_idx_2;
                  break;

                 case 2:
                  Subsystem_B.m = Subsystem_B.target_y_correction[3];
                  Subsystem_B.target_y_correction[3] =
                    Subsystem_B.target_y_correction[2];
                  Subsystem_B.target_y_correction[4] = Subsystem_B.m;
                  Subsystem_B.m = Subsystem_B.target_x_correction[3];
                  Subsystem_B.target_x_correction[3] =
                    Subsystem_B.target_x_correction[2];
                  Subsystem_B.target_x_correction[4] = Subsystem_B.m;
                  break;

                 case 3:
                  Subsystem_B.target_y_correction[4] =
                    Subsystem_B.target_y_correction[3];
                  Subsystem_B.target_x_correction[4] =
                    Subsystem_B.target_x_correction[3];
                  break;
                }

                Subsystem_B.m = (Subsystem_B.target_y[Subsystem_B.tmp_i] -
                                 Subsystem_B.tmp_y_vertex_1) /
                  (Subsystem_B.target_x[Subsystem_B.tmp_i] -
                   Subsystem_B.tmp_x_vertex_1);
                Subsystem_B.tmp_y_vertex_1 -= Subsystem_B.m *
                  Subsystem_B.tmp_x_vertex_1;
                if (Subsystem_B.target_y[Subsystem_B.tmp_i] < -10.0) {
                  Subsystem_B.y_cross_1 = -10.0;
                  Subsystem_B.x_cross_1 = (-10.0 - Subsystem_B.tmp_y_vertex_1) /
                    Subsystem_B.m;
                } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] > 10.0) {
                  Subsystem_B.y_cross_1 = 10.0;
                  Subsystem_B.x_cross_1 = (10.0 - Subsystem_B.tmp_y_vertex_1) /
                    Subsystem_B.m;
                } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] < -10.0) {
                  Subsystem_B.x_cross_1 = -10.0;
                  Subsystem_B.y_cross_1 = Subsystem_B.m * -10.0 +
                    Subsystem_B.tmp_y_vertex_1;
                } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] > 30.0) {
                  Subsystem_B.x_cross_1 = 30.0;
                  Subsystem_B.y_cross_1 = Subsystem_B.m * 30.0 +
                    Subsystem_B.tmp_y_vertex_1;
                }

                Subsystem_B.tmp_y_vertex_1 = (Subsystem_B.tmp_base -
                  Subsystem_B.target_y[Subsystem_B.tmp_i]) /
                  (Subsystem_B.m_x_tmp - Subsystem_B.target_x[Subsystem_B.tmp_i]);
                Subsystem_B.tmp_base -= Subsystem_B.m_x_tmp *
                  Subsystem_B.tmp_y_vertex_1;
                if (Subsystem_B.target_y[Subsystem_B.tmp_i] < -10.0) {
                  Subsystem_B.y_cross_2 = -10.0;
                  Subsystem_B.x_cross_2 = (-10.0 - Subsystem_B.tmp_base) /
                    Subsystem_B.tmp_y_vertex_1;
                } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] > 10.0) {
                  Subsystem_B.y_cross_2 = 10.0;
                  Subsystem_B.x_cross_2 = (10.0 - Subsystem_B.tmp_base) /
                    Subsystem_B.tmp_y_vertex_1;
                } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] < -10.0) {
                  Subsystem_B.x_cross_2 = -10.0;
                  Subsystem_B.y_cross_2 = Subsystem_B.tmp_y_vertex_1 * -10.0 +
                    Subsystem_B.tmp_base;
                } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] > 30.0) {
                  Subsystem_B.x_cross_2 = 30.0;
                  Subsystem_B.y_cross_2 = Subsystem_B.tmp_y_vertex_1 * 30.0 +
                    Subsystem_B.tmp_base;
                }

                Subsystem_B.target_y_correction[Subsystem_B.tmp_i] =
                  Subsystem_B.y_cross_1;
                Subsystem_B.target_x_correction[Subsystem_B.tmp_i] =
                  Subsystem_B.x_cross_1;
                Subsystem_B.target_y_correction[Subsystem_B.tmp_i + 1] =
                  Subsystem_B.y_cross_2;
                Subsystem_B.target_x_correction[Subsystem_B.tmp_i + 1] =
                  Subsystem_B.x_cross_2;
              } else {
                guard3 = true;
              }
            } else {
              guard3 = true;
            }

            if (guard3) {
              if ((Subsystem_B.tmp_y_vertex_1 >= -10.0) &&
                  (Subsystem_B.tmp_y_vertex_1 <= 10.0) &&
                  (Subsystem_B.tmp_x_vertex_1 >= -10.0) &&
                  (Subsystem_B.tmp_x_vertex_1 <= 30.0)) {
                if (Subsystem_B.target_x[Subsystem_B.tmp_i] ==
                    Subsystem_B.tmp_x_vertex_1) {
                  if (Subsystem_B.target_y[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.y_f = -10.0;
                    Subsystem_B.x_cross = Subsystem_B.target_x[Subsystem_B.tmp_i];
                  } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] > 10.0) {
                    Subsystem_B.y_f = 10.0;
                    Subsystem_B.x_cross = Subsystem_B.target_x[Subsystem_B.tmp_i];
                  }
                } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] ==
                           Subsystem_B.tmp_y_vertex_1) {
                  if (Subsystem_B.target_x[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.x_cross = -10.0;
                    Subsystem_B.y_f = Subsystem_B.target_y[Subsystem_B.tmp_i];
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] > 30.0) {
                    Subsystem_B.x_cross = 30.0;
                    Subsystem_B.y_f = Subsystem_B.target_y[Subsystem_B.tmp_i];
                  }
                } else {
                  Subsystem_B.m = (Subsystem_B.target_y[Subsystem_B.tmp_i] -
                                   Subsystem_B.tmp_y_vertex_1) /
                    (Subsystem_B.target_x[Subsystem_B.tmp_i] -
                     Subsystem_B.tmp_x_vertex_1);
                  Subsystem_B.tmp_base = Subsystem_B.tmp_y_vertex_1 -
                    Subsystem_B.m * Subsystem_B.tmp_x_vertex_1;
                  if (Subsystem_B.target_y[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.y_f = -10.0;
                    Subsystem_B.x_cross = (-10.0 - Subsystem_B.tmp_base) /
                      Subsystem_B.m;
                  } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] > 10.0) {
                    Subsystem_B.y_f = 10.0;
                    Subsystem_B.x_cross = (10.0 - Subsystem_B.tmp_base) /
                      Subsystem_B.m;
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.x_cross = -10.0;
                    Subsystem_B.y_f = Subsystem_B.m * -10.0 +
                      Subsystem_B.tmp_base;
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] > 30.0) {
                    Subsystem_B.x_cross = 30.0;
                    Subsystem_B.y_f = Subsystem_B.m * 30.0 +
                      Subsystem_B.tmp_base;
                  }
                }

                if (Subsystem_B.tmp_i + 1 == 1) {
                  Subsystem_B.target_y_correction[0] = Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[0] = Subsystem_B.x_cross;
                  Subsystem_B.target_y_correction[4] = Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[4] = Subsystem_B.x_cross;
                } else {
                  Subsystem_B.target_y_correction[Subsystem_B.tmp_i] =
                    Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[Subsystem_B.tmp_i] =
                    Subsystem_B.x_cross;
                }
              }
            }
          }
        }

        for (Subsystem_B.tmp_i = 0; Subsystem_B.tmp_i < 5; Subsystem_B.tmp_i++)
        {
          if (Subsystem_B.tmp_i + 1 < 5) {
            Subsystem_B.f_row =
              Subsystem_B.target_y_correction[Subsystem_B.tmp_i + 1];
            Subsystem_B.tmp_base =
              Subsystem_B.target_x_correction[Subsystem_B.tmp_i + 1];
          } else {
            Subsystem_B.f_row = Subsystem_B.target_y_correction[0];
            Subsystem_B.tmp_base = Subsystem_B.target_x_correction[0];
          }

          Subsystem_B.y_f = Subsystem_B.target_y_correction[Subsystem_B.tmp_i];
          for (Subsystem_B.prediction_time_step_at_overlap = 0;
               Subsystem_B.prediction_time_step_at_overlap < 101;
               Subsystem_B.prediction_time_step_at_overlap++) {
            Subsystem_B.b_varargin_1[Subsystem_B.prediction_time_step_at_overlap]
              = std::abs(Subsystem_B.y_f -
                         yc[Subsystem_B.prediction_time_step_at_overlap]);
          }

          Subsystem_minimum_g(Subsystem_B.b_varargin_1, &Subsystem_B.y_cross_1,
                              &Subsystem_B.prediction_time_step_at_overlap);
          Subsystem_B.y_f = Subsystem_B.target_x_correction[Subsystem_B.tmp_i];
          for (Subsystem_B.overlap_btw_ego_pred_flag = 0;
               Subsystem_B.overlap_btw_ego_pred_flag < 201;
               Subsystem_B.overlap_btw_ego_pred_flag++) {
            Subsystem_B.c_varargin_1[Subsystem_B.overlap_btw_ego_pred_flag] =
              std::abs(Subsystem_B.y_f -
                       bd[Subsystem_B.overlap_btw_ego_pred_flag]);
          }

          Subsystem_minimum_g4(Subsystem_B.c_varargin_1, &Subsystem_B.y_cross_1,
                               &Subsystem_B.overlap_btw_ego_pred_flag);
          for (Subsystem_B.c_prediction_time_step_detail_a = 0;
               Subsystem_B.c_prediction_time_step_detail_a < 101;
               Subsystem_B.c_prediction_time_step_detail_a++) {
            Subsystem_B.b_varargin_1[Subsystem_B.c_prediction_time_step_detail_a]
              = std::abs(Subsystem_B.f_row -
                         yc[Subsystem_B.c_prediction_time_step_detail_a]);
          }

          Subsystem_minimum_g(Subsystem_B.b_varargin_1, &Subsystem_B.y_cross_1,
                              &Subsystem_B.c_prediction_time_step_detail_a);
          for (Subsystem_B.c_overlap_btw_ego_pred_detail_f = 0;
               Subsystem_B.c_overlap_btw_ego_pred_detail_f < 201;
               Subsystem_B.c_overlap_btw_ego_pred_detail_f++) {
            Subsystem_B.c_varargin_1[Subsystem_B.c_overlap_btw_ego_pred_detail_f]
              = std::abs(Subsystem_B.tmp_base -
                         bd[Subsystem_B.c_overlap_btw_ego_pred_detail_f]);
          }

          Subsystem_minimum_g4(Subsystem_B.c_varargin_1, &Subsystem_B.y_cross_1,
                               &Subsystem_B.c_overlap_btw_ego_pred_detail_f);
          Subsystem_plotLine(static_cast<real_T>
                             (Subsystem_B.overlap_btw_ego_pred_flag),
                             static_cast<real_T>
                             (Subsystem_B.prediction_time_step_at_overlap),
                             static_cast<real_T>
                             (Subsystem_B.c_overlap_btw_ego_pred_detail_f),
                             static_cast<real_T>
                             (Subsystem_B.c_prediction_time_step_detail_a),
                             Subsystem_B.c_varargin_1,
                             &Subsystem_B.ego_y_contour_total_size,
                             Subsystem_B.tmp_y_contour_data,
                             &Subsystem_B.tmp_y_contour_size);
          Subsystem_B.f_row = (Subsystem_B.i_row + static_cast<real_T>
                               (Subsystem_B.ego_y_contour_total_size)) - 1.0;
          if (Subsystem_B.i_row > Subsystem_B.f_row) {
            Subsystem_B.prediction_time_step_at_overlap = 0;
            Subsystem_B.overlap_btw_ego_pred_flag = 0;
          } else {
            Subsystem_B.prediction_time_step_at_overlap = static_cast<int32_T>
              (Subsystem_B.i_row) - 1;
            Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
              (Subsystem_B.f_row);
          }

          Subsystem_B.index_pred_detail = Subsystem_B.overlap_btw_ego_pred_flag
            - Subsystem_B.prediction_time_step_at_overlap;
          for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
               Subsystem_B.c_vertex_index_beforeCurrentNex <
               Subsystem_B.index_pred_detail;
               Subsystem_B.c_vertex_index_beforeCurrentNex++) {
            Subsystem_B.ego_x_contour_total_data[Subsystem_B.prediction_time_step_at_overlap
              + Subsystem_B.c_vertex_index_beforeCurrentNex] =
              Subsystem_B.c_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex];
          }

          if (Subsystem_B.i_row > Subsystem_B.f_row) {
            Subsystem_B.prediction_time_step_at_overlap = 0;
            Subsystem_B.overlap_btw_ego_pred_flag = 0;
          } else {
            Subsystem_B.prediction_time_step_at_overlap = static_cast<int32_T>
              (Subsystem_B.i_row) - 1;
            Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
              (Subsystem_B.f_row);
          }

          Subsystem_B.index_pred_detail = Subsystem_B.overlap_btw_ego_pred_flag
            - Subsystem_B.prediction_time_step_at_overlap;
          for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
               Subsystem_B.c_vertex_index_beforeCurrentNex <
               Subsystem_B.index_pred_detail;
               Subsystem_B.c_vertex_index_beforeCurrentNex++) {
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.prediction_time_step_at_overlap
              + Subsystem_B.c_vertex_index_beforeCurrentNex] =
              Subsystem_B.tmp_y_contour_data[Subsystem_B.c_vertex_index_beforeCurrentNex];
          }

          Subsystem_B.i_row = Subsystem_B.f_row + 1.0;
        }
      } else if (Subsystem_B.TWO_VERTEX_ROI_OUT_FLAG != 0) {
        for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
             Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
             Subsystem_B.c_vertex_index_beforeCurrentNex++) {
          Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
            = Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex];
          Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
            = Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex];
        }

        Subsystem_B.y_f = 0.0;
        Subsystem_B.x_cross = 0.0;
        for (Subsystem_B.tmp_i = 0; Subsystem_B.tmp_i < 4; Subsystem_B.tmp_i++)
        {
          if (Subsystem_B.tmp_i + 1 == 1) {
            Subsystem_B.tmp_y_vertex_1 = Subsystem_B.target_y[3];
            Subsystem_B.tmp_x_vertex_1 = Subsystem_B.target_x[3];
          } else {
            Subsystem_B.tmp_y_vertex_1 = Subsystem_B.target_y[Subsystem_B.tmp_i
              - 1];
            Subsystem_B.tmp_x_vertex_1 = Subsystem_B.target_x[Subsystem_B.tmp_i
              - 1];
          }

          if (Subsystem_B.target_y[Subsystem_B.tmp_i] >= -10.0) {
            if (Subsystem_B.target_y[Subsystem_B.tmp_i] <= 10.0) {
              g = ((Subsystem_B.target_x[Subsystem_B.tmp_i] >= -10.0) &&
                   (Subsystem_B.target_x[Subsystem_B.tmp_i] <= 30.0));
            } else {
              g = false;
            }
          } else {
            g = false;
          }

          if (!g) {
            Subsystem_B.tmp_base = Subsystem_B.target_y[Subsystem_B.tmp_i + 1];
            guard3 = false;
            if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 10.0))
            {
              Subsystem_B.m_x_tmp = Subsystem_B.target_x[Subsystem_B.tmp_i + 1];
              if ((Subsystem_B.m_x_tmp >= -10.0) && (Subsystem_B.m_x_tmp <= 30.0))
              {
                if (Subsystem_B.m_x_tmp ==
                    Subsystem_B.target_x[Subsystem_B.tmp_i]) {
                  if (Subsystem_B.target_y[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.y_f = -10.0;
                    Subsystem_B.x_cross = Subsystem_B.target_x[Subsystem_B.tmp_i];
                  } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] > 10.0) {
                    Subsystem_B.y_f = 10.0;
                    Subsystem_B.x_cross = Subsystem_B.target_x[Subsystem_B.tmp_i];
                  }
                } else if (Subsystem_B.tmp_base ==
                           Subsystem_B.target_y[Subsystem_B.tmp_i]) {
                  if (Subsystem_B.target_x[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.y_f = Subsystem_B.target_y[Subsystem_B.tmp_i];
                    Subsystem_B.x_cross = -10.0;
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] > 30.0) {
                    Subsystem_B.y_f = Subsystem_B.target_y[Subsystem_B.tmp_i];
                    Subsystem_B.x_cross = 30.0;
                  }
                } else {
                  Subsystem_B.m = (Subsystem_B.tmp_base -
                                   Subsystem_B.target_y[Subsystem_B.tmp_i]) /
                    (Subsystem_B.m_x_tmp -
                     Subsystem_B.target_x[Subsystem_B.tmp_i]);
                  Subsystem_B.tmp_base -= Subsystem_B.m_x_tmp * Subsystem_B.m;
                  if (Subsystem_B.target_y[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.y_f = -10.0;
                    Subsystem_B.x_cross = (-10.0 - Subsystem_B.tmp_base) /
                      Subsystem_B.m;
                  } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] > 10.0) {
                    Subsystem_B.y_f = 10.0;
                    Subsystem_B.x_cross = (10.0 - Subsystem_B.tmp_base) /
                      Subsystem_B.m;
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.x_cross = -10.0;
                    Subsystem_B.y_f = Subsystem_B.m * -10.0 +
                      Subsystem_B.tmp_base;
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] > 30.0) {
                    Subsystem_B.x_cross = 30.0;
                    Subsystem_B.y_f = Subsystem_B.m * 30.0 +
                      Subsystem_B.tmp_base;
                  }
                }

                if (Subsystem_B.tmp_i + 1 == 1) {
                  Subsystem_B.target_y_correction[0] = Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[0] = Subsystem_B.x_cross;
                  Subsystem_B.target_y_correction[4] = Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[4] = Subsystem_B.x_cross;
                } else {
                  Subsystem_B.target_y_correction[Subsystem_B.tmp_i] =
                    Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[Subsystem_B.tmp_i] =
                    Subsystem_B.x_cross;
                }
              } else {
                guard3 = true;
              }
            } else {
              guard3 = true;
            }

            if (guard3) {
              if ((Subsystem_B.tmp_y_vertex_1 >= -10.0) &&
                  (Subsystem_B.tmp_y_vertex_1 <= 10.0) &&
                  (Subsystem_B.tmp_x_vertex_1 >= -10.0) &&
                  (Subsystem_B.tmp_x_vertex_1 <= 30.0)) {
                if (Subsystem_B.target_x[Subsystem_B.tmp_i] ==
                    Subsystem_B.tmp_x_vertex_1) {
                  if (Subsystem_B.target_y[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.y_f = -10.0;
                    Subsystem_B.x_cross = Subsystem_B.target_x[Subsystem_B.tmp_i];
                  } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] > 10.0) {
                    Subsystem_B.y_f = 10.0;
                    Subsystem_B.x_cross = Subsystem_B.target_x[Subsystem_B.tmp_i];
                  }
                } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] ==
                           Subsystem_B.tmp_y_vertex_1) {
                  if (Subsystem_B.target_x[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.x_cross = -10.0;
                    Subsystem_B.y_f = Subsystem_B.target_y[Subsystem_B.tmp_i];
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] > 30.0) {
                    Subsystem_B.x_cross = 30.0;
                    Subsystem_B.y_f = Subsystem_B.target_y[Subsystem_B.tmp_i];
                  }
                } else {
                  Subsystem_B.m = (Subsystem_B.target_y[Subsystem_B.tmp_i] -
                                   Subsystem_B.tmp_y_vertex_1) /
                    (Subsystem_B.target_x[Subsystem_B.tmp_i] -
                     Subsystem_B.tmp_x_vertex_1);
                  Subsystem_B.tmp_base = Subsystem_B.tmp_y_vertex_1 -
                    Subsystem_B.m * Subsystem_B.tmp_x_vertex_1;
                  if (Subsystem_B.target_y[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.y_f = -10.0;
                    Subsystem_B.x_cross = (-10.0 - Subsystem_B.tmp_base) /
                      Subsystem_B.m;
                  } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] > 10.0) {
                    Subsystem_B.y_f = 10.0;
                    Subsystem_B.x_cross = (10.0 - Subsystem_B.tmp_base) /
                      Subsystem_B.m;
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.x_cross = -10.0;
                    Subsystem_B.y_f = Subsystem_B.m * -10.0 +
                      Subsystem_B.tmp_base;
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] > 30.0) {
                    Subsystem_B.x_cross = 30.0;
                    Subsystem_B.y_f = Subsystem_B.m * 30.0 +
                      Subsystem_B.tmp_base;
                  }
                }

                if (Subsystem_B.tmp_i + 1 == 1) {
                  Subsystem_B.target_y_correction[0] = Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[0] = Subsystem_B.x_cross;
                  Subsystem_B.target_y_correction[4] = Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[4] = Subsystem_B.x_cross;
                } else {
                  Subsystem_B.target_y_correction[Subsystem_B.tmp_i] =
                    Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[Subsystem_B.tmp_i] =
                    Subsystem_B.x_cross;
                }
              }
            }
          }
        }

        for (Subsystem_B.tmp_i = 0; Subsystem_B.tmp_i < 4; Subsystem_B.tmp_i++)
        {
          Subsystem_B.y_f = Subsystem_B.target_y_correction[Subsystem_B.tmp_i];
          for (Subsystem_B.prediction_time_step_at_overlap = 0;
               Subsystem_B.prediction_time_step_at_overlap < 101;
               Subsystem_B.prediction_time_step_at_overlap++) {
            Subsystem_B.b_varargin_1[Subsystem_B.prediction_time_step_at_overlap]
              = std::abs(Subsystem_B.y_f -
                         yc[Subsystem_B.prediction_time_step_at_overlap]);
          }

          Subsystem_minimum_g(Subsystem_B.b_varargin_1, &Subsystem_B.y_cross_1,
                              &Subsystem_B.prediction_time_step_at_overlap);
          Subsystem_B.y_f = Subsystem_B.target_x_correction[Subsystem_B.tmp_i];
          for (Subsystem_B.overlap_btw_ego_pred_flag = 0;
               Subsystem_B.overlap_btw_ego_pred_flag < 201;
               Subsystem_B.overlap_btw_ego_pred_flag++) {
            Subsystem_B.c_varargin_1[Subsystem_B.overlap_btw_ego_pred_flag] =
              std::abs(Subsystem_B.y_f -
                       bd[Subsystem_B.overlap_btw_ego_pred_flag]);
          }

          Subsystem_minimum_g4(Subsystem_B.c_varargin_1, &Subsystem_B.y_cross_1,
                               &Subsystem_B.overlap_btw_ego_pred_flag);
          Subsystem_B.y_f = Subsystem_B.target_y_correction[Subsystem_B.tmp_i +
            1];
          for (Subsystem_B.c_prediction_time_step_detail_a = 0;
               Subsystem_B.c_prediction_time_step_detail_a < 101;
               Subsystem_B.c_prediction_time_step_detail_a++) {
            Subsystem_B.b_varargin_1[Subsystem_B.c_prediction_time_step_detail_a]
              = std::abs(Subsystem_B.y_f -
                         yc[Subsystem_B.c_prediction_time_step_detail_a]);
          }

          Subsystem_minimum_g(Subsystem_B.b_varargin_1, &Subsystem_B.y_cross_1,
                              &Subsystem_B.c_prediction_time_step_detail_a);
          Subsystem_B.y_f = Subsystem_B.target_x_correction[Subsystem_B.tmp_i +
            1];
          for (Subsystem_B.c_overlap_btw_ego_pred_detail_f = 0;
               Subsystem_B.c_overlap_btw_ego_pred_detail_f < 201;
               Subsystem_B.c_overlap_btw_ego_pred_detail_f++) {
            Subsystem_B.c_varargin_1[Subsystem_B.c_overlap_btw_ego_pred_detail_f]
              = std::abs(Subsystem_B.y_f -
                         bd[Subsystem_B.c_overlap_btw_ego_pred_detail_f]);
          }

          Subsystem_minimum_g4(Subsystem_B.c_varargin_1, &Subsystem_B.y_cross_1,
                               &Subsystem_B.c_overlap_btw_ego_pred_detail_f);
          Subsystem_plotLine(static_cast<real_T>
                             (Subsystem_B.overlap_btw_ego_pred_flag),
                             static_cast<real_T>
                             (Subsystem_B.prediction_time_step_at_overlap),
                             static_cast<real_T>
                             (Subsystem_B.c_overlap_btw_ego_pred_detail_f),
                             static_cast<real_T>
                             (Subsystem_B.c_prediction_time_step_detail_a),
                             Subsystem_B.c_varargin_1,
                             &Subsystem_B.ego_y_contour_total_size,
                             Subsystem_B.tmp_y_contour_data,
                             &Subsystem_B.tmp_y_contour_size);
          Subsystem_B.f_row = (Subsystem_B.i_row + static_cast<real_T>
                               (Subsystem_B.ego_y_contour_total_size)) - 1.0;
          if (Subsystem_B.i_row > Subsystem_B.f_row) {
            Subsystem_B.prediction_time_step_at_overlap = 0;
            Subsystem_B.overlap_btw_ego_pred_flag = 0;
          } else {
            Subsystem_B.prediction_time_step_at_overlap = static_cast<int32_T>
              (Subsystem_B.i_row) - 1;
            Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
              (Subsystem_B.f_row);
          }

          Subsystem_B.index_pred_detail = Subsystem_B.overlap_btw_ego_pred_flag
            - Subsystem_B.prediction_time_step_at_overlap;
          for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
               Subsystem_B.c_vertex_index_beforeCurrentNex <
               Subsystem_B.index_pred_detail;
               Subsystem_B.c_vertex_index_beforeCurrentNex++) {
            Subsystem_B.ego_x_contour_total_data[Subsystem_B.prediction_time_step_at_overlap
              + Subsystem_B.c_vertex_index_beforeCurrentNex] =
              Subsystem_B.c_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex];
          }

          if (Subsystem_B.i_row > Subsystem_B.f_row) {
            Subsystem_B.prediction_time_step_at_overlap = 0;
            Subsystem_B.overlap_btw_ego_pred_flag = 0;
          } else {
            Subsystem_B.prediction_time_step_at_overlap = static_cast<int32_T>
              (Subsystem_B.i_row) - 1;
            Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
              (Subsystem_B.f_row);
          }

          Subsystem_B.index_pred_detail = Subsystem_B.overlap_btw_ego_pred_flag
            - Subsystem_B.prediction_time_step_at_overlap;
          for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
               Subsystem_B.c_vertex_index_beforeCurrentNex <
               Subsystem_B.index_pred_detail;
               Subsystem_B.c_vertex_index_beforeCurrentNex++) {
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.prediction_time_step_at_overlap
              + Subsystem_B.c_vertex_index_beforeCurrentNex] =
              Subsystem_B.tmp_y_contour_data[Subsystem_B.c_vertex_index_beforeCurrentNex];
          }

          Subsystem_B.i_row = Subsystem_B.f_row + 1.0;
        }
      } else if (Subsystem_B.c_overlap_btw_ego_pred_before_d != 0) {
        for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
             Subsystem_B.c_vertex_index_beforeCurrentNex < 5;
             Subsystem_B.c_vertex_index_beforeCurrentNex++) {
          Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
            = Subsystem_B.target_y[Subsystem_B.c_vertex_index_beforeCurrentNex];
          Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
            = Subsystem_B.target_x[Subsystem_B.c_vertex_index_beforeCurrentNex];
        }

        Subsystem_B.y_f = 0.0;
        Subsystem_B.x_cross = 0.0;
        Subsystem_B.c_vertex_index_beforeCurrentNex = -1;
        for (Subsystem_B.tmp_i = 0; Subsystem_B.tmp_i < 4; Subsystem_B.tmp_i++)
        {
          if (Subsystem_B.tmp_i + 1 == 1) {
            Subsystem_B.tmp_y_vertex_1 = Subsystem_B.target_y[3];
            Subsystem_B.tmp_x_vertex_1 = Subsystem_B.target_x[3];
          } else {
            Subsystem_B.tmp_y_vertex_1 = Subsystem_B.target_y[Subsystem_B.tmp_i
              - 1];
            Subsystem_B.tmp_x_vertex_1 = Subsystem_B.target_x[Subsystem_B.tmp_i
              - 1];
          }

          if (Subsystem_B.target_y[Subsystem_B.tmp_i] >= -10.0) {
            if (Subsystem_B.target_y[Subsystem_B.tmp_i] <= 10.0) {
              g = ((Subsystem_B.target_x[Subsystem_B.tmp_i] >= -10.0) &&
                   (Subsystem_B.target_x[Subsystem_B.tmp_i] <= 30.0));
            } else {
              g = false;
            }
          } else {
            g = false;
          }

          if (!g) {
            Subsystem_B.tmp_base = Subsystem_B.target_y[Subsystem_B.tmp_i + 1];
            guard3 = false;
            if ((Subsystem_B.tmp_base >= -10.0) && (Subsystem_B.tmp_base <= 10.0))
            {
              Subsystem_B.m_x_tmp = Subsystem_B.target_x[Subsystem_B.tmp_i + 1];
              if ((Subsystem_B.m_x_tmp >= -10.0) && (Subsystem_B.m_x_tmp <= 30.0))
              {
                if (Subsystem_B.m_x_tmp ==
                    Subsystem_B.target_x[Subsystem_B.tmp_i]) {
                  if (Subsystem_B.target_y[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.y_f = -10.0;
                    Subsystem_B.x_cross = Subsystem_B.target_x[Subsystem_B.tmp_i];
                  } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] > 10.0) {
                    Subsystem_B.y_f = 10.0;
                    Subsystem_B.x_cross = Subsystem_B.target_x[Subsystem_B.tmp_i];
                  }
                } else if (Subsystem_B.tmp_base ==
                           Subsystem_B.target_y[Subsystem_B.tmp_i]) {
                  if (Subsystem_B.target_x[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.y_f = Subsystem_B.target_y[Subsystem_B.tmp_i];
                    Subsystem_B.x_cross = -10.0;
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] > 30.0) {
                    Subsystem_B.y_f = Subsystem_B.target_y[Subsystem_B.tmp_i];
                    Subsystem_B.x_cross = 30.0;
                  }
                } else {
                  Subsystem_B.m = (Subsystem_B.tmp_base -
                                   Subsystem_B.target_y[Subsystem_B.tmp_i]) /
                    (Subsystem_B.m_x_tmp -
                     Subsystem_B.target_x[Subsystem_B.tmp_i]);
                  Subsystem_B.tmp_base -= Subsystem_B.m_x_tmp * Subsystem_B.m;
                  if (Subsystem_B.target_y[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.y_f = -10.0;
                    Subsystem_B.x_cross = (-10.0 - Subsystem_B.tmp_base) /
                      Subsystem_B.m;
                  } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] > 10.0) {
                    Subsystem_B.y_f = 10.0;
                    Subsystem_B.x_cross = (10.0 - Subsystem_B.tmp_base) /
                      Subsystem_B.m;
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.x_cross = -10.0;
                    Subsystem_B.y_f = Subsystem_B.m * -10.0 +
                      Subsystem_B.tmp_base;
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] > 30.0) {
                    Subsystem_B.x_cross = 30.0;
                    Subsystem_B.y_f = Subsystem_B.m * 30.0 +
                      Subsystem_B.tmp_base;
                  }
                }

                if (Subsystem_B.tmp_i + 1 == 1) {
                  Subsystem_B.target_y_correction[0] = Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[0] = Subsystem_B.x_cross;
                  Subsystem_B.target_y_correction[4] = Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[4] = Subsystem_B.x_cross;
                } else {
                  Subsystem_B.target_y_correction[Subsystem_B.tmp_i] =
                    Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[Subsystem_B.tmp_i] =
                    Subsystem_B.x_cross;
                }
              } else {
                guard3 = true;
              }
            } else {
              guard3 = true;
            }

            if (guard3) {
              if ((Subsystem_B.tmp_y_vertex_1 >= -10.0) &&
                  (Subsystem_B.tmp_y_vertex_1 <= 10.0) &&
                  (Subsystem_B.tmp_x_vertex_1 >= -10.0) &&
                  (Subsystem_B.tmp_x_vertex_1 <= 30.0)) {
                if (Subsystem_B.target_x[Subsystem_B.tmp_i] ==
                    Subsystem_B.tmp_x_vertex_1) {
                  if (Subsystem_B.target_y[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.y_f = -10.0;
                    Subsystem_B.x_cross = Subsystem_B.target_x[Subsystem_B.tmp_i];
                  } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] > 10.0) {
                    Subsystem_B.y_f = 10.0;
                    Subsystem_B.x_cross = Subsystem_B.target_x[Subsystem_B.tmp_i];
                  }
                } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] ==
                           Subsystem_B.tmp_y_vertex_1) {
                  if (Subsystem_B.target_x[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.x_cross = -10.0;
                    Subsystem_B.y_f = Subsystem_B.target_y[Subsystem_B.tmp_i];
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] > 30.0) {
                    Subsystem_B.x_cross = 30.0;
                    Subsystem_B.y_f = Subsystem_B.target_y[Subsystem_B.tmp_i];
                  }
                } else {
                  Subsystem_B.m = (Subsystem_B.target_y[Subsystem_B.tmp_i] -
                                   Subsystem_B.tmp_y_vertex_1) /
                    (Subsystem_B.target_x[Subsystem_B.tmp_i] -
                     Subsystem_B.tmp_x_vertex_1);
                  Subsystem_B.tmp_base = Subsystem_B.tmp_y_vertex_1 -
                    Subsystem_B.m * Subsystem_B.tmp_x_vertex_1;
                  if (Subsystem_B.target_y[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.y_f = -10.0;
                    Subsystem_B.x_cross = (-10.0 - Subsystem_B.tmp_base) /
                      Subsystem_B.m;
                  } else if (Subsystem_B.target_y[Subsystem_B.tmp_i] > 10.0) {
                    Subsystem_B.y_f = 10.0;
                    Subsystem_B.x_cross = (10.0 - Subsystem_B.tmp_base) /
                      Subsystem_B.m;
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] < -10.0) {
                    Subsystem_B.x_cross = -10.0;
                    Subsystem_B.y_f = Subsystem_B.m * -10.0 +
                      Subsystem_B.tmp_base;
                  } else if (Subsystem_B.target_x[Subsystem_B.tmp_i] > 30.0) {
                    Subsystem_B.x_cross = 30.0;
                    Subsystem_B.y_f = Subsystem_B.m * 30.0 +
                      Subsystem_B.tmp_base;
                  }
                }

                if (Subsystem_B.tmp_i + 1 == 1) {
                  Subsystem_B.target_y_correction[0] = Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[0] = Subsystem_B.x_cross;
                  Subsystem_B.target_y_correction[4] = Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[4] = Subsystem_B.x_cross;
                } else {
                  Subsystem_B.target_y_correction[Subsystem_B.tmp_i] =
                    Subsystem_B.y_f;
                  Subsystem_B.target_x_correction[Subsystem_B.tmp_i] =
                    Subsystem_B.x_cross;
                }
              } else {
                Subsystem_B.c_vertex_index_beforeCurrentNex = Subsystem_B.tmp_i;
              }
            }
          }
        }

        if (Subsystem_B.c_vertex_index_beforeCurrentNex + 1 != 0) {
          if (((Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                >= -10.0) &&
               (Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                <= 10.0)) ||
              ((Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                >= -10.0) &&
               (Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                <= 30.0))) {
            if (Subsystem_B.c_vertex_index_beforeCurrentNex + 1 == 1) {
              Subsystem_B.target_y_correction[0] =
                Subsystem_B.target_y_correction[3];
              Subsystem_B.target_x_correction[0] =
                Subsystem_B.target_x_correction[3];
            } else {
              Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                =
                Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex
                - 1];
              Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                =
                Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex
                - 1];
            }
          } else {
            if (Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                >= -10.0) {
              if (Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  <= 10.0) {
                g =
                  ((Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    >= -10.0) &&
                   (Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                    <= 30.0));
              } else {
                g = false;
              }
            } else {
              g = false;
            }

            if (!g) {
              if (Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  < -10.0) {
                Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  = -10.0;
              } else if
                  (Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                   > 10.0) {
                Subsystem_B.target_y_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  = 10.0;
              }

              if (Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  < -10.0) {
                Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  = -10.0;
              } else if
                  (Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                   > 30.0) {
                Subsystem_B.target_x_correction[Subsystem_B.c_vertex_index_beforeCurrentNex]
                  = 30.0;
              }
            }
          }
        }

        for (Subsystem_B.tmp_i = 0; Subsystem_B.tmp_i < 4; Subsystem_B.tmp_i++)
        {
          Subsystem_B.y_f = Subsystem_B.target_y_correction[Subsystem_B.tmp_i];
          for (Subsystem_B.prediction_time_step_at_overlap = 0;
               Subsystem_B.prediction_time_step_at_overlap < 101;
               Subsystem_B.prediction_time_step_at_overlap++) {
            Subsystem_B.b_varargin_1[Subsystem_B.prediction_time_step_at_overlap]
              = std::abs(Subsystem_B.y_f -
                         yc[Subsystem_B.prediction_time_step_at_overlap]);
          }

          Subsystem_minimum_g(Subsystem_B.b_varargin_1, &Subsystem_B.y_cross_1,
                              &Subsystem_B.prediction_time_step_at_overlap);
          Subsystem_B.y_f = Subsystem_B.target_x_correction[Subsystem_B.tmp_i];
          for (Subsystem_B.overlap_btw_ego_pred_flag = 0;
               Subsystem_B.overlap_btw_ego_pred_flag < 201;
               Subsystem_B.overlap_btw_ego_pred_flag++) {
            Subsystem_B.c_varargin_1[Subsystem_B.overlap_btw_ego_pred_flag] =
              std::abs(Subsystem_B.y_f -
                       bd[Subsystem_B.overlap_btw_ego_pred_flag]);
          }

          Subsystem_minimum_g4(Subsystem_B.c_varargin_1, &Subsystem_B.y_cross_1,
                               &Subsystem_B.overlap_btw_ego_pred_flag);
          Subsystem_B.y_f = Subsystem_B.target_y_correction[Subsystem_B.tmp_i +
            1];
          for (Subsystem_B.c_prediction_time_step_detail_a = 0;
               Subsystem_B.c_prediction_time_step_detail_a < 101;
               Subsystem_B.c_prediction_time_step_detail_a++) {
            Subsystem_B.b_varargin_1[Subsystem_B.c_prediction_time_step_detail_a]
              = std::abs(Subsystem_B.y_f -
                         yc[Subsystem_B.c_prediction_time_step_detail_a]);
          }

          Subsystem_minimum_g(Subsystem_B.b_varargin_1, &Subsystem_B.y_cross_1,
                              &Subsystem_B.c_prediction_time_step_detail_a);
          Subsystem_B.y_f = Subsystem_B.target_x_correction[Subsystem_B.tmp_i +
            1];
          for (Subsystem_B.c_overlap_btw_ego_pred_detail_f = 0;
               Subsystem_B.c_overlap_btw_ego_pred_detail_f < 201;
               Subsystem_B.c_overlap_btw_ego_pred_detail_f++) {
            Subsystem_B.c_varargin_1[Subsystem_B.c_overlap_btw_ego_pred_detail_f]
              = std::abs(Subsystem_B.y_f -
                         bd[Subsystem_B.c_overlap_btw_ego_pred_detail_f]);
          }

          Subsystem_minimum_g4(Subsystem_B.c_varargin_1, &Subsystem_B.y_cross_1,
                               &Subsystem_B.c_overlap_btw_ego_pred_detail_f);
          Subsystem_plotLine(static_cast<real_T>
                             (Subsystem_B.overlap_btw_ego_pred_flag),
                             static_cast<real_T>
                             (Subsystem_B.prediction_time_step_at_overlap),
                             static_cast<real_T>
                             (Subsystem_B.c_overlap_btw_ego_pred_detail_f),
                             static_cast<real_T>
                             (Subsystem_B.c_prediction_time_step_detail_a),
                             Subsystem_B.c_varargin_1,
                             &Subsystem_B.ego_y_contour_total_size,
                             Subsystem_B.tmp_y_contour_data,
                             &Subsystem_B.tmp_y_contour_size);
          Subsystem_B.f_row = (Subsystem_B.i_row + static_cast<real_T>
                               (Subsystem_B.ego_y_contour_total_size)) - 1.0;
          if (Subsystem_B.i_row > Subsystem_B.f_row) {
            Subsystem_B.prediction_time_step_at_overlap = 0;
            Subsystem_B.overlap_btw_ego_pred_flag = 0;
          } else {
            Subsystem_B.prediction_time_step_at_overlap = static_cast<int32_T>
              (Subsystem_B.i_row) - 1;
            Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
              (Subsystem_B.f_row);
          }

          Subsystem_B.index_pred_detail = Subsystem_B.overlap_btw_ego_pred_flag
            - Subsystem_B.prediction_time_step_at_overlap;
          for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
               Subsystem_B.c_vertex_index_beforeCurrentNex <
               Subsystem_B.index_pred_detail;
               Subsystem_B.c_vertex_index_beforeCurrentNex++) {
            Subsystem_B.ego_x_contour_total_data[Subsystem_B.prediction_time_step_at_overlap
              + Subsystem_B.c_vertex_index_beforeCurrentNex] =
              Subsystem_B.c_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex];
          }

          if (Subsystem_B.i_row > Subsystem_B.f_row) {
            Subsystem_B.prediction_time_step_at_overlap = 0;
            Subsystem_B.overlap_btw_ego_pred_flag = 0;
          } else {
            Subsystem_B.prediction_time_step_at_overlap = static_cast<int32_T>
              (Subsystem_B.i_row) - 1;
            Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
              (Subsystem_B.f_row);
          }

          Subsystem_B.index_pred_detail = Subsystem_B.overlap_btw_ego_pred_flag
            - Subsystem_B.prediction_time_step_at_overlap;
          for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
               Subsystem_B.c_vertex_index_beforeCurrentNex <
               Subsystem_B.index_pred_detail;
               Subsystem_B.c_vertex_index_beforeCurrentNex++) {
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.prediction_time_step_at_overlap
              + Subsystem_B.c_vertex_index_beforeCurrentNex] =
              Subsystem_B.tmp_y_contour_data[Subsystem_B.c_vertex_index_beforeCurrentNex];
          }

          Subsystem_B.i_row = Subsystem_B.f_row + 1.0;
        }
      } else {
        for (Subsystem_B.tmp_i = 0; Subsystem_B.tmp_i < 4; Subsystem_B.tmp_i++)
        {
          Subsystem_B.f_row = Subsystem_B.target_y[Subsystem_B.tmp_i];
          for (Subsystem_B.prediction_time_step_at_overlap = 0;
               Subsystem_B.prediction_time_step_at_overlap < 101;
               Subsystem_B.prediction_time_step_at_overlap++) {
            Subsystem_B.b_varargin_1[Subsystem_B.prediction_time_step_at_overlap]
              = std::abs(Subsystem_B.f_row -
                         yc[Subsystem_B.prediction_time_step_at_overlap]);
          }

          Subsystem_minimum_g(Subsystem_B.b_varargin_1, &Subsystem_B.y_cross_1,
                              &Subsystem_B.prediction_time_step_at_overlap);
          Subsystem_B.tmp_base = Subsystem_B.target_x[Subsystem_B.tmp_i];
          for (Subsystem_B.overlap_btw_ego_pred_flag = 0;
               Subsystem_B.overlap_btw_ego_pred_flag < 201;
               Subsystem_B.overlap_btw_ego_pred_flag++) {
            Subsystem_B.c_varargin_1[Subsystem_B.overlap_btw_ego_pred_flag] =
              std::abs(Subsystem_B.tmp_base -
                       bd[Subsystem_B.overlap_btw_ego_pred_flag]);
          }

          Subsystem_minimum_g4(Subsystem_B.c_varargin_1, &Subsystem_B.y_cross_1,
                               &Subsystem_B.overlap_btw_ego_pred_flag);
          Subsystem_B.f_row = Subsystem_B.target_y[Subsystem_B.tmp_i + 1];
          for (Subsystem_B.c_prediction_time_step_detail_a = 0;
               Subsystem_B.c_prediction_time_step_detail_a < 101;
               Subsystem_B.c_prediction_time_step_detail_a++) {
            Subsystem_B.b_varargin_1[Subsystem_B.c_prediction_time_step_detail_a]
              = std::abs(Subsystem_B.f_row -
                         yc[Subsystem_B.c_prediction_time_step_detail_a]);
          }

          Subsystem_minimum_g(Subsystem_B.b_varargin_1, &Subsystem_B.y_cross_1,
                              &Subsystem_B.c_prediction_time_step_detail_a);
          Subsystem_B.tmp_base = Subsystem_B.target_x[Subsystem_B.tmp_i + 1];
          for (Subsystem_B.c_overlap_btw_ego_pred_detail_f = 0;
               Subsystem_B.c_overlap_btw_ego_pred_detail_f < 201;
               Subsystem_B.c_overlap_btw_ego_pred_detail_f++) {
            Subsystem_B.c_varargin_1[Subsystem_B.c_overlap_btw_ego_pred_detail_f]
              = std::abs(Subsystem_B.tmp_base -
                         bd[Subsystem_B.c_overlap_btw_ego_pred_detail_f]);
          }

          Subsystem_minimum_g4(Subsystem_B.c_varargin_1, &Subsystem_B.y_cross_1,
                               &Subsystem_B.c_overlap_btw_ego_pred_detail_f);
          Subsystem_plotLine(static_cast<real_T>
                             (Subsystem_B.overlap_btw_ego_pred_flag),
                             static_cast<real_T>
                             (Subsystem_B.prediction_time_step_at_overlap),
                             static_cast<real_T>
                             (Subsystem_B.c_overlap_btw_ego_pred_detail_f),
                             static_cast<real_T>
                             (Subsystem_B.c_prediction_time_step_detail_a),
                             Subsystem_B.c_varargin_1,
                             &Subsystem_B.ego_y_contour_total_size,
                             Subsystem_B.tmp_y_contour_data,
                             &Subsystem_B.tmp_y_contour_size);
          Subsystem_B.f_row = (Subsystem_B.i_row + static_cast<real_T>
                               (Subsystem_B.ego_y_contour_total_size)) - 1.0;
          if (Subsystem_B.i_row > Subsystem_B.f_row) {
            Subsystem_B.prediction_time_step_at_overlap = 0;
            Subsystem_B.overlap_btw_ego_pred_flag = 0;
          } else {
            Subsystem_B.prediction_time_step_at_overlap = static_cast<int32_T>
              (Subsystem_B.i_row) - 1;
            Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
              (Subsystem_B.f_row);
          }

          Subsystem_B.index_pred_detail = Subsystem_B.overlap_btw_ego_pred_flag
            - Subsystem_B.prediction_time_step_at_overlap;
          for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
               Subsystem_B.c_vertex_index_beforeCurrentNex <
               Subsystem_B.index_pred_detail;
               Subsystem_B.c_vertex_index_beforeCurrentNex++) {
            Subsystem_B.ego_x_contour_total_data[Subsystem_B.prediction_time_step_at_overlap
              + Subsystem_B.c_vertex_index_beforeCurrentNex] =
              Subsystem_B.c_varargin_1[Subsystem_B.c_vertex_index_beforeCurrentNex];
          }

          if (Subsystem_B.i_row > Subsystem_B.f_row) {
            Subsystem_B.prediction_time_step_at_overlap = 0;
            Subsystem_B.overlap_btw_ego_pred_flag = 0;
          } else {
            Subsystem_B.prediction_time_step_at_overlap = static_cast<int32_T>
              (Subsystem_B.i_row) - 1;
            Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
              (Subsystem_B.f_row);
          }

          Subsystem_B.index_pred_detail = Subsystem_B.overlap_btw_ego_pred_flag
            - Subsystem_B.prediction_time_step_at_overlap;
          for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
               Subsystem_B.c_vertex_index_beforeCurrentNex <
               Subsystem_B.index_pred_detail;
               Subsystem_B.c_vertex_index_beforeCurrentNex++) {
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.prediction_time_step_at_overlap
              + Subsystem_B.c_vertex_index_beforeCurrentNex] =
              Subsystem_B.tmp_y_contour_data[Subsystem_B.c_vertex_index_beforeCurrentNex];
          }

          Subsystem_B.i_row = Subsystem_B.f_row + 1.0;
        }
      }

      Subsystem_B.ego_x_contour_total_tmp_size[0] = 1;
      Subsystem_B.ego_x_contour_total_tmp_size[1] = static_cast<int32_T>(200.0 -
        (Subsystem_B.f_row + 1.0)) + 1;
      Subsystem_B.index_pred_detail = static_cast<int32_T>(200.0 -
        (Subsystem_B.f_row + 1.0));
      for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
           Subsystem_B.c_vertex_index_beforeCurrentNex <=
           Subsystem_B.index_pred_detail;
           Subsystem_B.c_vertex_index_beforeCurrentNex++) {
        Subsystem_B.ego_x_contour_total_tmp_data[Subsystem_B.c_vertex_index_beforeCurrentNex]
          = static_cast<int32_T>((Subsystem_B.f_row + 1.0) + static_cast<real_T>
          (Subsystem_B.c_vertex_index_beforeCurrentNex));
      }

      Subsystem_nullAssignment(Subsystem_B.ego_x_contour_total_data,
        &Subsystem_B.ego_x_contour_total_size,
        Subsystem_B.ego_x_contour_total_tmp_data,
        Subsystem_B.ego_x_contour_total_tmp_size);
      Subsystem_nullAssignment(Subsystem_B.ego_y_contour_total_data,
        &Subsystem_B.ego_y_contour_total_size,
        Subsystem_B.ego_x_contour_total_tmp_data,
        Subsystem_B.ego_x_contour_total_tmp_size);
      Subsystem_B.c_vertex_index_beforeCurrentNex = pixel_info->size[0] *
        pixel_info->size[1];
      pixel_info->size[0] = static_cast<int32_T>(Subsystem_B.f_row);
      pixel_info->size[1] = 3;
      Subsys_emxEnsureCapacity_real_T(pixel_info,
        Subsystem_B.c_vertex_index_beforeCurrentNex);
      Subsystem_B.index_pred_detail = static_cast<int32_T>(Subsystem_B.f_row) *
        3;
      if (Subsystem_B.index_pred_detail - 1 >= 0) {
        std::memset(&pixel_info->data[0], 0, static_cast<uint32_T>
                    (Subsystem_B.index_pred_detail) * sizeof(real_T));
      }

      Subsystem_B.sorted_x_contour_total_size =
        Subsystem_B.ego_x_contour_total_size;
      Subsystem_B.index_pred_detail = Subsystem_B.ego_x_contour_total_size;
      if (Subsystem_B.index_pred_detail - 1 >= 0) {
        std::memcpy(&Subsystem_B.sorted_x_contour_total_data[0],
                    &Subsystem_B.ego_x_contour_total_data[0],
                    static_cast<uint32_T>(Subsystem_B.index_pred_detail) *
                    sizeof(real_T));
      }

      Subsystem_sort(Subsystem_B.sorted_x_contour_total_data,
                     &Subsystem_B.sorted_x_contour_total_size,
                     Subsystem_B.ego_x_contour_total_tmp_data,
                     &Subsystem_B.ego_y_contour_total_size);
      Subsystem_B.f_row = 1000.0;
      Subsystem_B.y_f = 0.0;
      Subsystem_B.i_row = 0.0;
      Subsystem_B.overlap_btw_ego_pred_flag =
        Subsystem_B.ego_x_contour_total_size;
      for (Subsystem_B.prediction_time_step_at_overlap = 0;
           Subsystem_B.prediction_time_step_at_overlap <=
           Subsystem_B.overlap_btw_ego_pred_flag - 2;
           Subsystem_B.prediction_time_step_at_overlap++) {
        Subsystem_B.x_cross =
          Subsystem_B.sorted_x_contour_total_data[Subsystem_B.prediction_time_step_at_overlap];
        if (Subsystem_B.sorted_x_contour_total_data[Subsystem_B.prediction_time_step_at_overlap
            + 1] == Subsystem_B.x_cross) {
          Subsystem_B.tmp_i =
            Subsystem_B.ego_x_contour_total_tmp_data[Subsystem_B.prediction_time_step_at_overlap];
          Subsystem_B.tmp_base =
            Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
          if (Subsystem_B.tmp_base > Subsystem_B.y_f) {
            Subsystem_B.y_f =
              Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
          }

          if (Subsystem_B.tmp_base < Subsystem_B.f_row) {
            Subsystem_B.f_row =
              Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
          }

          if (Subsystem_B.prediction_time_step_at_overlap + 1 ==
              Subsystem_B.ego_x_contour_total_size - 1) {
            Subsystem_B.i_row++;
            pixel_info->data[static_cast<int32_T>(Subsystem_B.i_row) - 1] =
              Subsystem_B.x_cross;
            Subsystem_B.tmp_i =
              Subsystem_B.ego_x_contour_total_tmp_data[Subsystem_B.prediction_time_step_at_overlap
              + 1];
            Subsystem_B.tmp_base =
              Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
            if (Subsystem_B.f_row > Subsystem_B.tmp_base) {
              Subsystem_B.f_row =
                Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
            }

            if (Subsystem_B.y_f < Subsystem_B.tmp_base) {
              Subsystem_B.y_f = Subsystem_B.tmp_base;
            }

            pixel_info->data[(static_cast<int32_T>(Subsystem_B.i_row) +
                              pixel_info->size[0]) - 1] = Subsystem_B.f_row;
            pixel_info->data[(static_cast<int32_T>(Subsystem_B.i_row) +
                              (pixel_info->size[0] << 1)) - 1] = Subsystem_B.y_f;
          }
        } else {
          Subsystem_B.i_row++;
          pixel_info->data[static_cast<int32_T>(Subsystem_B.i_row) - 1] =
            Subsystem_B.x_cross;
          if (Subsystem_B.prediction_time_step_at_overlap + 1 == 1) {
            Subsystem_B.f_row =
              Subsystem_B.ego_y_contour_total_data[Subsystem_B.ego_x_contour_total_tmp_data
              [0] - 1];
            Subsystem_B.y_f = Subsystem_B.f_row;
          } else if (Subsystem_B.prediction_time_step_at_overlap + 1 ==
                     Subsystem_B.ego_x_contour_total_size - 1) {
            Subsystem_B.tmp_base =
              Subsystem_B.ego_y_contour_total_data[Subsystem_B.ego_x_contour_total_tmp_data
              [Subsystem_B.prediction_time_step_at_overlap + 1] - 1];
            pixel_info->data[(static_cast<int32_T>(Subsystem_B.i_row + 1.0) +
                              pixel_info->size[0]) - 1] = Subsystem_B.tmp_base;
            pixel_info->data[(static_cast<int32_T>(Subsystem_B.i_row + 1.0) +
                              (pixel_info->size[0] << 1)) - 1] =
              Subsystem_B.tmp_base;
          } else if (Subsystem_B.f_row == Subsystem_B.y_f) {
            Subsystem_B.tmp_base =
              Subsystem_B.ego_y_contour_total_data[Subsystem_B.ego_x_contour_total_tmp_data
              [Subsystem_B.prediction_time_step_at_overlap] - 1];
            Subsystem_B.y_f =
              Subsystem_B.ego_y_contour_total_data[Subsystem_B.ego_x_contour_total_tmp_data
              [Subsystem_B.prediction_time_step_at_overlap - 1] - 1];
            if (Subsystem_B.y_f > Subsystem_B.tmp_base) {
              Subsystem_B.f_row = Subsystem_B.tmp_base;
            } else if (Subsystem_B.y_f < Subsystem_B.tmp_base) {
              Subsystem_B.f_row = Subsystem_B.y_f;
              Subsystem_B.y_f = Subsystem_B.tmp_base;
            } else {
              Subsystem_B.f_row = Subsystem_B.y_f;
            }
          } else {
            Subsystem_B.tmp_i =
              Subsystem_B.ego_x_contour_total_tmp_data[Subsystem_B.prediction_time_step_at_overlap];
            Subsystem_B.tmp_base =
              Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
            if (Subsystem_B.f_row > Subsystem_B.tmp_base) {
              Subsystem_B.f_row =
                Subsystem_B.ego_y_contour_total_data[Subsystem_B.tmp_i - 1];
            }

            if (Subsystem_B.y_f < Subsystem_B.tmp_base) {
              Subsystem_B.y_f = Subsystem_B.tmp_base;
            }
          }

          pixel_info->data[(static_cast<int32_T>(Subsystem_B.i_row) +
                            pixel_info->size[0]) - 1] = Subsystem_B.f_row;
          pixel_info->data[(static_cast<int32_T>(Subsystem_B.i_row) +
                            (pixel_info->size[0] << 1)) - 1] = Subsystem_B.y_f;
          Subsystem_B.f_row = 1000.0;
          Subsystem_B.y_f = 0.0;
        }
      }

      Subsystem_B.y_f = State_trajectory[8];
      for (Subsystem_B.tmp_i = 0; Subsystem_B.tmp_i < 255; Subsystem_B.tmp_i++)
      {
        Subsystem_B.varargin_1[Subsystem_B.tmp_i] = std::abs(Subsystem_B.y_f -
          wc[Subsystem_B.tmp_i]);
      }

      Subsystem_minimum_g4r(Subsystem_B.varargin_1, &Subsystem_B.y_cross_1,
                            &Subsystem_B.prediction_time_step_at_overlap);
      Subsystem_B.overlap_btw_ego_pred_flag = 0;
      while ((Subsystem_B.overlap_btw_ego_pred_flag <= pixel_info->size[0] - 1) &&
             (pixel_info->data[Subsystem_B.overlap_btw_ego_pred_flag] != 0.0)) {
        Subsystem_B.y_cross_1 = pixel_info->
          data[Subsystem_B.overlap_btw_ego_pred_flag + pixel_info->size[0]];
        Subsystem_B.x_cross_1 = pixel_info->data[(pixel_info->size[0] << 1) +
          Subsystem_B.overlap_btw_ego_pred_flag];
        if (Subsystem_B.y_cross_1 > Subsystem_B.x_cross_1) {
          Subsystem_B.c_prediction_time_step_detail_a = 0;
          Subsystem_B.tmp_i = 0;
        } else {
          Subsystem_B.c_prediction_time_step_detail_a = static_cast<int32_T>
            (Subsystem_B.y_cross_1) - 1;
          Subsystem_B.tmp_i = static_cast<int32_T>(Subsystem_B.x_cross_1);
        }

        Subsystem_B.index_pred_detail = Subsystem_B.tmp_i -
          Subsystem_B.c_prediction_time_step_detail_a;
        Subsystem_B.tmp_i = static_cast<int32_T>(pixel_info->
          data[Subsystem_B.overlap_btw_ego_pred_flag]);
        for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
             Subsystem_B.c_vertex_index_beforeCurrentNex <
             Subsystem_B.index_pred_detail;
             Subsystem_B.c_vertex_index_beforeCurrentNex++) {
          SBEV_in[(Subsystem_B.tmp_i + 201 *
                   (Subsystem_B.c_prediction_time_step_detail_a +
                    Subsystem_B.c_vertex_index_beforeCurrentNex)) - 1] =
            static_cast<real_T>(Subsystem_B.prediction_time_step_at_overlap) -
            1.0;
        }

        Subsystem_B.overlap_btw_ego_pred_flag++;
      }

      Subsystem_B.prediction_time_step_at_overlap = 0;
      while ((Subsystem_B.prediction_time_step_at_overlap <= pixel_info->size[0]
              - 1) && (pixel_info->
                       data[Subsystem_B.prediction_time_step_at_overlap] != 0.0))
      {
        Subsystem_B.y_cross_1 = pixel_info->
          data[Subsystem_B.prediction_time_step_at_overlap + pixel_info->size[0]];
        Subsystem_B.x_cross_1 = pixel_info->data[(pixel_info->size[0] << 1) +
          Subsystem_B.prediction_time_step_at_overlap];
        if (Subsystem_B.y_cross_1 > Subsystem_B.x_cross_1) {
          Subsystem_B.overlap_btw_ego_pred_flag = 0;
          Subsystem_B.tmp_i = 0;
        } else {
          Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
            (Subsystem_B.y_cross_1) - 1;
          Subsystem_B.tmp_i = static_cast<int32_T>(Subsystem_B.x_cross_1);
        }

        Subsystem_B.index_pred_detail = Subsystem_B.tmp_i -
          Subsystem_B.overlap_btw_ego_pred_flag;
        Subsystem_B.tmp_i = static_cast<int32_T>(pixel_info->
          data[Subsystem_B.prediction_time_step_at_overlap]);
        for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
             Subsystem_B.c_vertex_index_beforeCurrentNex <
             Subsystem_B.index_pred_detail;
             Subsystem_B.c_vertex_index_beforeCurrentNex++) {
          SBEV_in[(Subsystem_B.tmp_i + 201 *
                   (Subsystem_B.overlap_btw_ego_pred_flag +
                    Subsystem_B.c_vertex_index_beforeCurrentNex)) + 20300] = 0.0;
        }

        Subsystem_B.prediction_time_step_at_overlap++;
      }

      Subsystem_B.prediction_time_step_at_overlap = 0;
      while ((Subsystem_B.prediction_time_step_at_overlap <= pixel_info->size[0]
              - 1) && (pixel_info->
                       data[Subsystem_B.prediction_time_step_at_overlap] != 0.0))
      {
        Subsystem_B.y_cross_1 = pixel_info->
          data[Subsystem_B.prediction_time_step_at_overlap + pixel_info->size[0]];
        Subsystem_B.x_cross_1 = pixel_info->data[(pixel_info->size[0] << 1) +
          Subsystem_B.prediction_time_step_at_overlap];
        if (Subsystem_B.y_cross_1 > Subsystem_B.x_cross_1) {
          Subsystem_B.overlap_btw_ego_pred_flag = 0;
          Subsystem_B.tmp_i = 0;
        } else {
          Subsystem_B.overlap_btw_ego_pred_flag = static_cast<int32_T>
            (Subsystem_B.y_cross_1) - 1;
          Subsystem_B.tmp_i = static_cast<int32_T>(Subsystem_B.x_cross_1);
        }

        Subsystem_B.index_pred_detail = Subsystem_B.tmp_i -
          Subsystem_B.overlap_btw_ego_pred_flag;
        Subsystem_B.tmp_i = static_cast<int32_T>(pixel_info->
          data[Subsystem_B.prediction_time_step_at_overlap]);
        for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
             Subsystem_B.c_vertex_index_beforeCurrentNex <
             Subsystem_B.index_pred_detail;
             Subsystem_B.c_vertex_index_beforeCurrentNex++) {
          SBEV_in[(Subsystem_B.tmp_i + 201 *
                   (Subsystem_B.overlap_btw_ego_pred_flag +
                    Subsystem_B.c_vertex_index_beforeCurrentNex)) + 40601] = 0.0;
        }

        Subsystem_B.prediction_time_step_at_overlap++;
      }
    }
  }

  Subsystem_emxFree_real_T(&pixel_info);
  if ((Subsystem_B.Target_Exist_in_Input_SBEV == 0) &&
      (Subsystem_B.Target_Shape_Exist_Flag == 0)) {
    for (Subsystem_B.c_vertex_index_beforeCurrentNex = 0;
         Subsystem_B.c_vertex_index_beforeCurrentNex < 60903;
         Subsystem_B.c_vertex_index_beforeCurrentNex++) {
      SBEV_in[Subsystem_B.c_vertex_index_beforeCurrentNex] = 255.0;
    }
  }
}

// Model step function
void Subsystem::step()
{
  static const real_T a[36]{ 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05, 1.0, 0.0, 0.0,
    0.0, 0.0, 0.0012500000000000002, 0.05, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0012500000000000002, 0.05, 1.0 };

  boolean_T c_p;
  boolean_T d_p;
  boolean_T exitg1;
  boolean_T guard1;
  boolean_T guard2;

  // Outputs for Atomic SubSystem: '<Root>/Subsystem'
  // MATLAB Function: '<S1>/Prediction' incorporates:
  //   Inport: '<Root>/Fusion_Track'

  std::memset(&Subsystem_B.X_pred_window[0], 0, 14080U * sizeof(real_T));
  for (Subsystem_B.i = 0; Subsystem_B.i < 64; Subsystem_B.i++) {
    if (Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i] != 0.0) {
      Subsystem_B.Fusion_Track_out_tmp = Subsystem_U.Fusion_Track_out[12 *
        Subsystem_B.i + 6];
      Subsystem_B.tmp_target_y_vertex_tmp_p = -Subsystem_B.Fusion_Track_out_tmp /
        2.0;
      Subsystem_B.tmp_target_y_vertex[0] = Subsystem_B.tmp_target_y_vertex_tmp_p;
      Subsystem_B.tmp_target_y_vertex[1] = Subsystem_B.tmp_target_y_vertex_tmp_p;
      Subsystem_B.tmp_target_y_vertex[2] = Subsystem_B.Fusion_Track_out_tmp /
        2.0;
      Subsystem_B.tmp_target_y_vertex[3] = Subsystem_B.Fusion_Track_out_tmp /
        2.0;
      Subsystem_B.tmp_target_y_vertex[4] = Subsystem_B.tmp_target_y_vertex_tmp_p;
      Subsystem_B.tmp_target_x_vertex[0] = 0.0;
      Subsystem_B.tmp_target_y_vertex_tmp_p = Subsystem_U.Fusion_Track_out[12 *
        Subsystem_B.i + 7];
      Subsystem_B.tmp_target_x_vertex[1] = Subsystem_B.tmp_target_y_vertex_tmp_p;
      Subsystem_B.tmp_target_x_vertex[2] = Subsystem_B.tmp_target_y_vertex_tmp_p;
      Subsystem_B.tmp_target_x_vertex[3] = 0.0;
      Subsystem_B.tmp_target_x_vertex[4] = 0.0;
      Subsystem_B.ego_shape_flag = Subsystem_U.Fusion_Track_out[12 *
        Subsystem_B.i + 8];
      Subsystem_B.x_tmp = std::sin(Subsystem_B.ego_shape_flag);
      Subsystem_B.b_x_tmp = std::cos(Subsystem_B.ego_shape_flag);
      Subsystem_B.ego_shape_flag_out = Subsystem_U.Fusion_Track_out[12 *
        Subsystem_B.i + 1];
      Subsystem_B.d = Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i + 2];
      for (Subsystem_B.rtb_X_pred_window_tmp = 0;
           Subsystem_B.rtb_X_pred_window_tmp < 5;
           Subsystem_B.rtb_X_pred_window_tmp++) {
        Subsystem_B.tmp_target_x_vertex_c =
          Subsystem_B.tmp_target_x_vertex[Subsystem_B.rtb_X_pred_window_tmp];
        Subsystem_B.tmp_target_y_vertex_b =
          Subsystem_B.tmp_target_y_vertex[Subsystem_B.rtb_X_pred_window_tmp];
        Subsystem_B.target_y_vertex[Subsystem_B.rtb_X_pred_window_tmp] =
          (Subsystem_B.tmp_target_x_vertex_c * Subsystem_B.x_tmp +
           Subsystem_B.tmp_target_y_vertex_b * Subsystem_B.b_x_tmp) +
          Subsystem_B.ego_shape_flag_out;
        Subsystem_B.tmp_target_x_vertex[Subsystem_B.rtb_X_pred_window_tmp] =
          (Subsystem_B.tmp_target_x_vertex_c * Subsystem_B.b_x_tmp -
           Subsystem_B.tmp_target_y_vertex_b * Subsystem_B.x_tmp) +
          Subsystem_B.d;
      }

      Subsystem_B.x_tmp = Subsystem_minimum(Subsystem_B.target_y_vertex);
      guard1 = false;
      guard2 = false;
      if ((Subsystem_B.x_tmp >= -10.0) && (Subsystem_B.x_tmp <= 10.0)) {
        guard2 = true;
      } else {
        Subsystem_B.x_tmp = Subsystem_maximum(Subsystem_B.target_y_vertex);
        if ((Subsystem_B.x_tmp >= -10.0) && (Subsystem_B.x_tmp <= 10.0)) {
          guard2 = true;
        }
      }

      if (guard2) {
        Subsystem_B.x_tmp = Subsystem_minimum(Subsystem_B.tmp_target_x_vertex);
        if ((Subsystem_B.x_tmp >= -10.0) && (Subsystem_B.x_tmp <= 30.0)) {
          guard1 = true;
        } else {
          Subsystem_B.x_tmp = Subsystem_maximum(Subsystem_B.tmp_target_x_vertex);
          if ((Subsystem_B.x_tmp >= -10.0) && (Subsystem_B.x_tmp <= 30.0)) {
            guard1 = true;
          }
        }
      }

      if (guard1) {
        for (Subsystem_B.index_pred = 0; Subsystem_B.index_pred < 20;
             Subsystem_B.index_pred++) {
          if (Subsystem_B.index_pred + 1 == 1) {
            Subsystem_B.a[0] = Subsystem_B.ego_shape_flag_out;
            Subsystem_B.a[1] = Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i +
              3];
            Subsystem_B.a[2] = 0.0;
            Subsystem_B.a[3] = Subsystem_B.d;
            Subsystem_B.a[4] = Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i +
              4];
            Subsystem_B.a[5] = Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i +
              5];
            for (Subsystem_B.rtb_X_pred_window_tmp = 0;
                 Subsystem_B.rtb_X_pred_window_tmp < 6;
                 Subsystem_B.rtb_X_pred_window_tmp++) {
              Subsystem_B.x_tmp = 0.0;
              for (Subsystem_B.rtb_X_pred_window_tmp_n = 0;
                   Subsystem_B.rtb_X_pred_window_tmp_n < 6;
                   Subsystem_B.rtb_X_pred_window_tmp_n++) {
                Subsystem_B.x_tmp += a[6 * Subsystem_B.rtb_X_pred_window_tmp_n +
                  Subsystem_B.rtb_X_pred_window_tmp] *
                  Subsystem_B.a[Subsystem_B.rtb_X_pred_window_tmp_n];
              }

              Subsystem_B.X_pred_window[Subsystem_B.rtb_X_pred_window_tmp + 220 *
                Subsystem_B.i] = Subsystem_B.x_tmp;
            }

            Subsystem_B.X_pred_window[220 * Subsystem_B.i + 6] =
              Subsystem_B.Fusion_Track_out_tmp;
            Subsystem_B.X_pred_window[220 * Subsystem_B.i + 7] =
              Subsystem_B.tmp_target_y_vertex_tmp_p;
            Subsystem_B.X_pred_window[220 * Subsystem_B.i + 8] =
              Subsystem_B.ego_shape_flag;
            Subsystem_B.X_pred_window[220 * Subsystem_B.i + 9] =
              Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i + 9];
          } else {
            for (Subsystem_B.rtb_X_pred_window_tmp = 0;
                 Subsystem_B.rtb_X_pred_window_tmp < 6;
                 Subsystem_B.rtb_X_pred_window_tmp++) {
              Subsystem_B.x_tmp = 0.0;
              for (Subsystem_B.rtb_X_pred_window_tmp_n = 0;
                   Subsystem_B.rtb_X_pred_window_tmp_n < 6;
                   Subsystem_B.rtb_X_pred_window_tmp_n++) {
                Subsystem_B.x_tmp += Subsystem_B.X_pred_window
                  [((Subsystem_B.index_pred - 1) * 11 +
                    Subsystem_B.rtb_X_pred_window_tmp_n) + 220 * Subsystem_B.i] *
                  a[6 * Subsystem_B.rtb_X_pred_window_tmp_n +
                  Subsystem_B.rtb_X_pred_window_tmp];
              }

              Subsystem_B.a[Subsystem_B.rtb_X_pred_window_tmp] =
                Subsystem_B.x_tmp;
            }

            for (Subsystem_B.rtb_X_pred_window_tmp = 0;
                 Subsystem_B.rtb_X_pred_window_tmp < 6;
                 Subsystem_B.rtb_X_pred_window_tmp++) {
              Subsystem_B.X_pred_window[(Subsystem_B.rtb_X_pred_window_tmp + 11 *
                Subsystem_B.index_pred) + 220 * Subsystem_B.i] =
                Subsystem_B.a[Subsystem_B.rtb_X_pred_window_tmp];
            }

            Subsystem_B.rtb_X_pred_window_tmp = (Subsystem_B.index_pred - 1) *
              11 + 220 * Subsystem_B.i;
            Subsystem_B.rtb_X_pred_window_tmp_n = 11 * Subsystem_B.index_pred +
              220 * Subsystem_B.i;
            Subsystem_B.X_pred_window[Subsystem_B.rtb_X_pred_window_tmp_n + 6] =
              Subsystem_B.X_pred_window[Subsystem_B.rtb_X_pred_window_tmp + 6];
            Subsystem_B.X_pred_window[Subsystem_B.rtb_X_pred_window_tmp_n + 7] =
              Subsystem_B.X_pred_window[Subsystem_B.rtb_X_pred_window_tmp + 7];
            Subsystem_B.X_pred_window[Subsystem_B.rtb_X_pred_window_tmp_n + 8] =
              Subsystem_B.X_pred_window[Subsystem_B.rtb_X_pred_window_tmp + 8];
            Subsystem_B.X_pred_window[Subsystem_B.rtb_X_pred_window_tmp_n + 9] =
              Subsystem_B.X_pred_window[Subsystem_B.rtb_X_pred_window_tmp + 9];
          }
        }
      }
    }
  }

  // End of MATLAB Function: '<S1>/Prediction'

  // MATLAB Function: '<S1>/DSM'
  std::memset(&Subsystem_B.State_trajectory[0], 0, 576U * sizeof(real_T));

  // Outport: '<Root>/DSM_flag' incorporates:
  //   MATLAB Function: '<S1>/DSM'

  Subsystem_Y.DSM_flag = 0.0;
  for (Subsystem_B.i = 0; Subsystem_B.i < 60903; Subsystem_B.i++) {
    // Outport: '<Root>/DSM_uint8' incorporates:
    //   MATLAB Function: '<S1>/DSM'

    Subsystem_Y.DSM_uint8[Subsystem_B.i] = MAX_uint8_T;

    // MATLAB Function: '<S1>/DSM'
    Subsystem_B.tmp_DSM[Subsystem_B.i] = 255.0;
    Subsystem_B.DSM_out[Subsystem_B.i] = 255.0;
  }

  // MATLAB Function: '<S1>/DSM' incorporates:
  //   Inport: '<Root>/Fusion_Track'

  Subsystem_B.ego_shape_flag = 0.0;
  Subsystem_B.ego_shape_flag_out = 0.0;
  for (Subsystem_B.i = 0; Subsystem_B.i < 64; Subsystem_B.i++) {
    guard1 = false;
    if (Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i] != 0.0) {
      Subsystem_B.Fusion_Track_out_tmp = Subsystem_U.Fusion_Track_out[12 *
        Subsystem_B.i + 2];
      if ((Subsystem_B.Fusion_Track_out_tmp >= -16.0) &&
          (Subsystem_B.Fusion_Track_out_tmp <= 36.0)) {
        Subsystem_B.tmp_target_y_vertex_tmp_p = Subsystem_U.Fusion_Track_out[12 *
          Subsystem_B.i + 1];
        if ((Subsystem_B.tmp_target_y_vertex_tmp_p >= -16.0) &&
            (Subsystem_B.tmp_target_y_vertex_tmp_p <= 16.0) &&
            (Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i + 9] >= 4.0)) {
          Subsystem_B.State_trajectory[9 * Subsystem_B.i] =
            Subsystem_B.tmp_target_y_vertex_tmp_p;
          Subsystem_B.State_trajectory[9 * Subsystem_B.i + 1] =
            Subsystem_B.Fusion_Track_out_tmp;
          Subsystem_B.State_trajectory[9 * Subsystem_B.i + 2] =
            Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i + 3];
          Subsystem_B.State_trajectory[9 * Subsystem_B.i + 3] =
            Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i + 4];
          Subsystem_B.State_trajectory[9 * Subsystem_B.i + 4] =
            Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i + 6];
          Subsystem_B.State_trajectory[9 * Subsystem_B.i + 5] =
            Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i + 7];
          Subsystem_B.State_trajectory[9 * Subsystem_B.i + 6] =
            Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i + 8];
          Subsystem_B.State_trajectory[9 * Subsystem_B.i + 7] =
            Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i + 10];
          Subsystem_B.State_trajectory[9 * Subsystem_B.i + 8] =
            Subsystem_U.Fusion_Track_out[12 * Subsystem_B.i + 11];
          std::memcpy(&Subsystem_B.DSM_out[0], &Subsystem_B.tmp_DSM[0], 60903U *
                      sizeof(real_T));
          DSMMaxCollisionProbabilityCN7_v(Subsystem_B.DSM_out,
            &Subsystem_B.State_trajectory[9 * Subsystem_B.i],
            &Subsystem_B.X_pred_window[220 * Subsystem_B.i],
            Subsystem_B.ego_shape_flag, &Subsystem_B.Fusion_Track_out_tmp,
            &Subsystem_B.ego_shape_flag_out);
          Subsystem_B.ego_shape_flag = Subsystem_B.ego_shape_flag_out;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }
    } else {
      guard1 = true;
    }

    if (guard1) {
      if (Subsystem_B.i + 1 == 1) {
        for (Subsystem_B.rtb_X_pred_window_tmp = 0;
             Subsystem_B.rtb_X_pred_window_tmp < 60903;
             Subsystem_B.rtb_X_pred_window_tmp++) {
          Subsystem_B.DSM_out[Subsystem_B.rtb_X_pred_window_tmp] = 255.0;
        }
      } else {
        c_p = false;
        d_p = true;
        Subsystem_B.index_pred = 0;
        exitg1 = false;
        while ((!exitg1) && (Subsystem_B.index_pred < 60903)) {
          if (!(Subsystem_B.DSM_out[Subsystem_B.index_pred] == 255.0)) {
            d_p = false;
            exitg1 = true;
          } else {
            Subsystem_B.index_pred++;
          }
        }

        if (d_p) {
          c_p = true;
        }

        if (!c_p) {
          std::memcpy(&Subsystem_B.tmp_DSM[0], &Subsystem_B.DSM_out[0], 60903U *
                      sizeof(real_T));
        } else {
          for (Subsystem_B.rtb_X_pred_window_tmp = 0;
               Subsystem_B.rtb_X_pred_window_tmp < 60903;
               Subsystem_B.rtb_X_pred_window_tmp++) {
            Subsystem_B.DSM_out[Subsystem_B.rtb_X_pred_window_tmp] = 255.0;
          }
        }
      }
    }

    if (Subsystem_B.ego_shape_flag_out != 0.0) {
      std::memcpy(&Subsystem_B.tmp_DSM[0], &Subsystem_B.DSM_out[0], 60903U *
                  sizeof(real_T));
    }
  }

  c_p = false;
  d_p = true;
  Subsystem_B.i = 0;
  exitg1 = false;
  while ((!exitg1) && (Subsystem_B.i < 60903)) {
    if (!(Subsystem_B.DSM_out[Subsystem_B.i] == 255.0)) {
      d_p = false;
      exitg1 = true;
    } else {
      Subsystem_B.i++;
    }
  }

  if (d_p) {
    c_p = true;
  }

  if (!c_p) {
    // Outport: '<Root>/DSM_uint8'
    for (Subsystem_B.rtb_X_pred_window_tmp = 0;
         Subsystem_B.rtb_X_pred_window_tmp < 60903;
         Subsystem_B.rtb_X_pred_window_tmp++) {
      Subsystem_B.ego_shape_flag_out = std::round
        (Subsystem_B.DSM_out[Subsystem_B.rtb_X_pred_window_tmp]);
      if (Subsystem_B.ego_shape_flag_out < 256.0) {
        if (Subsystem_B.ego_shape_flag_out >= 0.0) {
          Subsystem_Y.DSM_uint8[Subsystem_B.rtb_X_pred_window_tmp] =
            static_cast<uint8_T>(Subsystem_B.ego_shape_flag_out);
        } else {
          Subsystem_Y.DSM_uint8[Subsystem_B.rtb_X_pred_window_tmp] = 0U;
        }
      } else {
        Subsystem_Y.DSM_uint8[Subsystem_B.rtb_X_pred_window_tmp] = MAX_uint8_T;
      }
    }

    // Outport: '<Root>/DSM_flag'
    Subsystem_Y.DSM_flag = 1.0;
  }

  // End of Outputs for SubSystem: '<Root>/Subsystem'
}

// Model initialize function
void Subsystem::initialize()
{
  // (no initialization code required)
}

// Model terminate function
void Subsystem::terminate()
{
  // (no terminate code required)
}

// Constructor
Subsystem::Subsystem() :
  Subsystem_U(),
  Subsystem_Y(),
  Subsystem_B(),
  Subsystem_M()
{
  // Currently there is no constructor body generated.
}

// Destructor
// Currently there is no destructor body generated.
Subsystem::~Subsystem() = default;

// Real-Time Model get method
Subsystem::RT_MODEL_Subsystem_T * Subsystem::getRTM()
{
  return (&Subsystem_M);
}

//
// File trailer for generated code.
//
// [EOF]
//
