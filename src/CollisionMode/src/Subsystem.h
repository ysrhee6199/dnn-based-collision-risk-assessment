//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Subsystem.h
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
#ifndef RTW_HEADER_Subsystem_h_
#define RTW_HEADER_Subsystem_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Subsystem_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model Subsystem
class Subsystem final
{
  // public data and function members
 public:
  // Block signals (default storage)
  struct B_Subsystem_T {
    real_T tmp_DSM[60903];
    real_T DSM_out[60903];
    real_T X_pred_window[14080];       // '<S1>/Prediction'
    real_T State_trajectory[576];
    real_T varargin_1[255];
    real_T tmp_y_contour_data[201];
    real_T c_varargin_1[201];
    real_T ego_x_contour_total_data[200];
    real_T ego_y_contour_total_data[200];
    real_T sorted_x_contour_total_data[200];
    real_T vwork_data[200];
    real_T b_x_data[200];
    real_T b_varargin_1[101];
    int32_T ego_x_contour_total_tmp_data[200];
    int32_T b_idx_data[200];
    int32_T iwork_data[200];
    boolean_T b_data[200];
    real_T dv[20];
    real_T vertex_total[16];
    real_T target_vertex[10];
    real_T a[6];
    real_T target_y_vertex[5];
    real_T tmp_target_y_vertex[5];
    real_T tmp_target_x_vertex[5];
    real_T target_y_vertex_rot[5];
    real_T target_x_vertex_rot[5];
    real_T target_y[5];
    real_T target_x[5];
    real_T target_y_correction[5];
    real_T target_x_correction[5];
    real_T tmp_target_y_vertex_tmp[5];
    real_T tmp_target_x_vertex_tmp[5];
    real_T scale[5];
    real_T scale_m[5];
    real_T x4[4];
    boolean_T bv[20];
    int32_T first[5];
    int32_T last[5];
    int32_T first_c[5];
    int32_T last_k[5];
    real_T ego_shape_flag;
    real_T ego_shape_flag_out;
    real_T b_x_tmp;
    real_T x_tmp;
    real_T tmp_target_x_vertex_c;
    real_T tmp_target_y_vertex_b;
    real_T tmp_target_y_vertex_tmp_p;
    real_T d;
    real_T Fusion_Track_out_tmp;
    real_T y_cross_1;
    real_T x_cross_1;
    real_T y_cross_2;
    real_T x_cross_2;
    real_T i_row;
    real_T f_row;
    real_T y_f;
    real_T x_cross;
    real_T tmp_y_vertex_1;
    real_T tmp_x_vertex_1;
    real_T m;
    real_T tmp_base;
    real_T c_x_tmp;
    real_T m_x_tmp;
    real_T target_y_correction_idx_2;
    real_T tmp_target_y_vertex_tmp_tmp;
    real_T d1;
    real_T d2;
    real_T minxv;
    real_T maxxv;
    real_T minyv;
    real_T maxyv;
    real_T xvFirst;
    real_T yvFirst;
    real_T xv2;
    real_T yv2;
    real_T minxv_c;
    real_T maxxv_f;
    real_T minyv_g;
    real_T maxyv_g;
    real_T lmaxxv;
    real_T lmaxyv;
    int32_T ego_x_contour_total_tmp_size[2];
    boolean_T target_y_m[5];
    uint8_T idx4[4];
    int8_T perm[4];
    int32_T index_pred;
    int32_T i;
    int32_T rtb_X_pred_window_tmp;
    int32_T rtb_X_pred_window_tmp_n;
    int32_T Target_Shape_Exist_Flag;
    int32_T Target_Exist_in_Input_SBEV;
    int32_T c_overlap_btw_ego_pred_detail_f;
    int32_T c_overlap_btw_ego_pred_before_d;
    int32_T c_prediction_time_step_detail_a;
    int32_T index_pred_detail;
    int32_T overlap_btw_ego_pred_flag;
    int32_T prediction_time_step_at_overlap;
    int32_T TWO_VERTEX_ROI_OUT_FLAG;
    int32_T c_vertex_index_beforeCurrentNex;
    int32_T tmp_i;
    int32_T v;
    int32_T w;
    int32_T b_index_pred_detail;
    int32_T ego_x_contour_total_size;
    int32_T ego_y_contour_total_size;
    int32_T sorted_x_contour_total_size;
    int32_T tmp_y_contour_size;
    int32_T dim;
    int32_T vstride;
    int32_T b;
    int32_T ib;
    int32_T quartetOffset;
    boolean_T bv1[4];
  };

