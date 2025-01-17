//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: predict1.cu
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 31-Jul-2024 04:58:22
//

// Include Files
#include "predict1.h"
#include "DeepLearningNetwork.h"
#include "Predict_internal_types.h"
#include "MWCudaDimUtility.hpp"

// Function Declarations
static __global__ void
DeepLearningNetwork_predict_kernel1(const unsigned char varargin_1[60903],
                                    float inMiniBatchGroup_0_f1[60903]);

// Function Definitions
//
// Arguments    : dim3 blockArg
//                dim3 gridArg
//                const unsigned char varargin_1[60903]
//                float inMiniBatchGroup_0_f1[60903]
// Return Type  : void
//
static __global__
    __launch_bounds__(512, 1) void DeepLearningNetwork_predict_kernel1(
        const unsigned char varargin_1[60903],
        float inMiniBatchGroup_0_f1[60903])
{
  unsigned long threadId;
  int i;
  int i1;
  int p;
  threadId = static_cast<unsigned long>(mwGetGlobalThreadIndexInXDimension());
  i = static_cast<int>(threadId % 101UL);
  threadId = (threadId - static_cast<unsigned long>(i)) / 101UL;
  i1 = static_cast<int>(threadId % 201UL);
  threadId = (threadId - static_cast<unsigned long>(i1)) / 201UL;
  p = static_cast<int>(threadId);
  if ((p < 3) && (i1 < 201) && (i < 101)) {
    inMiniBatchGroup_0_f1[(i + 101 * i1) + 20301 * p] =
        static_cast<float>(varargin_1[(i1 + 201 * i) + 20301 * p]);
  }
}

//
// Arguments    : decnet0_0 *obj
//                const unsigned char varargin_1[60903]
//                float varargout_1[13]
// Return Type  : void
//
namespace coder {
namespace internal {
void DeepLearningNetwork_predict(decnet0_0 *obj,
                                 const unsigned char varargin_1[60903],
                                 float varargout_1[13])
{
  float(*gpu_inMiniBatchGroup_0_f1)[60903];
  cudaMalloc(&gpu_inMiniBatchGroup_0_f1, 243612UL);
  DeepLearningNetwork_predict_kernel1<<<dim3(119U, 1U, 1U),
                                        dim3(512U, 1U, 1U)>>>(
      varargin_1, *gpu_inMiniBatchGroup_0_f1);
  cudaMemcpy(obj->getInputDataPointer(0), *gpu_inMiniBatchGroup_0_f1,
             obj->getLayerOutputSize(0, 0), cudaMemcpyDeviceToDevice);
  obj->predict();
  cudaMemcpy(varargout_1, obj->getLayerOutput(9, 0),
             obj->getLayerOutputSize(9, 0), cudaMemcpyDeviceToDevice);
  cudaFree(*gpu_inMiniBatchGroup_0_f1);
}

} // namespace internal
} // namespace coder

//
// File trailer for predict1.cu
//
// [EOF]
//
