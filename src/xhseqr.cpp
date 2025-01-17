//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: xhseqr.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

// Include Files
#include "xhseqr.h"
#include "BEV_image_rtwutil.h"
#include "rt_nonfinite.h"
#include "xdlanv2.h"
#include "xnrm2.h"
#include "xrot.h"
#include <cmath>

// Function Definitions
//
// Arguments    : double h[25]
//                double z[25]
// Return Type  : int
//
namespace coder {
namespace internal {
namespace lapack {
int xhseqr(double h[25], double z[25])
{
  double bb;
  double d;
  double h22;
  double rt2r;
  double s;
  double s_tmp_tmp;
  double tr;
  double tst;
  int i;
  int info;
  int kdefl;
  bool exitg1;
  info = 0;
  h[2] = 0.0;
  h[3] = 0.0;
  h[8] = 0.0;
  h[9] = 0.0;
  h[14] = 0.0;
  kdefl = 0;
  i = 4;
  exitg1 = false;
  while ((!exitg1) && (i + 1 >= 1)) {
    double h12;
    int b_i;
    int b_k;
    int i1;
    int its;
    int knt;
    int l;
    int nr;
    bool converged;
    bool exitg2;
    l = 1;
    converged = false;
    its = 0;
    exitg2 = false;
    while ((!exitg2) && (its < 301)) {
      bool exitg3;
      b_k = i;
      exitg3 = false;
      while ((!exitg3) && (b_k + 1 > l)) {
        b_i = b_k + 5 * (b_k - 1);
        d = std::abs(h[b_i]);
        if (d <= 5.0104209000224319E-292) {
          exitg3 = true;
        } else {
          knt = b_k + 5 * b_k;
          h12 = h[knt];
          tr = std::abs(h12);
          bb = h[b_i - 1];
          tst = std::abs(bb) + tr;
          if (tst == 0.0) {
            if (b_k - 1 >= 1) {
              tst = std::abs(h[(b_k + 5 * (b_k - 2)) - 1]);
            }
            if (b_k + 2 <= 5) {
              tst += std::abs(h[knt + 1]);
            }
          }
          if (d <= 2.2204460492503131E-16 * tst) {
            h22 = std::abs(h[knt - 1]);
            h12 = std::abs(bb - h12);
            tst = std::fmax(tr, h12);
            bb = std::fmin(tr, h12);
            s = tst + bb;
            if (std::fmin(d, h22) * (std::fmax(d, h22) / s) <=
                std::fmax(5.0104209000224319E-292,
                          2.2204460492503131E-16 * (bb * (tst / s)))) {
              exitg3 = true;
            } else {
              b_k--;
            }
          } else {
            b_k--;
          }
        }
      }
      l = b_k + 1;
      if (b_k + 1 > 1) {
        h[b_k + 5 * (b_k - 1)] = 0.0;
      }
      if (b_k + 1 >= i) {
        converged = true;
        exitg2 = true;
      } else {
        double v[3];
        double rt1r;
        int m;
        kdefl++;
        if (kdefl - kdefl / 20 * 20 == 0) {
          s = std::abs(h[i + 5 * (i - 1)]) + std::abs(h[(i + 5 * (i - 2)) - 1]);
          tst = 0.75 * s + h[i + 5 * i];
          h12 = -0.4375 * s;
          bb = s;
          h22 = tst;
        } else if (kdefl - kdefl / 10 * 10 == 0) {
          knt = b_k + 5 * b_k;
          s = std::abs(h[knt + 1]) + std::abs(h[(b_k + 5 * (b_k + 1)) + 2]);
          tst = 0.75 * s + h[knt];
          h12 = -0.4375 * s;
          bb = s;
          h22 = tst;
        } else {
          knt = i + 5 * (i - 1);
          tst = h[knt - 1];
          bb = h[knt];
          knt = i + 5 * i;
          h12 = h[knt - 1];
          h22 = h[knt];
        }
        s = ((std::abs(tst) + std::abs(h12)) + std::abs(bb)) + std::abs(h22);
        if (s == 0.0) {
          rt1r = 0.0;
          tr = 0.0;
          rt2r = 0.0;
          h22 = 0.0;
        } else {
          tst /= s;
          bb /= s;
          h12 /= s;
          h22 /= s;
          tr = (tst + h22) / 2.0;
          tst = (tst - tr) * (h22 - tr) - h12 * bb;
          bb = std::sqrt(std::abs(tst));
          if (tst >= 0.0) {
            rt1r = tr * s;
            rt2r = rt1r;
            tr = bb * s;
            h22 = -tr;
          } else {
            rt1r = tr + bb;
            rt2r = tr - bb;
            if (std::abs(rt1r - h22) <= std::abs(rt2r - h22)) {
              rt1r *= s;
              rt2r = rt1r;
            } else {
              rt2r *= s;
              rt1r = rt2r;
            }
            tr = 0.0;
            h22 = 0.0;
          }
        }
        m = i - 1;
        exitg3 = false;
        while ((!exitg3) && (m >= b_k + 1)) {
          knt = m + 5 * (m - 1);
          tst = h[knt];
          s_tmp_tmp = h[knt - 1];
          bb = s_tmp_tmp - rt2r;
          s = (std::abs(bb) + std::abs(h22)) + std::abs(tst);
          h12 = tst / s;
          knt = m + 5 * m;
          v[0] = (h12 * h[knt - 1] + bb * (bb / s)) - tr * (h22 / s);
          tst = h[knt];
          v[1] = h12 * (((s_tmp_tmp + tst) - rt1r) - rt2r);
          v[2] = h12 * h[knt + 1];
          s = (std::abs(v[0]) + std::abs(v[1])) + std::abs(v[2]);
          v[0] /= s;
          v[1] /= s;
          v[2] /= s;
          if (m == b_k + 1) {
            exitg3 = true;
          } else {
            b_i = m + 5 * (m - 2);
            if (std::abs(h[b_i - 1]) * (std::abs(v[1]) + std::abs(v[2])) <=
                2.2204460492503131E-16 * std::abs(v[0]) *
                    ((std::abs(h[b_i - 2]) + std::abs(s_tmp_tmp)) +
                     std::abs(tst))) {
              exitg3 = true;
            } else {
              m--;
            }
          }
        }
        for (int c_k{m}; c_k <= i; c_k++) {
          knt = (i - c_k) + 2;
          if (knt >= 3) {
            nr = 3;
          } else {
            nr = knt;
          }
          if (c_k > m) {
            knt = ((c_k - 2) * 5 + c_k) - 1;
            for (int k{0}; k < nr; k++) {
              v[k] = h[knt + k];
            }
          }
          h12 = v[0];
          tr = 0.0;
          if (nr > 0) {
            tst = blas::xnrm2(nr - 1, v);
            if (tst != 0.0) {
              bb = rt_hypotd_snf(v[0], tst);
              if (v[0] >= 0.0) {
                bb = -bb;
              }
              if (std::abs(bb) < 1.0020841800044864E-292) {
                knt = 0;
                do {
                  knt++;
                  for (int k{2}; k <= nr; k++) {
                    v[k - 1] *= 9.9792015476736E+291;
                  }
                  bb *= 9.9792015476736E+291;
                  h12 *= 9.9792015476736E+291;
                } while ((std::abs(bb) < 1.0020841800044864E-292) &&
                         (knt < 20));
                bb = rt_hypotd_snf(h12, blas::xnrm2(nr - 1, v));
                if (h12 >= 0.0) {
                  bb = -bb;
                }
                tr = (bb - h12) / bb;
                tst = 1.0 / (h12 - bb);
                for (int k{2}; k <= nr; k++) {
                  v[k - 1] *= tst;
                }
                for (int k{0}; k < knt; k++) {
                  bb *= 1.0020841800044864E-292;
                }
                h12 = bb;
              } else {
                tr = (bb - v[0]) / bb;
                tst = 1.0 / (v[0] - bb);
                for (int k{2}; k <= nr; k++) {
                  v[k - 1] *= tst;
                }
                h12 = bb;
              }
            }
          }
          if (c_k > m) {
            b_i = c_k + 5 * (c_k - 2);
            h[b_i - 1] = h12;
            h[b_i] = 0.0;
            if (c_k < i) {
              h[b_i + 1] = 0.0;
            }
          } else if (m > b_k + 1) {
            b_i = (c_k + 5 * (c_k - 2)) - 1;
            h[b_i] *= 1.0 - tr;
          }
          d = v[1];
          tst = tr * v[1];
          if (nr == 3) {
            s_tmp_tmp = v[2];
            h12 = tr * v[2];
            for (int k{c_k}; k < 6; k++) {
              b_i = c_k + 5 * (k - 1);
              rt2r = h[b_i - 1];
              rt1r = h[b_i];
              s = h[b_i + 1];
              bb = (rt2r + d * rt1r) + s_tmp_tmp * s;
              rt2r -= bb * tr;
              h[b_i - 1] = rt2r;
              rt1r -= bb * tst;
              h[b_i] = rt1r;
              s -= bb * h12;
              h[b_i + 1] = s;
            }
            if (c_k + 3 <= i + 1) {
              b_i = c_k + 2;
            } else {
              b_i = i;
            }
            for (int k{0}; k <= b_i; k++) {
              i1 = k + 5 * (c_k - 1);
              rt2r = h[i1];
              knt = k + 5 * c_k;
              rt1r = h[knt];
              nr = k + 5 * (c_k + 1);
              s = h[nr];
              bb = (rt2r + d * rt1r) + s_tmp_tmp * s;
              rt2r -= bb * tr;
              h[i1] = rt2r;
              rt1r -= bb * tst;
              h[knt] = rt1r;
              s -= bb * h12;
              h[nr] = s;
            }
            for (int k{0}; k < 5; k++) {
              b_i = k + 5 * (c_k - 1);
              rt2r = z[b_i];
              i1 = k + 5 * c_k;
              rt1r = z[i1];
              knt = k + 5 * (c_k + 1);
              s = z[knt];
              bb = (rt2r + d * rt1r) + s_tmp_tmp * s;
              rt2r -= bb * tr;
              z[b_i] = rt2r;
              rt1r -= bb * tst;
              z[i1] = rt1r;
              s -= bb * h12;
              z[knt] = s;
            }
          } else if (nr == 2) {
            for (int k{c_k}; k < 6; k++) {
              b_i = c_k + 5 * (k - 1);
              s_tmp_tmp = h[b_i - 1];
              rt2r = h[b_i];
              bb = s_tmp_tmp + d * rt2r;
              s_tmp_tmp -= bb * tr;
              h[b_i - 1] = s_tmp_tmp;
              rt2r -= bb * tst;
              h[b_i] = rt2r;
            }
            for (int k{0}; k <= i; k++) {
              b_i = k + 5 * (c_k - 1);
              s_tmp_tmp = h[b_i];
              i1 = k + 5 * c_k;
              rt2r = h[i1];
              bb = s_tmp_tmp + d * rt2r;
              s_tmp_tmp -= bb * tr;
              h[b_i] = s_tmp_tmp;
              rt2r -= bb * tst;
              h[i1] = rt2r;
            }
            for (int k{0}; k < 5; k++) {
              b_i = k + 5 * (c_k - 1);
              s_tmp_tmp = z[b_i];
              i1 = k + 5 * c_k;
              rt2r = z[i1];
              bb = s_tmp_tmp + d * rt2r;
              s_tmp_tmp -= bb * tr;
              z[b_i] = s_tmp_tmp;
              rt2r -= bb * tst;
              z[i1] = rt2r;
            }
          }
        }
        its++;
      }
    }
    if (!converged) {
      info = i + 1;
      exitg1 = true;
    } else {
      if ((l != i + 1) && (l == i)) {
        b_i = i + 5 * i;
        d = h[b_i - 1];
        i1 = 5 * (i - 1);
        knt = i + i1;
        s_tmp_tmp = h[knt];
        rt2r = h[b_i];
        reflapack::xdlanv2(h[knt - 1], d, s_tmp_tmp, rt2r, s, tst, bb, tr, h22);
        h[b_i - 1] = d;
        h[knt] = s_tmp_tmp;
        h[b_i] = rt2r;
        if (i + 1 < 5) {
          knt = (i + 1) * 5 + i;
          b_i = 3 - i;
          for (b_k = 0; b_k <= b_i; b_k++) {
            nr = knt + b_k * 5;
            tst = h[nr];
            h12 = h[nr - 1];
            h[nr] = tr * tst - h22 * h12;
            h[nr - 1] = tr * h12 + h22 * tst;
          }
        }
        b_i = i * 5 + 1;
        blas::xrot(i - 1, h, i1 + 1, b_i, tr, h22);
        blas::xrot(5, z, i1 + 1, b_i, tr, h22);
      }
      kdefl = 0;
      i = l - 2;
    }
  }
  for (int k{0}; k < 3; k++) {
    for (i = k + 3; i < 6; i++) {
      h[(i + 5 * k) - 1] = 0.0;
    }
  }
  return info;
}

} // namespace lapack
} // namespace internal
} // namespace coder

//
// File trailer for xhseqr.cpp
//
// [EOF]
//
