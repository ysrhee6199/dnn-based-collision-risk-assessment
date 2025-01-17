//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Classification.h
//
// Code generated for Simulink model 'Classification'.
//
// Model version                  : 8.1
// Simulink Coder version         : 9.9 (R2023a) 19-Nov-2022
// C/C++ source code generated on : Tue Jul  9 07:20:57 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_Classification_h_
#define RTW_HEADER_Classification_h_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Classification_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Class declaration for model Classification
class Classification final
{
  // public data and function members
 public:
  // External inputs (root inport signals with default storage)
  struct ExtU_Classification_T {
    real32_T out_1_predict[13];        // '<Root>/Classificationb'
  };

  // External outputs (root outports fed by signals with default storage)
  struct ExtY_Classification_T {
    real_T Predict_CM_index;           // '<Root>/Predict_CM_index'
    real32_T CM_probability;           // '<Root>/CM_probability'
  };

  // Real-time Model Data Structure
  struct RT_MODEL_Classification_T {
    const char_T * volatile errorStatus;
  };

  // Copy Constructor
  Classification(Classification const&) = delete;

  // Assignment Operator
  Classification& operator= (Classification const&) & = delete;

  // Move Constructor
  Classification(Classification &&) = delete;

  // Move Assignment Operator
  Classification& operator= (Classification &&) = delete;

  // Real-Time Model get method
  Classification::RT_MODEL_Classification_T * getRTM();

  // Root inports set method
  void setExternalInputs(const ExtU_Classification_T *pExtU_Classification_T)
  {
    Classification_U = *pExtU_Classification_T;
  }

  // Root outports get method
  const ExtY_Classification_T &getExternalOutputs() const
  {
    return Classification_Y;
  }

  // model initialize function
  static void initialize();

  // model step function
  void step();

  // model terminate function
  static void terminate();

  // Constructor
  Classification();

  // Destructor
  ~Classification();

  // private data and function members
 private:
  // External inputs
  ExtU_Classification_T Classification_U;

  // External outputs
  ExtY_Classification_T Classification_Y;

  // Real-Time Model
  RT_MODEL_Classification_T Classification_M;
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
//  hilite_system('PredictionCollisionMode_CN7DB_070124_v103/ /Collision Mode Classification/Classification')    - opens subsystem PredictionCollisionMode_CN7DB_070124_v103/ /Collision Mode Classification/Classification
//  hilite_system('PredictionCollisionMode_CN7DB_070124_v103/ /Collision Mode Classification/Classification/Kp') - opens and selects block Kp
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'PredictionCollisionMode_CN7DB_070124_v103/ /Collision Mode Classification'
//  '<S1>'   : 'PredictionCollisionMode_CN7DB_070124_v103/ /Collision Mode Classification/Classification'

#endif                                 // RTW_HEADER_Classification_h_

//
// File trailer for generated code.
//
// [EOF]
//
