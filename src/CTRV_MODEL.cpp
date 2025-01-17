//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: CTRV_MODEL.cpp
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

// Include Files
#include "CTRV_MODEL.h"
#include "BEV_image_data.h"
#include "det.h"
#include "inv.h"
#include "mrdivide_helper.h"
#include "rt_nonfinite.h"
#include "sqrtm.h"
#include <algorithm>
#include <cmath>
#include <cstring>

// Function Definitions
//
// if time >=18.49
//      time = time;
//  end
//  x_k = [y x yaw v yawrate]';
// -------------------------------------------------------------------------
//  Parameter
//  ts = 0.01;
//
// Arguments    : const double x_ctrv_k[5]
//                const double P_ctrv_k[25]
//                const double y_ctrv_k[3]
//                double x_ini[5]
//                double flag
//                double old_flag
//                double ts
//                double P_ctrv[25]
// Return Type  : double
//
double CTRV_MODEL(const double x_ctrv_k[5], const double P_ctrv_k[25],
                  const double y_ctrv_k[3], double x_ini[5], double flag,
                  double old_flag, double ts, double P_ctrv[25])
{
  static const double b_dv[25]{0.0001,
                               0.0,
                               0.0,
                               0.0,
                               0.0,
                               0.0,
                               0.0001,
                               0.0,
                               0.0,
                               0.0,
                               0.0,
                               0.0,
                               3.0461741978670866E-8,
                               0.0,
                               0.0,
                               0.0,
                               0.0,
                               0.0,
                               0.0004,
                               0.0,
                               0.0,
                               0.0,
                               0.0,
                               0.0,
                               6.8538919452009421E-6};
  creal_T dcv[25];
  double X_k[55];
  double X_k_hat[55];
  double Y_k_hat[33];
  double L[25];
  double K[15];
  double P_xz[15];
  double W[11];
  double P_zz[9];
  double dv2[9];
  double X_hat[5];
  double x_k_hat[5];
  double y_k_hat[3];
  double X_hat_tmp;
  double d;
  double d1;
  double d2;
  double mu_ctrv;
  int L_tmp;
  for (int i{0}; i < 25; i++) {
    L[i] = 10.0 * P_ctrv_k[i];
  }
  coder::sqrtm(L, dcv);
  for (int i{0}; i < 25; i++) {
    L[i] = dcv[i].re;
  }
  // -------------------------------------------------------------------------
  //  Sampling
  std::memset(&X_k[0], 0, 55U * sizeof(double));
  for (int b_i{0}; b_i < 11; b_i++) {
    W[b_i] = 0.0;
    if (b_i == 0) {
      for (int i{0}; i < 5; i++) {
        X_k[i] = x_ctrv_k[i];
      }
      W[0] = 0.5;
    } else if (b_i <= 5) {
      for (int i{0}; i < 5; i++) {
        X_k[i + 5 * b_i] = x_ctrv_k[i] + L[(b_i + 5 * i) - 1];
      }
      W[b_i] = 0.05;
    } else {
      for (int i{0}; i < 5; i++) {
        X_k[i + 5 * b_i] = x_ctrv_k[i] - L[(b_i + 5 * i) - 6];
      }
      W[b_i] = 0.05;
    }
  }
  // -------------------------------------------------------------------------
  //  Model prediction
  for (int b_i{0}; b_i < 5; b_i++) {
    x_k_hat[b_i] = 0.0;
  }
  std::memset(&L[0], 0, 25U * sizeof(double));
  for (int b_i{0}; b_i < 11; b_i++) {
    //  x_k = [Y X Yaw v yawrate]';
    //  ts = 0.01;
    d = X_k[5 * b_i + 4];
    if (d != 0.0) {
      double b_X_hat_tmp;
      d1 = X_k[5 * b_i + 2];
      d2 = X_k[5 * b_i + 3];
      X_hat_tmp = d2 / d;
      b_X_hat_tmp = d * ts + d1;
      X_hat[0] =
          X_k[5 * b_i] + X_hat_tmp * (-std::cos(b_X_hat_tmp) + std::cos(d1));
      X_hat[1] = X_k[5 * b_i + 1] +
                 X_hat_tmp * (-std::sin(d1) + std::sin(b_X_hat_tmp));
      X_hat[2] = b_X_hat_tmp;
      X_hat[3] = d2;
      X_hat[4] = d;
    } else {
      //  x_kk(1) = x_k(1) + x_k(4)/x_k(5)*(-cos(x_k(5)*ts+x_k(3)) +
      //  cos(x_k(3))); x_kk(2) = x_k(2) + x_k(4)/x_k(5)*(-sin(x_k(3)) +
      //  sin(x_k(5)*ts+x_k(3))); x_kk(3) = x_k(3) + x_k(5)*ts; x_kk(4) =
      //  x_k(4); x_kk(5) = -sign(x_k(3))*10^(-1);
      X_hat[0] = X_k[5 * b_i];
      X_hat[1] = X_k[5 * b_i + 1];
      X_hat[2] = X_k[5 * b_i + 2];
      X_hat[3] = X_k[5 * b_i + 3];
      X_hat[4] = d;
    }
    for (int i{0}; i < 5; i++) {
      d = X_hat[i];
      X_k_hat[i + 5 * b_i] = d;
      x_k_hat[i] += W[b_i] * d;
    }
  }
  for (int b_i{0}; b_i < 11; b_i++) {
    for (int i{0}; i < 5; i++) {
      X_hat[i] = X_k_hat[i + 5 * b_i] - x_k_hat[i];
    }
    for (int i{0}; i < 5; i++) {
      for (int i1{0}; i1 < 5; i1++) {
        L_tmp = i1 + 5 * i;
        L[L_tmp] += W[b_i] * X_hat[i1] * X_hat[i];
      }
    }
  }
  for (int i{0}; i < 25; i++) {
    L[i] += b_dv[i];
  }
  // -------------------------------------------------------------------------
  //  Measurement update
  y_k_hat[0] = 0.0;
  y_k_hat[1] = 0.0;
  y_k_hat[2] = 0.0;
  std::memset(&P_zz[0], 0, 9U * sizeof(double));
  std::memset(&P_xz[0], 0, 15U * sizeof(double));
  for (int b_i{0}; b_i < 11; b_i++) {
    for (int i{0}; i < 3; i++) {
      d = 0.0;
      for (int i1{0}; i1 < 5; i1++) {
        d += static_cast<double>(iv[i + 3 * i1]) * X_k[i1 + 5 * b_i];
      }
      Y_k_hat[i + 3 * b_i] = d;
      y_k_hat[i] += W[b_i] * d;
    }
  }
  for (int b_i{0}; b_i < 11; b_i++) {
    double dv1[3];
    dv1[0] = Y_k_hat[3 * b_i] - y_k_hat[0];
    dv1[1] = Y_k_hat[3 * b_i + 1] - y_k_hat[1];
    dv1[2] = Y_k_hat[3 * b_i + 2] - y_k_hat[2];
    X_hat_tmp = W[b_i];
    for (int i{0}; i < 3; i++) {
      P_zz[3 * i] += X_hat_tmp * dv1[0] * dv1[i];
      L_tmp = 3 * i + 1;
      P_zz[L_tmp] += X_hat_tmp * dv1[1] * dv1[i];
      L_tmp = 3 * i + 2;
      P_zz[L_tmp] += X_hat_tmp * dv1[2] * dv1[i];
    }
    for (int i{0}; i < 5; i++) {
      X_hat[i] = X_hat_tmp * (X_k_hat[i + 5 * b_i] - x_k_hat[i]);
    }
    for (int i{0}; i < 3; i++) {
      for (int i1{0}; i1 < 5; i1++) {
        L_tmp = i1 + 5 * i;
        P_xz[L_tmp] += X_hat[i1] * dv1[i];
      }
    }
  }
  for (int i{0}; i < 9; i++) {
    P_zz[i] += dv[i];
  }
  coder::internal::mrdiv(P_xz, P_zz, K);
  y_k_hat[0] = y_ctrv_k[0] - y_k_hat[0];
  y_k_hat[1] = y_ctrv_k[1] - y_k_hat[1];
  y_k_hat[2] = y_ctrv_k[2] - y_k_hat[2];
  coder::inv(P_zz, dv2);
  d = 0.0;
  for (int i{0}; i < 3; i++) {
    d +=
        ((-0.5 * y_k_hat[0] * dv2[3 * i] + -0.5 * y_k_hat[1] * dv2[3 * i + 1]) +
         -0.5 * y_k_hat[2] * dv2[3 * i + 2]) *
        y_k_hat[i];
  }
  mu_ctrv =
      1.0 / std::sqrt(248.05021344239853 * coder::det(P_zz)) * std::exp(d);
  //  P_kk = P_k_hat - K*S*K';
  // -------------------------------------------------------------------------
  if ((flag == 0.0) && (old_flag == 1.0)) {
    for (int b_i{0}; b_i < 5; b_i++) {
      x_ini[b_i] = 0.0;
    }
    std::copy(&b_dv[0], &b_dv[25], &P_ctrv[0]);
  } else if ((flag == 1.0) && (old_flag == 0.0)) {
    std::copy(&b_dv[0], &b_dv[25], &P_ctrv[0]);
  } else if (flag != 0.0) {
    for (int i{0}; i < 5; i++) {
      d = 0.0;
      for (int i1{0}; i1 < 3; i1++) {
        L_tmp = i + 5 * i1;
        d += K[L_tmp] * y_k_hat[i1];
        P_xz[L_tmp] = (K[i] * P_zz[3 * i1] + K[i + 5] * P_zz[3 * i1 + 1]) +
                      K[i + 10] * P_zz[3 * i1 + 2];
      }
      x_ini[i] = x_k_hat[i] + d;
      d = P_xz[i];
      d1 = P_xz[i + 5];
      d2 = P_xz[i + 10];
      for (int i1{0}; i1 < 5; i1++) {
        L_tmp = i + 5 * i1;
        P_ctrv[L_tmp] =
            L[L_tmp] - ((d * K[i1] + d1 * K[i1 + 5]) + d2 * K[i1 + 10]);
      }
    }
  } else {
    for (int b_i{0}; b_i < 5; b_i++) {
      x_ini[b_i] = 0.0;
    }
    std::copy(&b_dv[0], &b_dv[25], &P_ctrv[0]);
  }
  // -------------------------------------------------------------------------
  //  if time >=63.230
  //  figure(1); hold on
  //  cla;
  //  plot(x_kk(1),x_kk(2),'xr');
  //  plot(x_k(1),x_k(2),'xk')
  //  plot([x_kk(1) x_k(1)],[x_kk(2) x_k(2)])
  //  plot(y_k(1),y_k(2),'or')
  //  axis([-6 6 -5 10])
  //  axis equal
  //  drawnow
  //      time = time;
  //  end
  return mu_ctrv;
}

//
// File trailer for CTRV_MODEL.cpp
//
// [EOF]
//
