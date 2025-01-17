//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: predict.h
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 11-Jun-2024 01:16:03
//

#ifndef PREDICT_H
#define PREDICT_H

// Include Files
#include "rtwtypes.h"
#include <cstddef>
#include <cstdlib>

class decnet0_0;

// Function Declarations
namespace coder {
namespace internal {
void DeepLearningNetwork_predict(decnet0_0 *obj,
                                 const unsigned char varargin_1[275598],
                                 float varargout_1[7]);

}
} // namespace coder

#endif
//
// File trailer for predict.h
//
// [EOF]
//