  // External inputs (root inport signals with default storage)
  struct ExtU_Subsystem_T {
    real_T Fusion_Track_out[768];      // '<Root>/Fusion_Track'
    real_T Front_Vision_Lane[14];      // '<Root>/Front_Vision_Lane'
  };

  // External outputs (root outports fed by signals with default storage)
  struct ExtY_Subsystem_T {
    uint8_T DSM_uint8[60903];          // '<Root>/DSM_uint8'
    real_T DSM_flag;                   // '<Root>/DSM_flag'
  };

  // Real-time Model Data Structure
  struct RT_MODEL_Subsystem_T {
    const char_T * volatile errorStatus;
  };

  // Copy Constructor
  Subsystem(Subsystem const&) = delete;

  // Assignment Operator
  Subsystem& operator= (Subsystem const&) & = delete;

  // Move Constructor
  Subsystem(Subsystem &&) = delete;

  // Move Assignment Operator
  Subsystem& operator= (Subsystem &&) = delete;

  // Real-Time Model get method
  Subsystem::RT_MODEL_Subsystem_T * getRTM();

  // Root inports set method
  void setExternalInputs(const ExtU_Subsystem_T *pExtU_Subsystem_T)
  {
    Subsystem_U = *pExtU_Subsystem_T;
  }

  // Root outports get method
  const ExtY_Subsystem_T &getExternalOutputs() const
  {
    return Subsystem_Y;
  }

  // model initialize function
  static void initialize();

  // model step function
  void step();

  // model terminate function
  static void terminate();

  // Constructor
  Subsystem();

  // Destructor
  ~Subsystem();

  // private data and function members
 private:
  // External inputs
  ExtU_Subsystem_T Subsystem_U;

  // External outputs
  ExtY_Subsystem_T Subsystem_Y;

  // Block signals
  B_Subsystem_T Subsystem_B;

