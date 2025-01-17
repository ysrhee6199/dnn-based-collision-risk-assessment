#include "MWCudnnCommonHeaders.hpp"
#include "MWCudnnFCLayerImpl.hpp"
#include <vector>
 namespace MWCudnnTarget { MWFCLayerImpl::MWFCLayerImpl(MWCNNLayer* layer, 
MWTargetNetworkImpl* ntwk_impl, int XNZmftADYzuZnIYIpBaT, int 
kNsviQGMPdXzNMRixGWR, const char* xHViLEwTujGGrPZZgmbF, const char* 
JxwPQNPACGfmGpNncpCY) : MWCNNLayerImpl(layer, ntwk_impl) , 
BlRIQPyqJZORKENzSdYf(XNZmftADYzuZnIYIpBaT) , 
BuyZFXzwOMxcePIbCLfl(kNsviQGMPdXzNMRixGWR) , vIWQzNvYZSuxmOTVDFhU(NULL) , 
vpXxoeEhdEosLSsYXkNG(NULL) , IwKnaBoXVubIRYcxEJLH(NULL) , 
xHiBGayUfxIpXKkCTDNU(false) { 
CUDNN_CALL(cudnnCreateTensorDescriptor(&JsZenQeBPMhwsyEhVHiD)); 
createAndAddDescriptor(getLayer()->getOutputTensor(0)->getSourcePortIndex()); 
CUDA_CALL(cudaMalloc((void**)&vIWQzNvYZSuxmOTVDFhU, sizeof(float) * 
BlRIQPyqJZORKENzSdYf * BuyZFXzwOMxcePIbCLfl)); 
CUDA_CALL(cudaMalloc((void**)&IwKnaBoXVubIRYcxEJLH, sizeof(float) * 
BuyZFXzwOMxcePIbCLfl)); vpXxoeEhdEosLSsYXkNG = 
MALLOC_CALL(sizeof(float) * BlRIQPyqJZORKENzSdYf * 
BuyZFXzwOMxcePIbCLfl); loadWeights(xHViLEwTujGGrPZZgmbF); 
loadBias(JxwPQNPACGfmGpNncpCY); } MWFCLayerImpl::~MWFCLayerImpl() { } void 
MWFCLayerImpl::propagateSize() { MWCNNLayer* fcLayer = getLayer(); 
MWTensorBase* opTensor = fcLayer->getOutputTensor(0); cudnnTensorDescriptor_t* 
desc = getDescriptor(opTensor->getSourcePortIndex()); assert(desc); 
setDescriptor<float>(*desc, static_cast<MWTensor<float>*>(opTensor)); if 
(opTensor->getSequenceLength() == 1) { 
CUDNN_CALL(cudnnSetTensor4dDescriptor(JsZenQeBPMhwsyEhVHiD, CUDNN_TENSOR_NCHW, 
CUDNN_DATA_FLOAT, 1, BuyZFXzwOMxcePIbCLfl, 1, 1)); } else { int dims[5] 
= {1, 1, BuyZFXzwOMxcePIbCLfl, 1, 1}; int strides[5]; 
MWTensorBase::getStrides(dims, 5, strides); CUDNN_CALL( 
cudnnSetTensorNdDescriptor(JsZenQeBPMhwsyEhVHiD, CUDNN_DATA_FLOAT, 5, dims, 
strides)); } } void MWFCLayerImpl::loadWeights(const char* PtRNGuserCxHAQfyEjFc) 
{ FILE* QTXuPiGKeBUnmRzhlIDp = MWCNNLayer::openBinaryFile(PtRNGuserCxHAQfyEjFc); 
assert(QTXuPiGKeBUnmRzhlIDp); int cnEykmOGhLuyKuadExWe = BlRIQPyqJZORKENzSdYf * 
BuyZFXzwOMxcePIbCLfl;  MWCNNLayer::call_fread(vpXxoeEhdEosLSsYXkNG, 
sizeof(float), cnEykmOGhLuyKuadExWe, QTXuPiGKeBUnmRzhlIDp, PtRNGuserCxHAQfyEjFc); 
fclose(QTXuPiGKeBUnmRzhlIDp); } void MWFCLayerImpl::prepareWeights(float* 
wqggPBXZvtlxnxwngvAq) { int cnEykmOGhLuyKuadExWe = BlRIQPyqJZORKENzSdYf * 
BuyZFXzwOMxcePIbCLfl; MWCNNLayer* fcLayer = getLayer(); MWTensorBase* 
ipTensor = fcLayer->getInputTensor(0); if (ipTensor->getHeight() != 1 && 
ipTensor->getWidth() != 1) { float* KZWeXiYFmdpQdsgidKeG = 
MALLOC_CALL(sizeof(float) * ipTensor->getHeight() * ipTensor->getWidth()); for 
(int k = 0; k < cnEykmOGhLuyKuadExWe / ipTensor->getHeight() / ipTensor->getWidth(); 
k++) { for (int i = 0; i < ipTensor->getHeight() * ipTensor->getWidth(); i++) 
KZWeXiYFmdpQdsgidKeG[i] = wqggPBXZvtlxnxwngvAq[k * ipTensor->getHeight() * 
ipTensor->getWidth() + i]; for (int j = 0; j < ipTensor->getHeight(); j++) for 
(int i = 0; i < ipTensor->getWidth(); i++) wqggPBXZvtlxnxwngvAq[k * 
ipTensor->getHeight() * ipTensor->getWidth() + j * ipTensor->getWidth() + i] = 
KZWeXiYFmdpQdsgidKeG[j + i * ipTensor->getHeight()]; } free(KZWeXiYFmdpQdsgidKeG); } 
CUDA_CALL(cudaMemcpy(vIWQzNvYZSuxmOTVDFhU, wqggPBXZvtlxnxwngvAq, sizeof(float) * 
cnEykmOGhLuyKuadExWe, cudaMemcpyHostToDevice)); } void MWFCLayerImpl::loadBias(const 
char* PtRNGuserCxHAQfyEjFc) { MWCNNLayer* fcLayer = getLayer(); MWTensorBase* 
opTensor = fcLayer->getOutputTensor(0); FILE* QTXuPiGKeBUnmRzhlIDp = 
MWCNNLayer::openBinaryFile(PtRNGuserCxHAQfyEjFc); assert(QTXuPiGKeBUnmRzhlIDp); int 
cnEykmOGhLuyKuadExWe = BuyZFXzwOMxcePIbCLfl;  float* KZWeXiYFmdpQdsgidKeG = 
MALLOC_CALL(sizeof(float) * cnEykmOGhLuyKuadExWe); 
MWCNNLayer::call_fread(KZWeXiYFmdpQdsgidKeG, sizeof(float), cnEykmOGhLuyKuadExWe, 
QTXuPiGKeBUnmRzhlIDp, PtRNGuserCxHAQfyEjFc); CUDA_CALL(cudaMemcpy(IwKnaBoXVubIRYcxEJLH, 
KZWeXiYFmdpQdsgidKeG, sizeof(float) * cnEykmOGhLuyKuadExWe, cudaMemcpyHostToDevice)); 
free(KZWeXiYFmdpQdsgidKeG); fclose(QTXuPiGKeBUnmRzhlIDp); } void 
MWFCLayerImpl::setLearnables(std::vector<float*> learnables) { 
assert(learnables.size() == 2); float* wqggPBXZvtlxnxwngvAq = learnables[0]; 
prepareWeights(wqggPBXZvtlxnxwngvAq); float* JgLfgHrHMEMmMYTettJF = learnables[1]; 
CUDA_CALL(cudaMemcpy(IwKnaBoXVubIRYcxEJLH, JgLfgHrHMEMmMYTettJF, sizeof(float) * 
BuyZFXzwOMxcePIbCLfl, cudaMemcpyHostToDevice)); } void 
MWFCLayerImpl::postSetup() { if (!xHiBGayUfxIpXKkCTDNU) { 
prepareWeights(vpXxoeEhdEosLSsYXkNG); free(vpXxoeEhdEosLSsYXkNG); 
vpXxoeEhdEosLSsYXkNG = NULL; xHiBGayUfxIpXKkCTDNU = true; } } void 
MWFCLayerImpl::predict() { MWCNNLayer* fcLayer = getLayer(); MWTensorBase* 
ipTensorBase = fcLayer->getInputTensor(0); MWTensorBase* opTensorBase = 
fcLayer->getOutputTensor(0); MWTensor<float>* ipTensor = 
static_cast<MWTensor<float>*>(ipTensorBase); MWTensor<float>* opTensor = 
static_cast<MWTensor<float>*>(opTensorBase); int numOutputRows = 
opTensor->getChannels(); int numOutputCols = ipTensor->getBatchSize() * 
ipTensor->getSequenceLength(); int innerDimension = ipTensor->getHeight() * 
ipTensor->getWidth() * ipTensor->getChannels(); int UEESbUvbMihFnquvuFij = 1; int 
UKtMXCCqdjeyaVHabkxg = 1; if (opTensor->getBatchSize() == 1 && 
opTensor->getSequenceLength() == 1) { CUDA_CALL(cudaMemcpy(opTensor->getData(), 
IwKnaBoXVubIRYcxEJLH, sizeof(float) * numOutputRows, cudaMemcpyDeviceToDevice)); 
CUBLAS_CALL(cublasSgemv(*cRtIUoZRPICuQEOZOSzT->getCublasHandle(), CUBLAS_OP_T, 
innerDimension, numOutputRows, getOnePtr(), vIWQzNvYZSuxmOTVDFhU, innerDimension, 
ipTensor->getData(), UEESbUvbMihFnquvuFij, getOnePtr(), opTensor->getData(), 
UKtMXCCqdjeyaVHabkxg)); } else { 
CUBLAS_CALL(cublasSgemm(*cRtIUoZRPICuQEOZOSzT->getCublasHandle(), CUBLAS_OP_T, 
CUBLAS_OP_N, numOutputRows, numOutputCols, innerDimension, getOnePtr(), 
vIWQzNvYZSuxmOTVDFhU, innerDimension, ipTensor->getData(), innerDimension, 
getZeroPtr(), opTensor->getData(), numOutputRows)); cudnnTensorDescriptor_t* 
desc = getDescriptor(opTensor->getSourcePortIndex()); assert(desc); 
CUDNN_CALL(cudnnAddTensor(*cRtIUoZRPICuQEOZOSzT->getCudnnHandle(), getOnePtr(), 
JsZenQeBPMhwsyEhVHiD, IwKnaBoXVubIRYcxEJLH, getOnePtr(), *desc, opTensor->getData())); } 
return; } void MWFCLayerImpl::cleanup() { if (vIWQzNvYZSuxmOTVDFhU) { 
CUDA_FREE_CALL(vIWQzNvYZSuxmOTVDFhU); vIWQzNvYZSuxmOTVDFhU = NULL; } 
CUDNN_CALL(cudnnDestroyTensorDescriptor(JsZenQeBPMhwsyEhVHiD)); if 
(IwKnaBoXVubIRYcxEJLH) { CUDA_FREE_CALL(IwKnaBoXVubIRYcxEJLH); IwKnaBoXVubIRYcxEJLH = NULL; } } } 