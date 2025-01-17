//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: sqrtm.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

// Include Files
#include "sqrtm.h"
#include "BEV_image_rtwutil.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "xdlanv2.h"
#include "xhseqr.h"
#include "xnrm2.h"
#include "xzlarf.h"
#include <algorithm>
#include <cmath>
#include <cstring>

// Function Definitions
//
// Arguments    : const double A[25]
//                creal_T X[25]
// Return Type  : void
//
namespace coder {
void sqrtm(const double A[25], creal_T X[25])
{
  creal_T Q[25];
  creal_T R[25];
  creal_T T[25];
  double Vr[25];
  double b_A[25];
  double work[5];
  double a;
  double b_d;
  double d;
  double d_tmp;
  double mu1_im;
  double mu1_re;
  double rt1i;
  double rt1r;
  double s;
  double sn;
  double t1_im;
  double xnorm;
  int b_i;
  int exitg1;
  int i;
  int i1;
  int ia;
  int ix0;
  int j;
  int knt;
  int m;
  int rowleft;
  bool exitg2;
  bool p;
  p = true;
  for (m = 0; m < 25; m++) {
    if (p) {
      d = A[m];
      if (std::isinf(d) || std::isnan(d)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    for (i = 0; i < 25; i++) {
      Q[i].re = rtNaN;
      Q[i].im = 0.0;
    }
    rowleft = 3;
    for (j = 0; j < 3; j++) {
      if (rowleft <= 5) {
        std::memset(&Q[(j * 5 + rowleft) + -1], 0,
                    static_cast<unsigned int>(-rowleft + 6) * sizeof(creal_T));
      }
      rowleft++;
    }
    for (i = 0; i < 25; i++) {
      T[i].re = rtNaN;
      T[i].im = 0.0;
    }
  } else {
    double tau[4];
    std::copy(&A[0], &A[25], &b_A[0]);
    for (b_i = 0; b_i < 5; b_i++) {
      work[b_i] = 0.0;
    }
    for (b_i = 0; b_i < 4; b_i++) {
      int alpha1_tmp_tmp;
      int in;
      int iv0_tmp;
      int lastc;
      int lastv;
      rowleft = b_i * 5 + 2;
      in = (b_i + 1) * 5;
      alpha1_tmp_tmp = (b_i + 5 * b_i) + 1;
      t1_im = b_A[alpha1_tmp_tmp];
      if (b_i + 3 <= 5) {
        i = b_i + 1;
      } else {
        i = 3;
      }
      ix0 = i + rowleft;
      tau[b_i] = 0.0;
      xnorm = internal::blas::xnrm2(3 - b_i, b_A, ix0);
      if (xnorm != 0.0) {
        xnorm = rt_hypotd_snf(t1_im, xnorm);
        if (t1_im >= 0.0) {
          xnorm = -xnorm;
        }
        if (std::abs(xnorm) < 1.0020841800044864E-292) {
          knt = 0;
          i = (ix0 - b_i) + 2;
          do {
            knt++;
            for (m = ix0; m <= i; m++) {
              b_A[m - 1] *= 9.9792015476736E+291;
            }
            xnorm *= 9.9792015476736E+291;
            t1_im *= 9.9792015476736E+291;
          } while ((std::abs(xnorm) < 1.0020841800044864E-292) && (knt < 20));
          xnorm =
              rt_hypotd_snf(t1_im, internal::blas::xnrm2(3 - b_i, b_A, ix0));
          if (t1_im >= 0.0) {
            xnorm = -xnorm;
          }
          tau[b_i] = (xnorm - t1_im) / xnorm;
          a = 1.0 / (t1_im - xnorm);
          for (m = ix0; m <= i; m++) {
            b_A[m - 1] *= a;
          }
          for (m = 0; m < knt; m++) {
            xnorm *= 1.0020841800044864E-292;
          }
          t1_im = xnorm;
        } else {
          tau[b_i] = (xnorm - t1_im) / xnorm;
          a = 1.0 / (t1_im - xnorm);
          i = (ix0 - b_i) + 2;
          for (m = ix0; m <= i; m++) {
            b_A[m - 1] *= a;
          }
          t1_im = xnorm;
        }
      }
      b_A[alpha1_tmp_tmp] = 1.0;
      iv0_tmp = b_i + rowleft;
      m = in + 1;
      if (tau[b_i] != 0.0) {
        lastv = 3 - b_i;
        knt = (iv0_tmp - b_i) + 2;
        while ((lastv + 1 > 0) && (b_A[knt] == 0.0)) {
          lastv--;
          knt--;
        }
        lastc = 5;
        exitg2 = false;
        while ((!exitg2) && (lastc > 0)) {
          rowleft = in + lastc;
          ia = rowleft;
          do {
            exitg1 = 0;
            if (ia <= rowleft + lastv * 5) {
              if (b_A[ia - 1] != 0.0) {
                exitg1 = 1;
              } else {
                ia += 5;
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
        lastv = -1;
        lastc = 0;
      }
      if (lastv + 1 > 0) {
        if (lastc != 0) {
          std::memset(&work[0], 0,
                      static_cast<unsigned int>(lastc) * sizeof(double));
          knt = iv0_tmp - 1;
          i = (in + 5 * lastv) + 1;
          for (ix0 = m; ix0 <= i; ix0 += 5) {
            i1 = (ix0 + lastc) - 1;
            for (ia = ix0; ia <= i1; ia++) {
              rowleft = ia - ix0;
              work[rowleft] += b_A[ia - 1] * b_A[knt];
            }
            knt++;
          }
        }
        if (!(-tau[b_i] == 0.0)) {
          knt = in;
          for (j = 0; j <= lastv; j++) {
            d = b_A[(iv0_tmp + j) - 1];
            if (d != 0.0) {
              xnorm = d * -tau[b_i];
              i = knt + 1;
              i1 = lastc + knt;
              for (ia = i; ia <= i1; ia++) {
                b_A[ia - 1] += work[(ia - knt) - 1] * xnorm;
              }
            }
            knt += 5;
          }
        }
      }
      internal::reflapack::xzlarf(4 - b_i, 4 - b_i, iv0_tmp, tau[b_i], b_A,
                                  (b_i + in) + 2, work);
      b_A[alpha1_tmp_tmp] = t1_im;
    }
    std::copy(&b_A[0], &b_A[25], &Vr[0]);
    for (j = 3; j >= 0; j--) {
      ia = (j + 1) * 5;
      for (b_i = 0; b_i <= j; b_i++) {
        Vr[ia + b_i] = 0.0;
      }
      i = j + 3;
      for (b_i = i; b_i < 6; b_i++) {
        rowleft = ia + b_i;
        Vr[rowleft - 1] = Vr[rowleft - 6];
      }
    }
    for (b_i = 0; b_i < 5; b_i++) {
      Vr[b_i] = 0.0;
    }
    Vr[0] = 1.0;
    for (b_i = 0; b_i < 5; b_i++) {
      work[b_i] = 0.0;
    }
    for (b_i = 3; b_i >= 0; b_i--) {
      rowleft = (b_i + b_i * 5) + 6;
      if (b_i + 1 < 4) {
        Vr[rowleft] = 1.0;
        internal::reflapack::xzlarf(4 - b_i, 3 - b_i, rowleft + 1, tau[b_i], Vr,
                                    rowleft + 6, work);
        ix0 = rowleft + 2;
        i = (rowleft - b_i) + 4;
        for (m = ix0; m <= i; m++) {
          Vr[m - 1] *= -tau[b_i];
        }
      }
      Vr[rowleft] = 1.0 - tau[b_i];
      for (j = 0; j < b_i; j++) {
        Vr[(rowleft - j) - 1] = 0.0;
      }
    }
    internal::lapack::xhseqr(b_A, Vr);
    for (i = 0; i < 25; i++) {
      T[i].re = b_A[i];
      T[i].im = 0.0;
      Q[i].re = Vr[i];
      Q[i].im = 0.0;
    }
    for (m = 3; m >= 0; m--) {
      knt = m + 1;
      i = m + 5 * m;
      d = b_A[i + 1];
      if (d != 0.0) {
        a = b_A[i];
        ia = 5 * (m + 1);
        rowleft = m + ia;
        xnorm = b_A[rowleft];
        t1_im = d;
        d_tmp = b_A[rowleft + 1];
        b_d = d_tmp;
        rt1r = internal::reflapack::xdlanv2(a, xnorm, t1_im, b_d, rt1i, mu1_im,
                                            mu1_re, s, sn);
        mu1_re = rt1r - d_tmp;
        xnorm = rt_hypotd_snf(rt_hypotd_snf(mu1_re, rt1i), d);
        if (rt1i == 0.0) {
          a = mu1_re / xnorm;
          sn = 0.0;
        } else if (mu1_re == 0.0) {
          a = 0.0;
          sn = rt1i / xnorm;
        } else {
          a = mu1_re / xnorm;
          sn = rt1i / xnorm;
        }
        s = d / xnorm;
        for (j = knt; j < 6; j++) {
          ix0 = m + 5 * (j - 1);
          xnorm = T[ix0].re;
          t1_im = T[ix0].im;
          d_tmp = T[ix0 + 1].re;
          rt1r = T[ix0 + 1].im;
          T[ix0].re = (a * xnorm + sn * t1_im) + s * d_tmp;
          T[ix0].im = (a * t1_im - sn * xnorm) + s * rt1r;
          mu1_re = a * d_tmp - sn * rt1r;
          mu1_im = a * rt1r + sn * d_tmp;
          T[ix0 + 1].re = mu1_re - s * xnorm;
          T[ix0 + 1].im = mu1_im - s * t1_im;
        }
        for (b_i = 0; b_i <= m + 1; b_i++) {
          ix0 = b_i + 5 * m;
          xnorm = T[ix0].re;
          t1_im = T[ix0].im;
          rowleft = b_i + ia;
          d_tmp = T[rowleft].re;
          rt1r = T[rowleft].im;
          mu1_re = a * xnorm - sn * t1_im;
          mu1_im = a * t1_im + sn * xnorm;
          T[ix0].re = mu1_re + s * d_tmp;
          T[ix0].im = mu1_im + s * rt1r;
          T[rowleft].re = (a * d_tmp + sn * rt1r) - s * xnorm;
          T[rowleft].im = (a * rt1r - sn * d_tmp) - s * t1_im;
        }
        for (b_i = 0; b_i < 5; b_i++) {
          ix0 = b_i + 5 * m;
          xnorm = Q[ix0].re;
          t1_im = Q[ix0].im;
          rowleft = b_i + ia;
          d_tmp = Q[rowleft].re;
          rt1r = Q[rowleft].im;
          mu1_re = a * xnorm - sn * t1_im;
          mu1_im = a * t1_im + sn * xnorm;
          Q[ix0].re = mu1_re + s * d_tmp;
          Q[ix0].im = mu1_im + s * rt1r;
          Q[rowleft].re = (a * d_tmp + sn * rt1r) - s * xnorm;
          Q[rowleft].im = (a * rt1r - sn * d_tmp) - s * t1_im;
        }
        T[(m + 5 * m) + 1].re = 0.0;
        T[(m + 5 * m) + 1].im = 0.0;
      }
    }
  }
  j = -1;
  int exitg3;
  do {
    exitg3 = 0;
    if (j + 1 < 5) {
      b_i = 0;
      do {
        exitg1 = 0;
        if (b_i <= j) {
          rowleft = b_i + 5 * (j + 1);
          if ((T[rowleft].re != 0.0) || (T[rowleft].im != 0.0)) {
            std::memset(&R[0], 0, 25U * sizeof(creal_T));
            for (j = 0; j < 5; j++) {
              ia = j + 5 * j;
              R[ia] = T[ia];
              b_sqrt(R[ia]);
              for (b_i = j; b_i >= 1; b_i--) {
                mu1_re = 0.0;
                mu1_im = 0.0;
                i = b_i + 1;
                for (m = i; m <= j; m++) {
                  rowleft = (b_i + 5 * (m - 1)) - 1;
                  xnorm = R[rowleft].re;
                  knt = (m + 5 * j) - 1;
                  t1_im = R[knt].im;
                  d_tmp = R[rowleft].im;
                  rt1r = R[knt].re;
                  mu1_re += xnorm * rt1r - d_tmp * t1_im;
                  mu1_im += xnorm * t1_im + d_tmp * rt1r;
                }
                rowleft = (b_i + 5 * j) - 1;
                mu1_re = T[rowleft].re - mu1_re;
                mu1_im = T[rowleft].im - mu1_im;
                knt = (b_i + 5 * (b_i - 1)) - 1;
                t1_im = R[knt].re + R[ia].re;
                d_tmp = R[knt].im + R[ia].im;
                if (d_tmp == 0.0) {
                  if (mu1_im == 0.0) {
                    a = mu1_re / t1_im;
                    sn = 0.0;
                  } else if (mu1_re == 0.0) {
                    a = 0.0;
                    sn = mu1_im / t1_im;
                  } else {
                    a = mu1_re / t1_im;
                    sn = mu1_im / t1_im;
                  }
                } else if (t1_im == 0.0) {
                  if (mu1_re == 0.0) {
                    a = mu1_im / d_tmp;
                    sn = 0.0;
                  } else if (mu1_im == 0.0) {
                    a = 0.0;
                    sn = -(mu1_re / d_tmp);
                  } else {
                    a = mu1_im / d_tmp;
                    sn = -(mu1_re / d_tmp);
                  }
                } else {
                  rt1r = std::abs(t1_im);
                  xnorm = std::abs(d_tmp);
                  if (rt1r > xnorm) {
                    s = d_tmp / t1_im;
                    b_d = t1_im + s * d_tmp;
                    a = (mu1_re + s * mu1_im) / b_d;
                    sn = (mu1_im - s * mu1_re) / b_d;
                  } else if (xnorm == rt1r) {
                    if (t1_im > 0.0) {
                      t1_im = 0.5;
                    } else {
                      t1_im = -0.5;
                    }
                    if (d_tmp > 0.0) {
                      xnorm = 0.5;
                    } else {
                      xnorm = -0.5;
                    }
                    a = (mu1_re * t1_im + mu1_im * xnorm) / rt1r;
                    sn = (mu1_im * t1_im - mu1_re * xnorm) / rt1r;
                  } else {
                    s = t1_im / d_tmp;
                    b_d = d_tmp + s * t1_im;
                    a = (s * mu1_re + mu1_im) / b_d;
                    sn = (s * mu1_im - mu1_re) / b_d;
                  }
                }
                R[rowleft].re = a;
                R[rowleft].im = sn;
              }
            }
            exitg1 = 1;
          } else {
            b_i++;
          }
        } else {
          j++;
          exitg1 = 2;
        }
      } while (exitg1 == 0);
      if (exitg1 == 1) {
        exitg3 = 1;
      }
    } else {
      std::memset(&R[0], 0, 25U * sizeof(creal_T));
      for (j = 0; j < 5; j++) {
        rowleft = j + 5 * j;
        R[rowleft] = T[rowleft];
        b_sqrt(R[rowleft]);
      }
      exitg3 = 1;
    }
  } while (exitg3 == 0);
  for (i = 0; i < 5; i++) {
    for (i1 = 0; i1 < 5; i1++) {
      a = 0.0;
      sn = 0.0;
      for (ix0 = 0; ix0 < 5; ix0++) {
        rowleft = i + 5 * ix0;
        xnorm = Q[rowleft].re;
        knt = ix0 + 5 * i1;
        t1_im = R[knt].im;
        d_tmp = Q[rowleft].im;
        rt1r = R[knt].re;
        a += xnorm * rt1r - d_tmp * t1_im;
        sn += xnorm * t1_im + d_tmp * rt1r;
      }
      ix0 = i + 5 * i1;
      T[ix0].re = a;
      T[ix0].im = sn;
    }
    for (i1 = 0; i1 < 5; i1++) {
      a = 0.0;
      sn = 0.0;
      for (ix0 = 0; ix0 < 5; ix0++) {
        rowleft = i1 + 5 * ix0;
        xnorm = Q[rowleft].re;
        t1_im = -Q[rowleft].im;
        rowleft = i + 5 * ix0;
        d_tmp = T[rowleft].re;
        rt1r = T[rowleft].im;
        a += d_tmp * xnorm - rt1r * t1_im;
        sn += d_tmp * t1_im + rt1r * xnorm;
      }
      ix0 = i + 5 * i1;
      X[ix0].re = a;
      X[ix0].im = sn;
    }
  }
  for (i = 0; i < 25; i++) {
    b_A[i] = X[i].im;
  }
  xnorm = 0.0;
  j = 0;
  exitg2 = false;
  while ((!exitg2) && (j < 5)) {
    s = 0.0;
    for (b_i = 0; b_i < 5; b_i++) {
      s += std::abs(b_A[b_i + 5 * j]);
    }
    if (std::isnan(s)) {
      xnorm = rtNaN;
      exitg2 = true;
    } else {
      if (s > xnorm) {
        xnorm = s;
      }
      j++;
    }
  }
  t1_im = 0.0;
  j = 0;
  exitg2 = false;
  while ((!exitg2) && (j < 5)) {
    s = 0.0;
    for (b_i = 0; b_i < 5; b_i++) {
      rowleft = b_i + 5 * j;
      s += rt_hypotd_snf(X[rowleft].re, X[rowleft].im);
    }
    if (std::isnan(s)) {
      t1_im = rtNaN;
      exitg2 = true;
    } else {
      if (s > t1_im) {
        t1_im = s;
      }
      j++;
    }
  }
  if (xnorm <= 1.1102230246251565E-14 * t1_im) {
    for (i = 0; i < 25; i++) {
      X[i].im = 0.0;
    }
  }
}

} // namespace coder

//
// File trailer for sqrtm.cpp
//
// [EOF]
//
