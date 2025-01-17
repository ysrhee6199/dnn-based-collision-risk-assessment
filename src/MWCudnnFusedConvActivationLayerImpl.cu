#include "MWCudnnCommonHeaders.hpp"
#include "MWCudnnFusedConvActivationLayerImpl.hpp"
#include <cassert>
#include <cstdio>
#include <vector>
 namespace MWCudnnTarget { 
MWFusedConvActivationLayerImpl::MWFusedConvActivationLayerImpl( MWCNNLayer* 
layer, MWTargetNetworkImpl* ntwk_impl, int filt_H, int filt_W, int numGrps, int 
numChnls, int numFilts, int FOcStuqCptsGIZXskVpC, int 
FpguQZSermqZCMRiUfML, int CTCbzQMDaLxINPbODdng, int 
CLOUhPjbgggWoXHTtmjC, int CpMjJjtGOeWOzwxpAAQP, int 
CqtPRJvHlGJFssiPzsOm, int AdmgfUbRAfzFeYHxSnQr, int 
AwZQzUhuWVLGrWgLHRuM, int enPbWLzEmxYCBmzGJutZ, const char* 
xHViLEwTujGGrPZZgmbF, const char* JxwPQNPACGfmGpNncpCY, double , 
MWActivationFunctionType::ACTIVATION_FCN_ENUM GZGFVDrXwFLJleoTDywO) : 
MWCNNLayerImpl(layer, ntwk_impl) , vIWQzNvYZSuxmOTVDFhU(NULL) , IwKnaBoXVubIRYcxEJLH(NULL) , 
TxNFOfYScyqGlEFFxbAv(NULL) , XCLDbxHBtWRStETWIkId(NULL) , 
FshVHIJMRAhtQirYPlZd(NULL) , HgeIbZCtKXtKFOEtSlPZ(NULL) , 
AzTsxYcYjIEJsGQbeYHm(filt_H) , BHuHNDGoRwGRouCxeMbw(filt_W) , 
BkwhtPQUCQKchmmimoXs(numGrps) , BUOdotSvmFyUWQKMUdra(numChnls) , 
BdqURaHPmdnfzvtUvocl(numFilts) , FLuSVNoPhAFKtLUchSvv(FOcStuqCptsGIZXskVpC) , 
FeVcBgtQmTLtmnNcJGMY(FpguQZSermqZCMRiUfML) , 
CGbFsczkgkhjcHoCKzBx(CTCbzQMDaLxINPbODdng) , 
CDJtexcMbXMWAmnNZsNf(CLOUhPjbgggWoXHTtmjC) , 
CZNYmBcNFSZWvaCklqeM(CpMjJjtGOeWOzwxpAAQP) , 
ClEhcJFlvGCgiavziIag(CqtPRJvHlGJFssiPzsOm) , 
AVeZfqOFypgpiqfRYlKc(AdmgfUbRAfzFeYHxSnQr) , 
AuqaQHxmPQSyYRemQvyX(AwZQzUhuWVLGrWgLHRuM) , 
fSbUUBgjKRbNXrHrlOLo(enPbWLzEmxYCBmzGJutZ) , 
IAlDgIFcchbwRGBSfVfA((CGbFsczkgkhjcHoCKzBx != CDJtexcMbXMWAmnNZsNf) 
|| (CZNYmBcNFSZWvaCklqeM != ClEhcJFlvGCgiavziIag)) { if 
(GZGFVDrXwFLJleoTDywO != 
MWActivationFunctionType::ACTIVATION_FCN_ENUM::RELU) { assert(false); }
#if (CUDNN_MAJOR < 6)
 throw std::runtime_error("Fused ConvReLU Layer only supported for cuDNN 6 or greater");
#else
 cRtIUoZRPICuQEOZOSzT = ntwk_impl; 
CUDNN_CALL(cudnnCreateConvolutionDescriptor(&NMMfJylfQjiIUAKhXCJb)); 
CUDNN_CALL(cudnnCreateFilterDescriptor(&QMNXyOvXaZDsCpiIJPsn)); 
CUDNN_CALL(cudnnCreateTensorDescriptor(&JsZenQeBPMhwsyEhVHiD)); 
CUDNN_CALL(cudnnCreateActivationDescriptor(&muwRQxtWMMXAPxSuMYBw)); 
MWTensorBase* ipTensor_conv = getLayer()->getInputTensor(0); int 
NNhshzQGJHLSGjDiVerE = CGbFsczkgkhjcHoCKzBx; int 
NXruhrCCiguRjAgSNDuz = CZNYmBcNFSZWvaCklqeM; if 
(IAlDgIFcchbwRGBSfVfA) { NNhshzQGJHLSGjDiVerE = 0; 
NXruhrCCiguRjAgSNDuz = 0; TxNFOfYScyqGlEFFxbAv = new MWTensor<float>(-1, 
-1, -1, -1, -1, NULL, getLayer(), ipTensor_conv->getDataFormat(), 0); if 
(!TxNFOfYScyqGlEFFxbAv) { MWCNNLayerImpl::throwAllocationError(__LINE__, 
__FILE__); } CUDNN_CALL(cudnnCreateTensorDescriptor(&XhAYHFyEVtlwoxGBuTpu)); } 
else { TxNFOfYScyqGlEFFxbAv = ipTensor_conv; } assert(TxNFOfYScyqGlEFFxbAv != 
NULL); bLhHPDtQpqOAnMiVledO = CGbFsczkgkhjcHoCKzBx; bQjijJlpNAVdwDDQgpaX = 
CZNYmBcNFSZWvaCklqeM; CUDNN_CALL(cudnnSetConvolution2dDescriptor( 
NMMfJylfQjiIUAKhXCJb, NNhshzQGJHLSGjDiVerE, 
NXruhrCCiguRjAgSNDuz, FLuSVNoPhAFKtLUchSvv, FeVcBgtQmTLtmnNcJGMY, 
AVeZfqOFypgpiqfRYlKc, AuqaQHxmPQSyYRemQvyX, 
CUDNN_CROSS_CORRELATION, CUDNN_DATA_FLOAT));
#if (FP16_ENABLED == 1 && (CUDNN_MAJOR > 7 || (CUDNN_MAJOR == 7 && CUDNN_MINOR >= 2)))
 CUDNN_CALL( cudnnSetConvolutionMathType(NMMfJylfQjiIUAKhXCJb, CUDNN_TENSOR_OP_MATH_ALLOW_CONVERSION));
#endif
 if (BkwhtPQUCQKchmmimoXs > 1) { 
CUDNN_CALL(cudnnSetConvolutionGroupCount(NMMfJylfQjiIUAKhXCJb, 
BkwhtPQUCQKchmmimoXs)); } 
CUDNN_CALL(cudnnSetActivationDescriptor(muwRQxtWMMXAPxSuMYBw, 
CUDNN_ACTIVATION_RELU, CUDNN_NOT_PROPAGATE_NAN, 0)); int 
edQOkUJIZbwzEeIcCLzG = BUOdotSvmFyUWQKMUdra * BkwhtPQUCQKchmmimoXs; 
int etjQLJVQCaeAXRWYtqOl = BdqURaHPmdnfzvtUvocl * 
BkwhtPQUCQKchmmimoXs; 
CUDNN_CALL(cudnnSetFilter4dDescriptor(QMNXyOvXaZDsCpiIJPsn, CUDNN_DATA_FLOAT, 
CUDNN_TENSOR_NCHW, etjQLJVQCaeAXRWYtqOl, edQOkUJIZbwzEeIcCLzG / 
BkwhtPQUCQKchmmimoXs, AzTsxYcYjIEJsGQbeYHm, BHuHNDGoRwGRouCxeMbw)); 
CUDNN_CALL(cudnnSetTensor4dDescriptor(JsZenQeBPMhwsyEhVHiD, CUDNN_TENSOR_NCHW, 
CUDNN_DATA_FLOAT, 1, etjQLJVQCaeAXRWYtqOl, 1, 1)); int weightSize = 
BUOdotSvmFyUWQKMUdra * etjQLJVQCaeAXRWYtqOl * AzTsxYcYjIEJsGQbeYHm 
* BHuHNDGoRwGRouCxeMbw; CUDA_CALL(cudaMalloc((void**)&vIWQzNvYZSuxmOTVDFhU, 
sizeof(float) * weightSize)); CUDA_CALL(cudaMalloc((void**)&IwKnaBoXVubIRYcxEJLH, 
sizeof(float) * etjQLJVQCaeAXRWYtqOl)); 
loadWeights(xHViLEwTujGGrPZZgmbF); loadBias(JxwPQNPACGfmGpNncpCY); createAndAddDescriptor(getLayer()->getOutputTensor(0)->getSourcePortIndex());
#endif
 } MWFusedConvActivationLayerImpl::~MWFusedConvActivationLayerImpl() { } void 
MWFusedConvActivationLayerImpl::propagateSize() {
#if (CUDNN_MAJOR >= 6)
 MWTensorBase* ipTensor_conv = getLayer()->getInputTensor(0); int inputH; int 
inputW; if (IAlDgIFcchbwRGBSfVfA) { inputH = 
ipTensor_conv->getHeight() + CGbFsczkgkhjcHoCKzBx + CDJtexcMbXMWAmnNZsNf; 
inputW = ipTensor_conv->getWidth() + CZNYmBcNFSZWvaCklqeM + 
ClEhcJFlvGCgiavziIag; } else { inputH = ipTensor_conv->getHeight(); inputW = 
ipTensor_conv->getWidth(); } TxNFOfYScyqGlEFFxbAv->setHeight(inputH); 
TxNFOfYScyqGlEFFxbAv->setWidth(inputW); 
TxNFOfYScyqGlEFFxbAv->setChannels(ipTensor_conv->getChannels()); 
TxNFOfYScyqGlEFFxbAv->setBatchSize(ipTensor_conv->getBatchSize()); 
TxNFOfYScyqGlEFFxbAv->setSequenceLength(ipTensor_conv->getSequenceLength()); 
assert(TxNFOfYScyqGlEFFxbAv->getSequenceLength() == 1); if 
(IAlDgIFcchbwRGBSfVfA) { CUDNN_CALL(cudnnSetTensor4dDescriptor( 
XhAYHFyEVtlwoxGBuTpu, CUDNN_TENSOR_NCHW, CUDNN_DATA_FLOAT, 
TxNFOfYScyqGlEFFxbAv->getBatchSize(), TxNFOfYScyqGlEFFxbAv->getChannels(), 
TxNFOfYScyqGlEFFxbAv->getHeight(), TxNFOfYScyqGlEFFxbAv->getWidth())); } else { 
XhAYHFyEVtlwoxGBuTpu = MWCNNLayerImpl::getCuDNNDescriptor(TxNFOfYScyqGlEFFxbAv); } 
assert(BUOdotSvmFyUWQKMUdra == TxNFOfYScyqGlEFFxbAv->getChannels() / 
BkwhtPQUCQKchmmimoXs); MWTensorBase* opTensor = getLayer()->getOutputTensor(0); 
cudnnTensorDescriptor_t* desc = getDescriptor(opTensor->getSourcePortIndex()); 
assert(desc); setDescriptor<float>(*desc, static_cast<MWTensor<float>*>(opTensor));
#if (CUDNN_MAJOR < 7)
 { CUDNN_CALL(cudnnGetConvolutionForwardAlgorithm( 
*cRtIUoZRPICuQEOZOSzT->getCudnnHandle(), XhAYHFyEVtlwoxGBuTpu, 
QMNXyOvXaZDsCpiIJPsn, NMMfJylfQjiIUAKhXCJb, *desc, 
CUDNN_CONVOLUTION_FWD_PREFER_FASTEST, 0, &NDjzAZSYJuWymuKDNZYB)); }
#else
 { const int maxAlgoCount(3); int returnedAlgoCount(-1); 
cudnnConvolutionFwdAlgoPerf_t perf_results[maxAlgoCount]; 
CUDNN_CALL(cudnnGetConvolutionForwardAlgorithm_v7( 
*cRtIUoZRPICuQEOZOSzT->getCudnnHandle(), XhAYHFyEVtlwoxGBuTpu, 
QMNXyOvXaZDsCpiIJPsn, NMMfJylfQjiIUAKhXCJb, *desc, maxAlgoCount, 
&returnedAlgoCount, perf_results)); NDjzAZSYJuWymuKDNZYB = perf_results[0].algo; }
#endif
 if (CUDNN_VERSION < 7402) fixConvAlgo(); size_t sxuOMwKXOKfuExclRaSe = 0; 
CUDNN_CALL(cudnnGetConvolutionForwardWorkspaceSize( 
*cRtIUoZRPICuQEOZOSzT->getCudnnHandle(), XhAYHFyEVtlwoxGBuTpu, 
QMNXyOvXaZDsCpiIJPsn, NMMfJylfQjiIUAKhXCJb, *desc, NDjzAZSYJuWymuKDNZYB, 
&sxuOMwKXOKfuExclRaSe)); if (sxuOMwKXOKfuExclRaSe > 
*cRtIUoZRPICuQEOZOSzT->getProposedWorkSpaceSize()) { 
cRtIUoZRPICuQEOZOSzT->setProposedWorkSpaceSize(sxuOMwKXOKfuExclRaSe); }
#endif
 } void MWFusedConvActivationLayerImpl::allocate() { MWTensorBase* 
ipTensor_conv = getLayer()->getInputTensor(0); if 
(IAlDgIFcchbwRGBSfVfA) { float* newInput; int inputH = 
ipTensor_conv->getHeight() + CGbFsczkgkhjcHoCKzBx + CDJtexcMbXMWAmnNZsNf; int 
inputW = ipTensor_conv->getWidth() + CZNYmBcNFSZWvaCklqeM + 
ClEhcJFlvGCgiavziIag; int paddedSize = ipTensor_conv->getBatchSize() * 
ipTensor_conv->getChannels() * inputH * inputW; 
CUDA_CALL(cudaMalloc((void**)&newInput, sizeof(float) * paddedSize)); 
CUDA_CALL(cudaMemset(newInput, 0, sizeof(float) * paddedSize)); 
static_cast<MWTensor<float>*>(TxNFOfYScyqGlEFFxbAv)->setData(newInput); } 
XCLDbxHBtWRStETWIkId = 
static_cast<MWTensor<float>*>(getLayer()->getOutputTensor(0))->getData(); 
setalpha2Ptr(getZeroPtr()); int numInputs = getLayer()->getNumInputs(); if 
(numInputs == 2) { setalpha2Ptr(getOnePtr()); XCLDbxHBtWRStETWIkId = 
static_cast<MWTensor<float>*>(getLayer()->getInputTensor(1))->getData(); } if 
(static_cast<MWTensor<float>*>(TxNFOfYScyqGlEFFxbAv)->getData() == 
XCLDbxHBtWRStETWIkId) { int xInputTensorSize = 
getLayer()->getInputTensor(0)->getNumElements(); CUDA_CALL( 
cudaMalloc((void**)&FshVHIJMRAhtQirYPlZd, sizeof(float) * 
xInputTensorSize)); } } void MWFusedConvActivationLayerImpl::deallocate() { if 
(TxNFOfYScyqGlEFFxbAv != getLayer()->getInputTensor(0)) { 
assert(IAlDgIFcchbwRGBSfVfA); 
CUDA_FREE_CALL(static_cast<MWTensor<float>*>(TxNFOfYScyqGlEFFxbAv)->getData()); 
static_cast<MWTensor<float>*>(TxNFOfYScyqGlEFFxbAv)->setData((float*)NULL); } if 
(FshVHIJMRAhtQirYPlZd) { CUDA_FREE_CALL(FshVHIJMRAhtQirYPlZd); 
FshVHIJMRAhtQirYPlZd = NULL; } } void 
MWFusedConvActivationLayerImpl::predict() { MWCNNLayer* fusedConvReluLayer = 
getLayer(); MWTensorBase* ipTensorBase = fusedConvReluLayer->getInputTensor(); 
MWTensorBase* opTensorBase = fusedConvReluLayer->getOutputTensor(); 
MWTensor<float>* ipTensor = static_cast<MWTensor<float>*>(ipTensorBase); 
MWTensor<float>* opTensor = static_cast<MWTensor<float>*>(opTensorBase); if 
(TxNFOfYScyqGlEFFxbAv != fusedConvReluLayer->getInputTensor()) { 
CUDA_CALL(cudaMemset(static_cast<MWTensor<float>*>(TxNFOfYScyqGlEFFxbAv)->getData(), 
0, sizeof(float) * TxNFOfYScyqGlEFFxbAv->getNumElements())); 
MWCNNLayerImpl::padInput(ipTensor->getData(), ipTensor->getHeight(), 
ipTensor->getWidth(), ipTensor->getChannels(), TxNFOfYScyqGlEFFxbAv->getHeight(), 
TxNFOfYScyqGlEFFxbAv->getWidth(), bLhHPDtQpqOAnMiVledO, bQjijJlpNAVdwDDQgpaX, 
static_cast<MWTensor<float>*>(TxNFOfYScyqGlEFFxbAv)->getData(), 
ipTensor->getNumElements()); } cudnnTensorDescriptor_t* desc = 
getDescriptor(opTensor->getSourcePortIndex()); assert(desc);
#if (CUDNN_MAJOR >= 6)
 assert(opTensor->getData() != 
static_cast<MWTensor<float>*>(TxNFOfYScyqGlEFFxbAv)->getData() || 
(getLayer()->getNumInputs() == 2)); float* pzUAoBDvaKAtdsmkQuct; if 
(static_cast<MWTensor<float>*>(TxNFOfYScyqGlEFFxbAv)->getData() == 
XCLDbxHBtWRStETWIkId) { CUDA_CALL(cudaMemcpy(FshVHIJMRAhtQirYPlZd, 
static_cast<MWTensor<float>*>(TxNFOfYScyqGlEFFxbAv)->getData(), sizeof(float) * 
opTensorBase->getNumElements(), cudaMemcpyDeviceToDevice)); 
pzUAoBDvaKAtdsmkQuct = FshVHIJMRAhtQirYPlZd; } else { 
pzUAoBDvaKAtdsmkQuct = 
static_cast<MWTensor<float>*>(TxNFOfYScyqGlEFFxbAv)->getData(); } 
CUDNN_CALL(cudnnConvolutionBiasActivationForward( 
*cRtIUoZRPICuQEOZOSzT->getCudnnHandle(), getOnePtr(), XhAYHFyEVtlwoxGBuTpu, 
pzUAoBDvaKAtdsmkQuct, QMNXyOvXaZDsCpiIJPsn, vIWQzNvYZSuxmOTVDFhU, 
NMMfJylfQjiIUAKhXCJb, NDjzAZSYJuWymuKDNZYB, cRtIUoZRPICuQEOZOSzT->getWorkSpace(), 
*cRtIUoZRPICuQEOZOSzT->getAllocatedWorkSpaceSize(), getalpha2Ptr(),  *desc,  
XCLDbxHBtWRStETWIkId,  JsZenQeBPMhwsyEhVHiD, IwKnaBoXVubIRYcxEJLH, muwRQxtWMMXAPxSuMYBw, 
*desc, opTensor->getData()));
#endif
 } void MWFusedConvActivationLayerImpl::cleanup() { 
CUDNN_CALL(cudnnDestroyConvolutionDescriptor(NMMfJylfQjiIUAKhXCJb)); 
CUDNN_CALL(cudnnDestroyFilterDescriptor(QMNXyOvXaZDsCpiIJPsn)); 
CUDNN_CALL(cudnnDestroyActivationDescriptor(muwRQxtWMMXAPxSuMYBw)); if 
(vIWQzNvYZSuxmOTVDFhU) { CUDA_FREE_CALL(vIWQzNvYZSuxmOTVDFhU); vIWQzNvYZSuxmOTVDFhU = NULL; } 
CUDNN_CALL(cudnnDestroyTensorDescriptor(JsZenQeBPMhwsyEhVHiD)); if 
(IwKnaBoXVubIRYcxEJLH) { CUDA_FREE_CALL(IwKnaBoXVubIRYcxEJLH); IwKnaBoXVubIRYcxEJLH = NULL; } if 
(TxNFOfYScyqGlEFFxbAv != getLayer()->getInputTensor(0)) { 
assert(IAlDgIFcchbwRGBSfVfA); 
CUDNN_CALL(cudnnDestroyTensorDescriptor(XhAYHFyEVtlwoxGBuTpu)); } } void 
MWFusedConvActivationLayerImpl::loadWeights(const char* PtRNGuserCxHAQfyEjFc) { 
FILE* QTXuPiGKeBUnmRzhlIDp = MWCNNLayer::openBinaryFile(PtRNGuserCxHAQfyEjFc); 
assert(QTXuPiGKeBUnmRzhlIDp); int cnEykmOGhLuyKuadExWe = BUOdotSvmFyUWQKMUdra * 
BkwhtPQUCQKchmmimoXs * BdqURaHPmdnfzvtUvocl * AzTsxYcYjIEJsGQbeYHm * 
BHuHNDGoRwGRouCxeMbw;  float* KZWeXiYFmdpQdsgidKeG = MALLOC_CALL(sizeof(float) * 
cnEykmOGhLuyKuadExWe); MWCNNLayer::call_fread(KZWeXiYFmdpQdsgidKeG, sizeof(float), 
cnEykmOGhLuyKuadExWe, QTXuPiGKeBUnmRzhlIDp, PtRNGuserCxHAQfyEjFc); 
CUDA_CALL(cudaMemcpy(vIWQzNvYZSuxmOTVDFhU, KZWeXiYFmdpQdsgidKeG, sizeof(float) * 
cnEykmOGhLuyKuadExWe, cudaMemcpyHostToDevice));
#if 0
 printf("%s loaded. Size = %d. %f\n", PtRNGuserCxHAQfyEjFc, cnEykmOGhLuyKuadExWe, KZWeXiYFmdpQdsgidKeG[0]);
#endif
 free(KZWeXiYFmdpQdsgidKeG); fclose(QTXuPiGKeBUnmRzhlIDp); return; } void 
MWFusedConvActivationLayerImpl::loadBias(const char* PtRNGuserCxHAQfyEjFc) { 
FILE* QTXuPiGKeBUnmRzhlIDp = MWCNNLayer::openBinaryFile(PtRNGuserCxHAQfyEjFc); 
assert(QTXuPiGKeBUnmRzhlIDp); int cnEykmOGhLuyKuadExWe = BkwhtPQUCQKchmmimoXs * 
BdqURaHPmdnfzvtUvocl;  float* KZWeXiYFmdpQdsgidKeG = MALLOC_CALL(sizeof(float) * 
cnEykmOGhLuyKuadExWe); MWCNNLayer::call_fread(KZWeXiYFmdpQdsgidKeG, sizeof(float), 
cnEykmOGhLuyKuadExWe, QTXuPiGKeBUnmRzhlIDp, PtRNGuserCxHAQfyEjFc); 
CUDA_CALL(cudaMemcpy(IwKnaBoXVubIRYcxEJLH, KZWeXiYFmdpQdsgidKeG, sizeof(float) * 
cnEykmOGhLuyKuadExWe, cudaMemcpyHostToDevice)); free(KZWeXiYFmdpQdsgidKeG); 
fclose(QTXuPiGKeBUnmRzhlIDp); return; } void 
MWFusedConvActivationLayerImpl::setLearnables(std::vector<float*> learnables) { 
assert(learnables.size() == 2); int cnEykmOGhLuyKuadExWe = BUOdotSvmFyUWQKMUdra * 
BdqURaHPmdnfzvtUvocl * BkwhtPQUCQKchmmimoXs * AzTsxYcYjIEJsGQbeYHm * 
BHuHNDGoRwGRouCxeMbw;  float* wqggPBXZvtlxnxwngvAq = learnables[0]; 
CUDA_CALL(cudaMemcpy(vIWQzNvYZSuxmOTVDFhU, wqggPBXZvtlxnxwngvAq, sizeof(float) * 
cnEykmOGhLuyKuadExWe, cudaMemcpyHostToDevice)); cnEykmOGhLuyKuadExWe = 
BdqURaHPmdnfzvtUvocl * BkwhtPQUCQKchmmimoXs;  float* JgLfgHrHMEMmMYTettJF = 
learnables[1]; CUDA_CALL(cudaMemcpy(IwKnaBoXVubIRYcxEJLH, JgLfgHrHMEMmMYTettJF, 
sizeof(float) * cnEykmOGhLuyKuadExWe, cudaMemcpyHostToDevice)); } void 
MWFusedConvActivationLayerImpl::postSetup() { if 
(cRtIUoZRPICuQEOZOSzT->getAutoTune()) { getConvAlgoTuned(); } else { 
getConvAlgoWorkSpaceLimit(); } } void 
MWFusedConvActivationLayerImpl::getConvAlgoTuned() { MWTensorBase* opTensorBase 
= getLayer()->getOutputTensor(0); MWTensor<float>* opTensor = 
static_cast<MWTensor<float>*>(opTensorBase); cudnnConvolutionFwdAlgoPerf_t 
perf_results[3]; cudnnTensorDescriptor_t* desc = 
getDescriptor(getLayer()->getOutputTensor()->getSourcePortIndex()); 
assert(desc); int returnedAlgoCount; 
CUDNN_CALL(cudnnFindConvolutionForwardAlgorithmEx( 
*cRtIUoZRPICuQEOZOSzT->getCudnnHandle(), XhAYHFyEVtlwoxGBuTpu, 
static_cast<MWTensor<float>*>(TxNFOfYScyqGlEFFxbAv)->getData(), 
QMNXyOvXaZDsCpiIJPsn, vIWQzNvYZSuxmOTVDFhU, NMMfJylfQjiIUAKhXCJb, *desc, 
opTensor->getData(), 3, &returnedAlgoCount, &perf_results[0], 
cRtIUoZRPICuQEOZOSzT->getWorkSpace(), 
*cRtIUoZRPICuQEOZOSzT->getAllocatedWorkSpaceSize())); NDjzAZSYJuWymuKDNZYB = 
perf_results[0].algo; if (CUDNN_VERSION < 7402) fixConvAlgo(); } void 
MWFusedConvActivationLayerImpl::getConvAlgoWorkSpaceLimit() { 
cudnnTensorDescriptor_t* desc = 
getDescriptor(getLayer()->getOutputTensor()->getSourcePortIndex()); assert(desc);
#if (CUDNN_MAJOR < 8)
 CUDNN_CALL(cudnnGetConvolutionForwardAlgorithm( 
*cRtIUoZRPICuQEOZOSzT->getCudnnHandle(), XhAYHFyEVtlwoxGBuTpu, 
QMNXyOvXaZDsCpiIJPsn, NMMfJylfQjiIUAKhXCJb, *desc, 
CUDNN_CONVOLUTION_FWD_SPECIFY_WORKSPACE_LIMIT, 
*cRtIUoZRPICuQEOZOSzT->getAllocatedWorkSpaceSize(), &NDjzAZSYJuWymuKDNZYB));
#else
 int maxAlgoCount(-1); 
CUDNN_CALL(cudnnGetConvolutionForwardAlgorithmMaxCount(*cRtIUoZRPICuQEOZOSzT->getCudnnHandle(), 
&maxAlgoCount)); int returnedAlgoCount(-1); 
std::vector<cudnnConvolutionFwdAlgoPerf_t> perf_results(maxAlgoCount); 
CUDNN_CALL(cudnnGetConvolutionForwardAlgorithm_v7( 
*cRtIUoZRPICuQEOZOSzT->getCudnnHandle(), XhAYHFyEVtlwoxGBuTpu, 
QMNXyOvXaZDsCpiIJPsn, NMMfJylfQjiIUAKhXCJb, *desc, maxAlgoCount, 
&returnedAlgoCount, &perf_results[0])); cudnnConvolutionFwdAlgoPerf_t 
nextFastest; bool algoFound(false); for (int i = 0; i < returnedAlgoCount; ++i) 
{ nextFastest = perf_results[i]; if (nextFastest.memory <= 
*cRtIUoZRPICuQEOZOSzT->getAllocatedWorkSpaceSize()) { NDjzAZSYJuWymuKDNZYB = 
nextFastest.algo; algoFound = true; break; } } if (!algoFound) { assert(false); }
#endif
 if (CUDNN_VERSION < 7402) fixConvAlgo(); } void 
MWFusedConvActivationLayerImpl::fixConvAlgo() { int inputH = 
TxNFOfYScyqGlEFFxbAv->getHeight(); int inputW = TxNFOfYScyqGlEFFxbAv->getWidth(); 
if (NDjzAZSYJuWymuKDNZYB == CUDNN_CONVOLUTION_FWD_ALGO_FFT && (inputH > 64 || 
inputW > 64)) { NDjzAZSYJuWymuKDNZYB = CUDNN_CONVOLUTION_FWD_ALGO_IMPLICIT_GEMM; 
} } } 