  // private member function(s) for subsystem '<Root>'
  real_T Subsystem_minimum(const real_T x[5]);
  real_T Subsystem_maximum(const real_T x[5]);
  boolean_T Subsystem_isequal(const real_T varargin_2[60903]);
  void Subsystem_emxInit_real_T(emxArray_real_T_Subsystem_T **pEmxArray, int32_T
    numDimensions);
  void Subsystem_minimum_g(const real_T x[101], real_T *ex, int32_T *idx);
  void Subsystem_minimum_g4(const real_T x[201], real_T *ex, int32_T *idx);
  void Subsystem_plotLineHigh(real_T x0, real_T b_y0, real_T x1, real_T b_y1,
    real_T x_total_data[], int32_T *x_total_size, real_T y_total_data[], int32_T
    *y_total_size);
  void Subsystem_plotLineLow(real_T x0, real_T b_y0, real_T x1, real_T b_y1,
    real_T x_total_data[], int32_T *x_total_size, real_T y_total_data[], int32_T
    *y_total_size);
  void Subsystem_plotLine(real_T x0, real_T b_y0, real_T x1, real_T b_y1, real_T
    x_total_data[], int32_T *x_total_size, real_T y_total_data[], int32_T
    *y_total_size);
  void Subsystem_nullAssignment(real_T x_data[], int32_T *x_size, const int32_T
    idx_data[], const int32_T idx_size[2]);
  void Subsys_emxEnsureCapacity_real_T(emxArray_real_T_Subsystem_T *emxArray,
    int32_T oldNumel);
  void Subsystem_merge(int32_T idx_data[], real_T x_data[], int32_T offset,
                       int32_T np, int32_T nq, int32_T iwork_data[], real_T
                       xwork_data[]);
  void Subsystem_sort(real_T x_data[], const int32_T *x_size, int32_T idx_data[],
                      int32_T *idx_size);
  void Subsystem_minimum_g4r(const real_T x[255], real_T *ex, int32_T *idx);
  void Subsystem_sum(const real_T x[220], real_T y[20]);
  boolean_T Subsystem_ifWhileCond(const boolean_T x[20]);
  void Subsystem_countLoops(const real_T xv[5], const real_T yv[5], int32_T
    *nloops, int32_T first[5], int32_T last[5]);
  void Subsystem_computeRange(const real_T xv[5], const real_T yv[5], int32_T
    nloops, const int32_T first[5], const int32_T last[5], real_T *minxv, real_T
    *maxxv, real_T *minyv, real_T *maxyv);
  void Subsystem_computeScaleFactors(const real_T xv[5], const real_T yv[5],
    int32_T nloops, const int32_T first[5], const int32_T last[5], real_T scale
    [5]);
  void Subsystem_contrib(real_T x1, real_T b_y1, real_T x2, real_T y2, int8_T
    quad1, int8_T quad2, real_T scale, int8_T *diffQuad, boolean_T *onj);
  boolean_T Subsystem_scalarInpolygon(real_T xj, real_T yj, const real_T xv[5],
    const real_T yv[5], int32_T nloops, const int32_T first[5], const int32_T
    last[5], real_T minxv, real_T maxxv, real_T minyv, real_T maxyv, const
    real_T scale[5]);
  void Subsystem_inpolygon(const real_T xv[5], const real_T yv[5], boolean_T in
    [5]);
  real_T Subsystem_applyToMultipleDims(const boolean_T x[5]);
  void Subsystem_inpolygon_f(const real_T x[5], const real_T y[5], const real_T
    xv[5], const real_T yv[5], boolean_T in[5]);
  boolean_T Subsystem_all(const boolean_T x[5]);
  void Subsystem_all_k(const real_T x[16], boolean_T y[4]);
  int32_T Subsystem_intnnz(const boolean_T s[4]);
  void Subsystem_emxFree_real_T(emxArray_real_T_Subsystem_T **pEmxArray);
  void DSMMaxCollisionProbabilityCN7_v(real_T SBEV_in[60903], const real_T
    State_trajectory[9], const real_T Target_X_pred[220], real_T
    EGO_SHAPE_FLAG_in, real_T *LANE_MARK_FLAG_out, real_T *EGO_SHAPE_FLAG_out);

  // Real-Time Model
  RT_MODEL_Subsystem_T Subsystem_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Note that this particular code originates from a subsystem build,
//  and has its own system numbers different from the parent model.
//  Refer to the system hierarchy for this subsystem below, and use the
//  MATLAB hilite_system command to trace the generated code back
//  to the parent model.  For example,
//
//  hilite_system('PredictionCollisionMode_CN7DB_070124_v103/ /Subsystem')    - opens subsystem PredictionCollisionMode_CN7DB_070124_v103/ /Subsystem
//  hilite_system('PredictionCollisionMode_CN7DB_070124_v103/ /Subsystem/Kp') - opens and selects block Kp
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'PredictionCollisionMode_CN7DB_070124_v103/ '
//  '<S1>'   : 'PredictionCollisionMode_CN7DB_070124_v103/ /Subsystem'
//  '<S2>'   : 'PredictionCollisionMode_CN7DB_070124_v103/ /Subsystem/DSM'
//  '<S3>'   : 'PredictionCollisionMode_CN7DB_070124_v103/ /Subsystem/Prediction'

#endif                                 // RTW_HEADER_Subsystem_h_

//
// File trailer for generated code.
//
// [EOF]
//
