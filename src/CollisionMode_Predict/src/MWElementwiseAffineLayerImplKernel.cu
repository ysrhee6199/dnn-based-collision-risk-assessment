#include "MWKernelHeaders.hpp"
#include <math.h>
#include <stdio.h>
 void __global__ __launch_bounds__(1024) scale_scalar_kernel(const float* 
inputBuffer, float* outputBuffer, float* olKGEIcsxmLSoMhRhEtP, long int 
YMNbgnUYZspjMLjwcIOS) { for (long int idx = blockDim.x * blockIdx.x + 
threadIdx.x; idx < YMNbgnUYZspjMLjwcIOS; idx += blockDim.x * gridDim.x) { 
outputBuffer[idx] = olKGEIcsxmLSoMhRhEtP[0] * inputBuffer[idx]; } } void __global__ 
__launch_bounds__(1024) scale_vector_kernel(const float* inputBuffer, float* 
outputBuffer, float* olKGEIcsxmLSoMhRhEtP, double YNmJhGSUszJKxsodxiuV, 
double YNDVziqpDddiXQKYZZhX, long int YMNbgnUYZspjMLjwcIOS) { for (long 
int idx = blockDim.x * blockIdx.x + threadIdx.x; idx < YMNbgnUYZspjMLjwcIOS; 
idx += blockDim.x * gridDim.x) { double batchIdx = floor(idx / 
YNDVziqpDddiXQKYZZhX); double i_batch = idx - (batchIdx * 
YNDVziqpDddiXQKYZZhX); double channelIdx = floor(i_batch / 
YNmJhGSUszJKxsodxiuV); outputBuffer[idx] = 
olKGEIcsxmLSoMhRhEtP[static_cast<long int>(channelIdx)] * inputBuffer[idx]; } } 
void __global__ __launch_bounds__(1024) scale_matrix2d_kernel(const float* 
inputBuffer, float* outputBuffer, float* olKGEIcsxmLSoMhRhEtP, double 
YNmJhGSUszJKxsodxiuV, long int YMNbgnUYZspjMLjwcIOS) { for (long int 
idx = blockDim.x * blockIdx.x + threadIdx.x; idx < YMNbgnUYZspjMLjwcIOS; idx += 
blockDim.x * gridDim.x) { double totalChannelIdx = floor(idx / 
YNmJhGSUszJKxsodxiuV); double i_channel = idx - (totalChannelIdx * 
YNmJhGSUszJKxsodxiuV); outputBuffer[idx] = 
olKGEIcsxmLSoMhRhEtP[static_cast<long int>(i_channel)] * inputBuffer[idx]; } } void 
__global__ __launch_bounds__(1024) scale_tensor3d_kernel(const float* 
inputBuffer, float* outputBuffer, float* olKGEIcsxmLSoMhRhEtP, double 
YNDVziqpDddiXQKYZZhX, long int YMNbgnUYZspjMLjwcIOS) { for (long int 
idx = blockDim.x * blockIdx.x + threadIdx.x; idx < YMNbgnUYZspjMLjwcIOS; idx += 
blockDim.x * gridDim.x) { double batchIdx = floor(idx / 
YNDVziqpDddiXQKYZZhX); double i_batch = idx - (batchIdx * 
YNDVziqpDddiXQKYZZhX); outputBuffer[idx] = 
olKGEIcsxmLSoMhRhEtP[static_cast<long int>(i_batch)] * inputBuffer[idx]; } } void 
__global__ __launch_bounds__(1024) offset_scalar_kernel(float* inputBuffer, 
float* outputBuffer, float* fhikqqlnUKCjleVKDqiG, long int YMNbgnUYZspjMLjwcIOS, 
bool ZKjSVYDDjACizBkGbqBq, int bERCRkGjpaKXMNComoYl, int 
unSXtdjDjpysqxmbIiPv) { for (long int idx = blockDim.x * blockIdx.x + 
threadIdx.x; idx < YMNbgnUYZspjMLjwcIOS; idx += blockDim.x * gridDim.x) { float 
out = inputBuffer[idx] + fhikqqlnUKCjleVKDqiG[0]; if (ZKjSVYDDjACizBkGbqBq) { out 
= out > unSXtdjDjpysqxmbIiPv ? unSXtdjDjpysqxmbIiPv : out; out = out < 
bERCRkGjpaKXMNComoYl ? bERCRkGjpaKXMNComoYl : out; } outputBuffer[idx] = out; 
} } void __global__ __launch_bounds__(1024) offset_vector_kernel(float* 
inputBuffer, float* outputBuffer, float* fhikqqlnUKCjleVKDqiG, double 
YNmJhGSUszJKxsodxiuV, double YNDVziqpDddiXQKYZZhX, long int 
YMNbgnUYZspjMLjwcIOS, bool ZKjSVYDDjACizBkGbqBq, int bERCRkGjpaKXMNComoYl, int 
unSXtdjDjpysqxmbIiPv) { for (long int idx = blockDim.x * blockIdx.x + 
threadIdx.x; idx < YMNbgnUYZspjMLjwcIOS; idx += blockDim.x * gridDim.x) { 
double batchIdx = floor(idx / YNDVziqpDddiXQKYZZhX); double i_batch = 
idx - (batchIdx * YNDVziqpDddiXQKYZZhX); double channelIdx = 
floor(i_batch / YNmJhGSUszJKxsodxiuV); float out = inputBuffer[idx] + 
fhikqqlnUKCjleVKDqiG[static_cast<long int>(channelIdx)]; if (ZKjSVYDDjACizBkGbqBq) 
{ out = out > unSXtdjDjpysqxmbIiPv ? unSXtdjDjpysqxmbIiPv : out; out = out < 
bERCRkGjpaKXMNComoYl ? bERCRkGjpaKXMNComoYl : out; } outputBuffer[idx] = out; 
} } void __global__ __launch_bounds__(1024) offset_matrix2d_kernel(float* 
inputBuffer, float* outputBuffer, float* fhikqqlnUKCjleVKDqiG, double 
YNmJhGSUszJKxsodxiuV, long int YMNbgnUYZspjMLjwcIOS, bool 
ZKjSVYDDjACizBkGbqBq, int bERCRkGjpaKXMNComoYl, int unSXtdjDjpysqxmbIiPv) { 
for (long int idx = blockDim.x * blockIdx.x + threadIdx.x; idx < 
YMNbgnUYZspjMLjwcIOS; idx += blockDim.x * gridDim.x) { double totalChannelIdx = 
floor(idx / YNmJhGSUszJKxsodxiuV); double i_channel = idx - 
(totalChannelIdx * YNmJhGSUszJKxsodxiuV); float out = 
inputBuffer[idx] + fhikqqlnUKCjleVKDqiG[static_cast<long int>(i_channel)]; if 
(ZKjSVYDDjACizBkGbqBq) { out = out > unSXtdjDjpysqxmbIiPv ? 
unSXtdjDjpysqxmbIiPv : out; out = out < bERCRkGjpaKXMNComoYl ? 
bERCRkGjpaKXMNComoYl : out; } outputBuffer[idx] = out; } } void __global__ 
__launch_bounds__(1024) offset_tensor3d_kernel(float* inputBuffer, float* 
outputBuffer, float* fhikqqlnUKCjleVKDqiG, double YNDVziqpDddiXQKYZZhX, 
long int YMNbgnUYZspjMLjwcIOS, bool ZKjSVYDDjACizBkGbqBq, int 
bERCRkGjpaKXMNComoYl, int unSXtdjDjpysqxmbIiPv) { for (long int idx = 
blockDim.x * blockIdx.x + threadIdx.x; idx < YMNbgnUYZspjMLjwcIOS; idx += 
blockDim.x * gridDim.x) { double batchIdx = floor(idx / 
YNDVziqpDddiXQKYZZhX); double i_batch = idx - (batchIdx * 
YNDVziqpDddiXQKYZZhX); float out = inputBuffer[idx] + 
fhikqqlnUKCjleVKDqiG[static_cast<long int>(i_batch)]; if (ZKjSVYDDjACizBkGbqBq) { 
out = out > unSXtdjDjpysqxmbIiPv ? unSXtdjDjpysqxmbIiPv : out; out = out < 
bERCRkGjpaKXMNComoYl ? bERCRkGjpaKXMNComoYl : out; } outputBuffer[idx] = out; 
} }