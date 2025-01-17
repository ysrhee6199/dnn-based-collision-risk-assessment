//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
// File: predict.cu
//
// GPU Coder version                    : 2.5
// CUDA/C/C++ source code generated on  : 11-Jun-2024 01:16:03
//

// Include Files
#include "predict.h"
#include "Decision_Predict_internal_types.h"
#include "DeepLearningNetwork.h"
#include "MWCudaDimUtility.hpp"

// Function Declarations
static __global__ void
DeepLearningNetwork_predict_kernel1(const unsigned char varargin_1[275598],
                                    float inMiniBatchGroup_0_f1[275598]);

// Function Definitions
//
// Arguments    : dim3 blockArg
//                dim3 gridArg
//                const unsigned char varargin_1[275598]
//                float inMiniBatchGroup_0_f1[275598]
// Return Type  : void
//
static __global__
    __launch_bounds__(512, 1) void DeepLearningNetwork_predict_kernel1(
        const unsigned char varargin_1[275598],
        float inMiniBatchGroup_0_f1[275598])
{
  unsigned long threadId;
  int i;
  int i1;
  int p;
  threadId = static_cast<unsigned long>(mwGetGlobalThreadIndexInXDimension());
  i = static_cast<int>(threadId % 61UL);
  threadId = (threadId - static_cast<unsigned long>(i)) / 61UL;
  i1 = static_cast<int>(threadId % 251UL);
  threadId = (threadId - static_cast<unsigned long>(i1)) / 251UL;
  p = static_cast<int>(threadId);
  if ((p < 18) && (i1 < 251) && (i < 61)) {
    inMiniBatchGroup_0_f1[(i + 61 * i1) + 15311 * p] =
        static_cast<float>(varargin_1[(i1 + 251 * i) + 15311 * p]);
  }
}

//
// Arguments    : decnet0_0 *obj
//                const unsigned char varargin_1[275598]
//                float varargout_1[7]
// Return Type  : void
//
namespace coder {
namespace internal {
void DeepLearningNetwork_predict(decnet0_0 *obj,
                                 const unsigned char varargin_1[275598],
                                 float varargout_1[7])
{
  float(*gpu_inMiniBatchGroup_0_f1)[275598];
  cudaMalloc(&gpu_inMiniBatchGroup_0_f1, 1102392UL);
  DeepLearningNetwork_predict_kernel1<<<dim3(539U, 1U, 1U),
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
// File trailer for predict.cu
//
// [EOF]
//
