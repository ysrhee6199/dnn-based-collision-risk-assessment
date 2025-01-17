#include "MWCudnnCommonHeaders.hpp"
#include "MWCudnnMaxPoolingLayerImpl.hpp"
#include <cmath>
 namespace MWCudnnTarget { void __global__ MWSetDyForBackPropImpl(float* 
OwscQfaoXJuSJFwXQahz, const int eqUIJyhXTwRqtPfXapcx); void __global__ 
doMWMaxPoolingLayerImpl(float* UVzBVEOIylFjkSgHwFMp, float* 
URgvgDXnZskIYGdtimcU, const int BRSPqxNffoBYKqpSVHne); 
MWMaxPoolingLayerImpl::MWMaxPoolingLayerImpl(MWCNNLayer* layer, 
MWTargetNetworkImpl* ntwk_impl, int DGzdAcREJHGXjyRzNjJV, int 
ECTnqgWHyHCHCLBZlffd, int FOcStuqCptsGIZXskVpC, int FpguQZSermqZCMRiUfML, 
int CTCbzQMDaLxINPbODdng, int CLOUhPjbgggWoXHTtmjC, int 
CpMjJjtGOeWOzwxpAAQP, int CqtPRJvHlGJFssiPzsOm, bool 
GDRXdUDklKFEYEfifhIH, int eqmVWbEcwBRGnVNDUtrG) : MWCNNLayerImpl(layer, 
ntwk_impl) , BLjrjqvCcCommiXWQLjs(GDRXdUDklKFEYEfifhIH) , 
UVzBVEOIylFjkSgHwFMp(0) , OwscQfaoXJuSJFwXQahz(0) , 
DCdZnqpcBnvXVgEsLBnz(DGzdAcREJHGXjyRzNjJV) , 
DqxLTLaJwwgQqmrtCDuu(ECTnqgWHyHCHCLBZlffd) , 
CufLFODQDXTAPyRqYodN(DGzdAcREJHGXjyRzNjJV) , 
DSsxcjIrUgZCKZovyNQf(ECTnqgWHyHCHCLBZlffd) , 
CGbFsczkgkhjcHoCKzBx(CTCbzQMDaLxINPbODdng) , 
CDJtexcMbXMWAmnNZsNf(CLOUhPjbgggWoXHTtmjC) , 
CZNYmBcNFSZWvaCklqeM(CpMjJjtGOeWOzwxpAAQP) , 
ClEhcJFlvGCgiavziIag(CqtPRJvHlGJFssiPzsOm) , 
FLuSVNoPhAFKtLUchSvv(FOcStuqCptsGIZXskVpC) , 
FeVcBgtQmTLtmnNcJGMY(FpguQZSermqZCMRiUfML) , 
puSFZkRJmyuFPfQRswDK(std::pow(2.0f, 
static_cast<float>(layer->getScalingExponent()))) , 
vFNECEAeLZsYsUxvlgqL(std::string{"INT8x4"}.compare(layer->getAccelMode()) 
== 0) , euppfEoiaoCTcVgRPVhA(eqmVWbEcwBRGnVNDUtrG) { 
CUDNN_CALL(cudnnCreatePoolingDescriptor(&lWJYwWaFPmWNQDPrlqER)); 
createAndAddDescriptor(getLayer()->getOutputTensor(0)->getSourcePortIndex()); 
CUDNN_CALL(cudnnCreateTensorDescriptor(&DRzwhbNPpftRRIXXfHzd)); } 
MWMaxPoolingLayerImpl::~MWMaxPoolingLayerImpl() { } void 
MWMaxPoolingLayerImpl::propagateSize() { MWTensorBase* ipTensorBase = 
getLayer()->getInputTensor(0); MWTensorBase* opTensorBase = 
getLayer()->getOutputTensor(0); if ((DCdZnqpcBnvXVgEsLBnz == -1) && 
(DqxLTLaJwwgQqmrtCDuu == -1)) { CufLFODQDXTAPyRqYodN = 
ipTensorBase->getHeight(); DSsxcjIrUgZCKZovyNQf = ipTensorBase->getWidth(); } int 
lXJKIOEATumoVKStGbVy = CGbFsczkgkhjcHoCKzBx; int 
leWFtIPrKkXLixGWBGJW = CZNYmBcNFSZWvaCklqeM; 
CUDNN_CALL(cudnnSetPooling2dDescriptor( lWJYwWaFPmWNQDPrlqER, CUDNN_POOLING_MAX, 
CUDNN_NOT_PROPAGATE_NAN, CufLFODQDXTAPyRqYodN, DSsxcjIrUgZCKZovyNQf, 
lXJKIOEATumoVKStGbVy, leWFtIPrKkXLixGWBGJW, FLuSVNoPhAFKtLUchSvv, 
FeVcBgtQmTLtmnNcJGMY)); cudnnTensorDescriptor_t* desc = 
getDescriptor(opTensorBase->getSourcePortIndex()); assert(desc); if 
(ipTensorBase->isInt8()) { if (vFNECEAeLZsYsUxvlgqL) { 
CUDNN_CALL(cudnnSetTensor4dDescriptor(DRzwhbNPpftRRIXXfHzd, 
CUDNN_TENSOR_NCHW_VECT_C,  CUDNN_DATA_INT8x4,  ipTensorBase->getBatchSize(),  
ipTensorBase->getChannels(),  ipTensorBase->getHeight(),  
ipTensorBase->getWidth())  ); MWCNNLayerImpl::setDescriptorForINT8(*desc, 
static_cast<MWTensor<signed char>*>(opTensorBase), CUDNN_DATA_INT8x4, 
CUDNN_TENSOR_NCHW_VECT_C); } else { CUDNN_CALL(cudnnSetTensor4dDescriptor( 
DRzwhbNPpftRRIXXfHzd, CUDNN_TENSOR_NCHW, CUDNN_DATA_INT8, 
ipTensorBase->getBatchSize(), ipTensorBase->getChannels(), 
ipTensorBase->getHeight(), ipTensorBase->getWidth())); 
MWCNNLayerImpl::setDescriptorForINT8(*desc, static_cast<MWTensor<signed 
char>*>(opTensorBase), CUDNN_DATA_INT8, CUDNN_TENSOR_NCHW); } } else { 
setDescriptor<float>(*desc, static_cast<MWTensor<float>*>(opTensorBase)); } } 
void MWMaxPoolingLayerImpl::allocate() { MWCNNLayer* maxpoolLayer = getLayer(); 
MWTensorBase* ipTensor = maxpoolLayer->getInputTensor(0); MWTensorBase* 
opTensor = maxpoolLayer->getOutputTensor(0); if (BLjrjqvCcCommiXWQLjs) { const 
int dMxIKDGTITyhdLqIHBLA = ipTensor->getNumElements(); CUDA_CALL( 
cudaMalloc((void**)&UVzBVEOIylFjkSgHwFMp, sizeof(float) * 
dMxIKDGTITyhdLqIHBLA)); const int eqUIJyhXTwRqtPfXapcx = 
opTensor->getNumElements(); CUDA_CALL(cudaMalloc((void**)&OwscQfaoXJuSJFwXQahz, 
sizeof(float) * eqUIJyhXTwRqtPfXapcx)); int shEncNmxJsMuJKwbrwok = 
(eqUIJyhXTwRqtPfXapcx < 1024) ? eqUIJyhXTwRqtPfXapcx : 1024; int 
KHClOltUSuqFVVErSxVb = (eqUIJyhXTwRqtPfXapcx + shEncNmxJsMuJKwbrwok - 
1) / shEncNmxJsMuJKwbrwok; 
MWSetDyForBackPropImpl<<<KHClOltUSuqFVVErSxVb, 
shEncNmxJsMuJKwbrwok>>>( OwscQfaoXJuSJFwXQahz, eqUIJyhXTwRqtPfXapcx); } } void 
MWMaxPoolingLayerImpl::deallocate() { if (UVzBVEOIylFjkSgHwFMp) { 
CUDA_FREE_CALL(UVzBVEOIylFjkSgHwFMp); UVzBVEOIylFjkSgHwFMp = 
NULL; } if (OwscQfaoXJuSJFwXQahz) { CUDA_FREE_CALL(OwscQfaoXJuSJFwXQahz); OwscQfaoXJuSJFwXQahz = 
NULL; } } void MWMaxPoolingLayerImpl::predict() { MWCNNLayer* maxpoolLayer = 
getLayer(); MWTensorBase* ipTensorBase = maxpoolLayer->getInputTensor(0); 
MWTensorBase* opTensorBase = maxpoolLayer->getOutputTensor(0); 
cudnnTensorDescriptor_t* desc = 
getDescriptor(opTensorBase->getSourcePortIndex()); assert(desc); 
cudnnTensorDescriptor_t XhAYHFyEVtlwoxGBuTpu; if (opTensorBase->isInt8()) { 
XhAYHFyEVtlwoxGBuTpu = DRzwhbNPpftRRIXXfHzd; MWTensor<signed char>* ipTensor = 
static_cast<MWTensor<signed char>*>(ipTensorBase); MWTensor<signed char>* 
opTensor = static_cast<MWTensor<signed char>*>(opTensorBase); 
CUDNN_CALL(cudnnPoolingForward(*cRtIUoZRPICuQEOZOSzT->getCudnnHandle(), 
lWJYwWaFPmWNQDPrlqER, &puSFZkRJmyuFPfQRswDK, XhAYHFyEVtlwoxGBuTpu, 
ipTensor->getData(), getZeroPtr(), *desc, opTensor->getData())); } else { 
XhAYHFyEVtlwoxGBuTpu = MWCNNLayerImpl::getCuDNNDescriptor(ipTensorBase); 
MWTensor<float>* ipTensor = static_cast<MWTensor<float>*>(ipTensorBase); 
MWTensor<float>* opTensor = static_cast<MWTensor<float>*>(opTensorBase); 
CUDNN_CALL(cudnnPoolingForward(*cRtIUoZRPICuQEOZOSzT->getCudnnHandle(), 
lWJYwWaFPmWNQDPrlqER, getOnePtr(), XhAYHFyEVtlwoxGBuTpu, ipTensor->getData(), 
getZeroPtr(), *desc, opTensor->getData())); if (BLjrjqvCcCommiXWQLjs) { 
CUDNN_CALL(cudnnPoolingBackward( *cRtIUoZRPICuQEOZOSzT->getCudnnHandle(), 
lWJYwWaFPmWNQDPrlqER, getOnePtr(), *desc, opTensor->getData(), *desc, 
OwscQfaoXJuSJFwXQahz, XhAYHFyEVtlwoxGBuTpu, ipTensor->getData(), getZeroPtr(), 
XhAYHFyEVtlwoxGBuTpu, UVzBVEOIylFjkSgHwFMp)); int dMxIKDGTITyhdLqIHBLA = 
ipTensor->getNumElements(); int shEncNmxJsMuJKwbrwok = 
(dMxIKDGTITyhdLqIHBLA < 1024) ? dMxIKDGTITyhdLqIHBLA : 1024; int 
KHClOltUSuqFVVErSxVb = (dMxIKDGTITyhdLqIHBLA + shEncNmxJsMuJKwbrwok - 
1) / shEncNmxJsMuJKwbrwok; 
doMWMaxPoolingLayerImpl<<<KHClOltUSuqFVVErSxVb, 
shEncNmxJsMuJKwbrwok>>>( UVzBVEOIylFjkSgHwFMp, 
static_cast<MWTensor<float>*>(maxpoolLayer->getOutputTensor(1))->getData(), 
dMxIKDGTITyhdLqIHBLA); } } return; } void MWMaxPoolingLayerImpl::cleanup() { 
CUDNN_CALL(cudnnDestroyPoolingDescriptor(lWJYwWaFPmWNQDPrlqER)); MWTensorBase* 
opTensorBase = getLayer()->getOutputTensor(0); if (opTensorBase->isInt8()) { 
CUDNN_CALL(cudnnDestroyTensorDescriptor(DRzwhbNPpftRRIXXfHzd)); } } float* 
MWMaxPoolingLayerImpl::getIndexData() { return 
static_cast<MWTensor<float>*>(getLayer()->getOutputTensor(1))->getData(); } 
void __global__ __launch_bounds__(1024) MWSetDyForBackPropImpl(float* 
OwscQfaoXJuSJFwXQahz, const int eqUIJyhXTwRqtPfXapcx) { for (int i = blockDim.x * 
blockIdx.x + threadIdx.x; i < eqUIJyhXTwRqtPfXapcx; i += blockDim.x * 
gridDim.x) { OwscQfaoXJuSJFwXQahz[i] = i + 1; } } void __global__ 
__launch_bounds__(1024) doMWMaxPoolingLayerImpl(float* 
UVzBVEOIylFjkSgHwFMp, float* URgvgDXnZskIYGdtimcU, const int 
BRSPqxNffoBYKqpSVHne) { for (int i = blockDim.x * blockIdx.x + threadIdx.x; i < 
BRSPqxNffoBYKqpSVHne; i += blockDim.x * gridDim.x) { if 
(static_cast<int>(UVzBVEOIylFjkSgHwFMp[i]) != 0) { 
URgvgDXnZskIYGdtimcU[static_cast<int>(UVzBVEOIylFjkSgHwFMp[i]) - 1] = 
i; } } } } 