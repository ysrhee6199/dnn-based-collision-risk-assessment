//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: I_lat.h
//
// MATLAB Coder version            : 5.6
// C/C++ source code generated on  : 11-Jun-2024 00:27:43
//

#ifndef I_LAT_H
#define I_LAT_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

// Function Declarations
double I_lat(double rel_pos_x, double rel_pos_y, double rel_vel_x,
             double rel_vel_y, double Va, double Vb, double heading_angle,
             double target_width, double target_length, double ego_length,
             double distance_to_leftlane, double distance_to_rightlane,
             double &I_long, double &TTC, double &x_p, double &d_br,
             double &d_w, double &DLC, double &b_TLC);

#endif
//
// File trailer for I_lat.h
//
// [EOF]
//
