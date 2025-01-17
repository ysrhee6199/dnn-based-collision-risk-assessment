//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: _coder_Predict_api.cpp
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 31-Jul-2024 04:58:22
//

// Include Files
#include "_coder_Predict_api.h"
#include "_coder_Predict_mex.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131642U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "Predict",                                            // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

// Function Declarations
static uint8_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[60903];

static uint8_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *in,
                                  const char_T *identifier))[60903];

static uint8_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId))[60903];

static const mxArray *emlrt_marshallOut(const real32_T u[13]);

// Function Definitions
//
// Arguments    : const emlrtStack *sp
//                const mxArray *src
//                const emlrtMsgIdentifier *msgId
// Return Type  : uint8_T (*)[60903]
//
static uint8_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
                                    const emlrtMsgIdentifier *msgId))[60903]
{
  static const int32_T dims[3]{201, 101, 3};
  int32_T iv[3];
  uint8_T(*ret)[60903];
  boolean_T bv[3]{false, false, false};
  emlrtCheckVsBuiltInR2012b((emlrtConstCTX)sp, msgId, src, "uint8", false, 3U,
                            (const void *)&dims[0], &bv[0], &iv[0]);
  ret = (uint8_T(*)[60903])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

//
// Arguments    : const emlrtStack *sp
//                const mxArray *in
//                const char_T *identifier
// Return Type  : uint8_T (*)[60903]
//
static uint8_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *in,
                                  const char_T *identifier))[60903]
{
  emlrtMsgIdentifier thisId;
  uint8_T(*y)[60903];
  thisId.fIdentifier = const_cast<const char_T *>(identifier);
  thisId.fParent = nullptr;
  thisId.bParentIsCell = false;
  y = emlrt_marshallIn(sp, emlrtAlias(in), &thisId);
  emlrtDestroyArray(&in);
  return y;
}

//
// Arguments    : const emlrtStack *sp
//                const mxArray *u
//                const emlrtMsgIdentifier *parentId
// Return Type  : uint8_T (*)[60903]
//
static uint8_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
                                  const emlrtMsgIdentifier *parentId))[60903]
{
  uint8_T(*y)[60903];
  y = b_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

//
// Arguments    : const real32_T u[13]
// Return Type  : const mxArray *
//
static const mxArray *emlrt_marshallOut(const real32_T u[13])
{
  static const int32_T iv[2]{0, 0};
  static const int32_T iv1[2]{1, 13};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericArray(2, (const void *)&iv[0], mxSINGLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m, &iv1[0], 2);
  emlrtAssign(&y, m);
  return y;
}

//
// Arguments    : const mxArray * const prhs[1]
//                const mxArray *plhs[1]
// Return Type  : void
//
void Predict_api(const mxArray *const prhs[1], const mxArray *plhs[1])
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  real32_T(*out)[13];
  uint8_T(*in)[60903];
  st.tls = emlrtRootTLSGlobal;
  out = (real32_T(*)[13])mxMalloc(sizeof(real32_T[13]));
  // Marshall function inputs
  in = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "in");
  // Invoke the target function
  Predict(*in, *out);
  // Marshall function outputs
  plhs[0] = emlrt_marshallOut(*out);
}

//
// Arguments    : void
// Return Type  : void
//
void Predict_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  Predict_xil_terminate();
  Predict_xil_shutdown();
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

//
// Arguments    : void
// Return Type  : void
//
void Predict_initialize()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, nullptr);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

//
// Arguments    : void
// Return Type  : void
//
void Predict_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

//
// File trailer for _coder_Predict_api.cpp
//
// [EOF]
//
