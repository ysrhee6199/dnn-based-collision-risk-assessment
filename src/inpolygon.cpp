//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: inpolygon.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

// Include Files
#include "inpolygon.h"
#include "rt_nonfinite.h"
#include "omp.h"
#include <cmath>
#include <cstring>

// Function Declarations
namespace coder {
static signed char contrib(double x1, double b_y1, double x2, double y2,
                           signed char quad1, signed char quad2, double scale,
                           bool &onj);

}

// Function Definitions
//
// Arguments    : double x1
//                double b_y1
//                double x2
//                double y2
//                signed char quad1
//                signed char quad2
//                double scale
//                bool &onj
// Return Type  : signed char
//
namespace coder {
static signed char contrib(double x1, double b_y1, double x2, double y2,
                           signed char quad1, signed char quad2, double scale,
                           bool &onj)
{
  double cp;
  signed char diffQuad;
  onj = false;
  diffQuad = static_cast<signed char>(quad2 - quad1);
  cp = x1 * y2 - x2 * b_y1;
  if (std::abs(cp) < scale) {
    onj = (x1 * x2 + b_y1 * y2 <= 0.0);
    if ((diffQuad == 2) || (diffQuad == -2)) {
      diffQuad = 0;
    } else if (diffQuad == -3) {
      diffQuad = 1;
    } else if (diffQuad == 3) {
      diffQuad = -1;
    }
  } else if (cp < 0.0) {
    if (diffQuad == 2) {
      diffQuad = -2;
    } else if (diffQuad == -3) {
      diffQuad = 1;
    } else if (diffQuad == 3) {
      diffQuad = -1;
    }
  } else if (diffQuad == -2) {
    diffQuad = 2;
  } else if (diffQuad == -3) {
    diffQuad = 1;
  } else if (diffQuad == 3) {
    diffQuad = -1;
  }
  return diffQuad;
}

//
// Arguments    : const double x[15311]
//                const double y[15311]
//                const double xv[5]
//                const double yv[5]
//                bool in[15311]
//                bool on[15311]
// Return Type  : void
//
void inpolygon(const double x[15311], const double y[15311], const double xv[5],
               const double yv[5], bool in[15311], bool on[15311])
{
  double xj;
  double xv1;
  double xv2;
  double xvFirst;
  double yj;
  double yv1;
  double yv2;
  double yvFirst;
  int last[5];
  int b_k;
  int exitg2;
  int exitg3;
  int k;
  int kfirst;
  int nloops;
  int xvFirst_tmp;
  signed char first[5];
  signed char quad1;
  signed char quad2;
  signed char quadFirst;
  signed char sdq;
  bool b;
  bool onj;
  std::memset(&in[0], 0, 15311U * sizeof(bool));
  std::memset(&on[0], 0, 15311U * sizeof(bool));
  nloops = 0;
  for (int i{0}; i < 5; i++) {
    first[i] = 0;
    last[i] = 0;
  }
  k = 0;
  while ((k + 1 <= 5) && std::isnan(xv[k])) {
    k++;
  }
  while (k + 1 <= 5) {
    bool exitg1;
    nloops++;
    kfirst = k;
    first[nloops - 1] = static_cast<signed char>(k + 1);
    exitg1 = false;
    while ((!exitg1) && (k + 1 < 5)) {
      k++;
      if (std::isnan(xv[k]) || std::isnan(yv[k])) {
        k--;
        exitg1 = true;
      }
    }
    if ((xv[k] == xv[kfirst]) && (yv[k] == yv[kfirst]) &&
        (kfirst + 1 != k + 1)) {
      last[nloops - 1] = k;
    } else {
      last[nloops - 1] = k + 1;
    }
    k += 2;
    while ((k + 1 <= 5) && std::isnan(xv[k])) {
      k++;
    }
  }
  if (nloops != 0) {
    double scale[5];
    double lmaxxv;
    double lminxv_tmp;
    double maxxv;
    double maxyv;
    double minxv;
    double minyv;
    int b_i;
    int endIdx;
    minxv = xv[first[0] - 1];
    maxxv = minxv;
    minyv = yv[first[0] - 1];
    maxyv = minyv;
    b_i = static_cast<unsigned char>(nloops);
    for (k = 0; k < b_i; k++) {
      double d;
      double lmaxyv;
      double lminyv_tmp;
      signed char i1;
      i1 = first[k];
      kfirst = i1;
      endIdx = last[k];
      lminxv_tmp = xv[i1 - 1];
      lmaxxv = lminxv_tmp;
      for (int i{kfirst}; i <= endIdx; i++) {
        d = xv[i - 1];
        if (lminxv_tmp > d) {
          lminxv_tmp = d;
        }
        if (lmaxxv < d) {
          lmaxxv = d;
        }
      }
      endIdx = last[k];
      lminyv_tmp = yv[i1 - 1];
      lmaxyv = lminyv_tmp;
      for (int i{kfirst}; i <= endIdx; i++) {
        d = yv[i - 1];
        if (lminyv_tmp > d) {
          lminyv_tmp = d;
        }
        if (lmaxyv < d) {
          lmaxyv = d;
        }
      }
      if (minxv > lminxv_tmp) {
        minxv = lminxv_tmp;
      }
      if (maxxv < lmaxxv) {
        maxxv = lmaxxv;
      }
      if (minyv > lminyv_tmp) {
        minyv = lminyv_tmp;
      }
      if (maxyv < lmaxyv) {
        maxyv = lmaxyv;
      }
    }
    for (int i{0}; i < 5; i++) {
      scale[i] = 0.0;
    }
    for (endIdx = 0; endIdx < b_i; endIdx++) {
      k = first[endIdx];
      kfirst = last[endIdx] - 1;
      for (int i{k}; i <= kfirst; i++) {
        lminxv_tmp = std::abs(0.5 * (xv[i - 1] + xv[i]));
        lmaxxv = std::abs(0.5 * (yv[i - 1] + yv[i]));
        if ((lminxv_tmp > 1.0) && (lmaxxv > 1.0)) {
          lminxv_tmp *= lmaxxv;
        } else if ((lmaxxv > lminxv_tmp) || std::isnan(lminxv_tmp)) {
          lminxv_tmp = lmaxxv;
        }
        scale[i - 1] = lminxv_tmp * 6.6613381477509392E-16;
      }
      kfirst = first[endIdx] - 1;
      k = last[endIdx];
      lminxv_tmp = std::abs(0.5 * (xv[k - 1] + xv[kfirst]));
      lmaxxv = std::abs(0.5 * (yv[k - 1] + yv[kfirst]));
      if ((lminxv_tmp > 1.0) && (lmaxxv > 1.0)) {
        lminxv_tmp *= lmaxxv;
      } else if ((lmaxxv > lminxv_tmp) || std::isnan(lminxv_tmp)) {
        lminxv_tmp = lmaxxv;
      }
      scale[k - 1] = lminxv_tmp * 6.6613381477509392E-16;
    }
#pragma omp parallel for num_threads(omp_get_max_threads()) private(           \
    onj, b, xj, yj, sdq, b_k, exitg3, xvFirst_tmp, xvFirst, yvFirst,           \
    quadFirst, xv2, yv2, quad2, exitg2, quad1, xv1, yv1)

    for (int j = 0; j < 15311; j++) {
      xj = x[j];
      yj = y[j];
      b = false;
      onj = false;
      if ((xj >= minxv) && (xj <= maxxv) && (yj >= minyv) && (yj <= maxyv)) {
        sdq = 0;
        b_k = 0;
        do {
          exitg3 = 0;
          if (b_k <= static_cast<unsigned char>(nloops) - 1) {
            xvFirst_tmp = first[b_k] - 1;
            xvFirst = xv[xvFirst_tmp] - xj;
            yvFirst = yv[xvFirst_tmp] - yj;
            if (xvFirst > 0.0) {
              if (yvFirst > 0.0) {
                quadFirst = 0;
              } else {
                quadFirst = 3;
              }
            } else if (yvFirst > 0.0) {
              quadFirst = 1;
            } else {
              quadFirst = 2;
            }
            xv2 = xvFirst;
            yv2 = yvFirst;
            quad2 = quadFirst;
            xvFirst_tmp = first[b_k];
            do {
              exitg2 = 0;
              if (xvFirst_tmp <= last[b_k] - 1) {
                xv1 = xv2;
                yv1 = yv2;
                xv2 = xv[xvFirst_tmp] - xj;
                yv2 = yv[xvFirst_tmp] - yj;
                quad1 = quad2;
                if (xv2 > 0.0) {
                  if (yv2 > 0.0) {
                    quad2 = 0;
                  } else {
                    quad2 = 3;
                  }
                } else if (yv2 > 0.0) {
                  quad2 = 1;
                } else {
                  quad2 = 2;
                }
                quad1 = contrib(xv1, yv1, xv2, yv2, quad1, quad2,
                                scale[xvFirst_tmp - 1], onj);
                if (onj) {
                  b = true;
                  exitg2 = 1;
                } else {
                  sdq = static_cast<signed char>(sdq + quad1);
                  xvFirst_tmp++;
                }
              } else {
                quad1 = contrib(xv2, yv2, xvFirst, yvFirst, quad2, quadFirst,
                                scale[last[b_k] - 1], onj);
                exitg2 = 2;
              }
            } while (exitg2 == 0);
            if (exitg2 == 1) {
              exitg3 = 1;
            } else if (onj) {
              b = true;
              exitg3 = 1;
            } else {
              sdq = static_cast<signed char>(sdq + quad1);
              b_k++;
            }
          } else {
            b = (sdq != 0);
            exitg3 = 1;
          }
        } while (exitg3 == 0);
      }
      in[j] = b;
      on[j] = onj;
    }
  }
}

} // namespace coder

//
// File trailer for inpolygon.cpp
//
// [EOF]
//
