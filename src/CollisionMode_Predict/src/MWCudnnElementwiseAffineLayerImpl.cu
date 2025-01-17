#include "MWKernelHeaders.hpp"
#include "MWCudnnCommonHeaders.hpp"
#include "MWCudnnElementwiseAffineLayerImpl.hpp"
#include <cmath>
#include <cassert>
#include <cstdio>
 namespace MWCudnnTarget { 
MWElementwiseAffineLayerImpl::MWElementwiseAffineLayerImpl(MWCNNLayer* layer, 
MWTargetNetworkImpl* ntwk_impl, int scale_H, int scale_W, int scale_C, int 
offset_H, int offset_W, int offset_C, bool isClipped, int lowerbound, int 
upperbound, const char* pdleXafalaHAmketaFyq, const char* 
gzSTokDHvkXefhiGDcWL) : MWCNNLayerImpl(layer, ntwk_impl) , 
olKGEIcsxmLSoMhRhEtP(NULL) , fhikqqlnUKCjleVKDqiG(NULL) , pFoPPXxxFRbjXXxQWItv(scale_H) 
, pckLLTEdVPoCZLRwyDnM(scale_W) , osBZbKVTgXwTSsGSbdth(scale_C) , 
gWETwFdWHfKuelmlKNCC(offset_H) , gsJtSpgIkTNvahoTFqow(offset_W) , 
gTcJMwtYuwiqqUmqvKhT(offset_C) , ZKjSVYDDjACizBkGbqBq(isClipped) , 
bERCRkGjpaKXMNComoYl(lowerbound) , unSXtdjDjpysqxmbIiPv(upperbound) { 
CUDA_CALL(cudaMalloc((void**)&olKGEIcsxmLSoMhRhEtP, sizeof(float) * 
pFoPPXxxFRbjXXxQWItv * pckLLTEdVPoCZLRwyDnM * osBZbKVTgXwTSsGSbdth)); 
CUDA_CALL(cudaMalloc( (void**)&fhikqqlnUKCjleVKDqiG, sizeof(float) * 
gWETwFdWHfKuelmlKNCC * gsJtSpgIkTNvahoTFqow * gTcJMwtYuwiqqUmqvKhT)); 
loadScale(pdleXafalaHAmketaFyq); loadOffset(gzSTokDHvkXefhiGDcWL); } 
MWElementwiseAffineLayerImpl::~MWElementwiseAffineLayerImpl() { } void 
MWElementwiseAffineLayerImpl::propagateSize() { } void 
MWElementwiseAffineLayerImpl::predict() { MWTensorBase* ipTensorBase = 
getLayer()->getInputTensor(0); MWTensorBase* opTensorBase = 
getLayer()->getOutputTensor(0); MWTensor<float>* ipTensor = 
static_cast<MWTensor<float>*>(ipTensorBase); MWTensor<float>* opTensor = 
static_cast<MWTensor<float>*>(opTensorBase); int WmXADZOqdcQvtBUvFerh = 
ipTensor->getHeight(); int WprSrhAStKGxyXeoxETy = ipTensor->getWidth(); int 
WerBmCOBWhvoFbdqfitc = ipTensor->getChannels(); long int 
YNmJhGSUszJKxsodxiuV = WmXADZOqdcQvtBUvFerh * WprSrhAStKGxyXeoxETy; long 
int YNDVziqpDddiXQKYZZhX = YNmJhGSUszJKxsodxiuV * 
WerBmCOBWhvoFbdqfitc; long int YMNbgnUYZspjMLjwcIOS = ipTensor->getNumElements(); 
long int rlQsibXJSWJVnUVpdNeL = ((YMNbgnUYZspjMLjwcIOS + 31) / 32) * 32; int 
shEncNmxJsMuJKwbrwok = (rlQsibXJSWJVnUVpdNeL < 1024) ? rlQsibXJSWJVnUVpdNeL : 1024; 
long int KHClOltUSuqFVVErSxVb = (YMNbgnUYZspjMLjwcIOS + 
shEncNmxJsMuJKwbrwok - 1) / shEncNmxJsMuJKwbrwok; long int 
pbePKOGQbvmzToFbiRkR = pFoPPXxxFRbjXXxQWItv * pckLLTEdVPoCZLRwyDnM * 
osBZbKVTgXwTSsGSbdth; long int gcGbhKACQPAogUYXHedj = gWETwFdWHfKuelmlKNCC * 
gsJtSpgIkTNvahoTFqow * gTcJMwtYuwiqqUmqvKhT; assert(pbePKOGQbvmzToFbiRkR <= 
YMNbgnUYZspjMLjwcIOS); assert(gcGbhKACQPAogUYXHedj <= YMNbgnUYZspjMLjwcIOS); if 
(pbePKOGQbvmzToFbiRkR == 1) { scale_scalar_kernel<<<KHClOltUSuqFVVErSxVb, 
shEncNmxJsMuJKwbrwok>>>( ipTensor->getData(), opTensor->getData(), 
olKGEIcsxmLSoMhRhEtP, YMNbgnUYZspjMLjwcIOS); } else if (pFoPPXxxFRbjXXxQWItv == 1 && 
pckLLTEdVPoCZLRwyDnM == 1 && pbePKOGQbvmzToFbiRkR > 1) { 
scale_vector_kernel<<<KHClOltUSuqFVVErSxVb, shEncNmxJsMuJKwbrwok>>>( 
ipTensor->getData(), opTensor->getData(), olKGEIcsxmLSoMhRhEtP, 
YNmJhGSUszJKxsodxiuV, YNDVziqpDddiXQKYZZhX, 
YMNbgnUYZspjMLjwcIOS); } else if (YNDVziqpDddiXQKYZZhX == 
pbePKOGQbvmzToFbiRkR) { scale_tensor3d_kernel<<<KHClOltUSuqFVVErSxVb, 
shEncNmxJsMuJKwbrwok>>>( ipTensor->getData(), opTensor->getData(), 
olKGEIcsxmLSoMhRhEtP, YNDVziqpDddiXQKYZZhX, YMNbgnUYZspjMLjwcIOS); } else { 
scale_matrix2d_kernel<<<KHClOltUSuqFVVErSxVb, 
shEncNmxJsMuJKwbrwok>>>( ipTensor->getData(), opTensor->getData(), 
olKGEIcsxmLSoMhRhEtP, YNmJhGSUszJKxsodxiuV, YMNbgnUYZspjMLjwcIOS); } if 
(gcGbhKACQPAogUYXHedj == 1) { offset_scalar_kernel<<<KHClOltUSuqFVVErSxVb, 
shEncNmxJsMuJKwbrwok>>>( opTensor->getData(), opTensor->getData(), 
fhikqqlnUKCjleVKDqiG, YMNbgnUYZspjMLjwcIOS, ZKjSVYDDjACizBkGbqBq, 
bERCRkGjpaKXMNComoYl, unSXtdjDjpysqxmbIiPv); } else if (gWETwFdWHfKuelmlKNCC 
== 1 && gsJtSpgIkTNvahoTFqow == 1 && gcGbhKACQPAogUYXHedj > 1) { 
offset_vector_kernel<<<KHClOltUSuqFVVErSxVb, shEncNmxJsMuJKwbrwok>>>( 
opTensor->getData(), opTensor->getData(), fhikqqlnUKCjleVKDqiG, 
YNmJhGSUszJKxsodxiuV, YNDVziqpDddiXQKYZZhX, 
YMNbgnUYZspjMLjwcIOS, ZKjSVYDDjACizBkGbqBq, bERCRkGjpaKXMNComoYl, 
unSXtdjDjpysqxmbIiPv); } else if (YNDVziqpDddiXQKYZZhX == 
gcGbhKACQPAogUYXHedj) { offset_tensor3d_kernel<<<KHClOltUSuqFVVErSxVb, 
shEncNmxJsMuJKwbrwok>>>( opTensor->getData(), opTensor->getData(), 
fhikqqlnUKCjleVKDqiG, YNDVziqpDddiXQKYZZhX, YMNbgnUYZspjMLjwcIOS, 
ZKjSVYDDjACizBkGbqBq, bERCRkGjpaKXMNComoYl, unSXtdjDjpysqxmbIiPv); } else { 
offset_matrix2d_kernel<<<KHClOltUSuqFVVErSxVb, 
shEncNmxJsMuJKwbrwok>>>( opTensor->getData(), opTensor->getData(), 
fhikqqlnUKCjleVKDqiG, YNmJhGSUszJKxsodxiuV, YMNbgnUYZspjMLjwcIOS, 
ZKjSVYDDjACizBkGbqBq, bERCRkGjpaKXMNComoYl, unSXtdjDjpysqxmbIiPv); } return; 
} void MWElementwiseAffineLayerImpl::cleanup() { if (olKGEIcsxmLSoMhRhEtP) { 
CUDA_FREE_CALL(olKGEIcsxmLSoMhRhEtP); olKGEIcsxmLSoMhRhEtP = NULL; } if 
(fhikqqlnUKCjleVKDqiG) { CUDA_FREE_CALL(fhikqqlnUKCjleVKDqiG); fhikqqlnUKCjleVKDqiG = 
NULL; } } void MWElementwiseAffineLayerImpl::loadScale(const char* 
pdleXafalaHAmketaFyq) { FILE* QTXuPiGKeBUnmRzhlIDp = 
MWCNNLayer::openBinaryFile(pdleXafalaHAmketaFyq); assert(QTXuPiGKeBUnmRzhlIDp); long 
int cnEykmOGhLuyKuadExWe = pFoPPXxxFRbjXXxQWItv * pckLLTEdVPoCZLRwyDnM * 
osBZbKVTgXwTSsGSbdth; float* KZWeXiYFmdpQdsgidKeG = MALLOC_CALL(sizeof(float) * 
cnEykmOGhLuyKuadExWe); MWCNNLayer::call_fread(KZWeXiYFmdpQdsgidKeG, sizeof(float), 
cnEykmOGhLuyKuadExWe, QTXuPiGKeBUnmRzhlIDp, pdleXafalaHAmketaFyq); 
CUDA_CALL(cudaMemcpy(olKGEIcsxmLSoMhRhEtP, KZWeXiYFmdpQdsgidKeG, sizeof(float) * 
cnEykmOGhLuyKuadExWe, cudaMemcpyHostToDevice)); free(KZWeXiYFmdpQdsgidKeG); 
fclose(QTXuPiGKeBUnmRzhlIDp); } void MWElementwiseAffineLayerImpl::loadOffset(const 
char* gzSTokDHvkXefhiGDcWL) { FILE* QTXuPiGKeBUnmRzhlIDp = 
MWCNNLayer::openBinaryFile(gzSTokDHvkXefhiGDcWL); assert(QTXuPiGKeBUnmRzhlIDp); long 
int cnEykmOGhLuyKuadExWe = gWETwFdWHfKuelmlKNCC * gsJtSpgIkTNvahoTFqow * 
gTcJMwtYuwiqqUmqvKhT; float* KZWeXiYFmdpQdsgidKeG = MALLOC_CALL(sizeof(float) * 
cnEykmOGhLuyKuadExWe); MWCNNLayer::call_fread(KZWeXiYFmdpQdsgidKeG, sizeof(float), 
cnEykmOGhLuyKuadExWe, QTXuPiGKeBUnmRzhlIDp, gzSTokDHvkXefhiGDcWL); 
CUDA_CALL(cudaMemcpy(fhikqqlnUKCjleVKDqiG, KZWeXiYFmdpQdsgidKeG, sizeof(float) * 
cnEykmOGhLuyKuadExWe, cudaMemcpyHostToDevice)); free(KZWeXiYFmdpQdsgidKeG); 
fclose(QTXuPiGKeBUnmRzhlIDp); } } 