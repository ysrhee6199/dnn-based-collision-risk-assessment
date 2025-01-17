###########################################################################
## Makefile generated for component 'Decision_Predict'. 
## 
## Makefile     : Decision_Predict_rtw.mk
## Generated on : Tue Jun 11 01:16:23 2024
## Final product: ./Decision_Predict.a
## Product type : static-library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# MODELLIB                Static library target

PRODUCT_NAME              = Decision_Predict
MAKEFILE                  = Decision_Predict_rtw.mk
MATLAB_ROOT               = $(MATLAB_WORKSPACE)/C/Program_Files/MATLAB/R2023a
MATLAB_BIN                = $(MATLAB_WORKSPACE)/C/Program_Files/MATLAB/R2023a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = $(MATLAB_WORKSPACE)/C/Users/AVEES/Downloads/Fallback_decision_code_041724/Fallback_decision_code_041724
TGT_FCN_LIB               = ISO_C++11
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = ../../..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
MODELLIB                  = Decision_Predict.a

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          NVCC for NVIDIA Embedded Processors
# Supported Version(s):    
# ToolchainInfo Version:   2023a
# Specification Revision:  1.0
# 

#-----------
# MACROS
#-----------

CCOUTPUTFLAG  = --output_file=
LDOUTPUTFLAG  = --output_file=
XCOMPILERFLAG = -Xcompiler

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm -lm

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: NVCC for NVIDIA Embedded Processors1.0 NVIDIA CUDA C Compiler Driver
CC = nvcc

# Linker: NVCC for NVIDIA Embedded Processors1.0 NVIDIA CUDA C Linker
LD = nvcc

# C++ Compiler: NVCC for NVIDIA Embedded Processors1.0 NVIDIA CUDA C++ Compiler Driver
CPP = nvcc

# C++ Linker: NVCC for NVIDIA Embedded Processors1.0 NVIDIA CUDA C++ Linker
CPP_LD = nvcc

# Archiver: NVCC for NVIDIA Embedded Processors1.0 Archiver
AR = ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = $(MEX_PATH)/mex

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: Make Tool
MAKE = make


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g -G
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g -G
OUTPUT_FLAG         = -o
CPPDEBUG            = -g -G
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g -G
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  =
ECHO                = echo
MV                  =
RUN                 =

#--------------------------------------
# "Faster Runs" Build Configuration
#--------------------------------------

ARFLAGS              = -ruvs
CFLAGS               = -rdc=true -Xcudafe "--diag_suppress=unsigned_compare_with_zero" \
                       -c \
                       -Xcompiler -MMD,-MP \
                       -O2
CPPFLAGS             = -rdc=true -Xcudafe "--diag_suppress=unsigned_compare_with_zero" \
                       -c \
                       -Xcompiler -MMD,-MP \
                       -O2
CPP_LDFLAGS          = -lm -lrt -ldl \
                       -Xlinker -rpath,/usr/lib32 -Xnvlink -w -lcudart -lcuda -Wno-deprecated-gpu-targets
CPP_SHAREDLIB_LDFLAGS  = -shared  \
                         -lm -lrt -ldl \
                         -Xlinker -rpath,/usr/lib32 -Xnvlink -w -lcudart -lcuda -Wno-deprecated-gpu-targets
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -lm -lrt -ldl \
                       -Xlinker -rpath,/usr/lib32 -Xnvlink -w -lcudart -lcuda -Wno-deprecated-gpu-targets
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE) -j4
SHAREDLIB_LDFLAGS    = -shared  \
                       -lm -lrt -ldl \
                       -Xlinker -rpath,/usr/lib32 -Xnvlink -w -lcudart -lcuda -Wno-deprecated-gpu-targets



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = ./Decision_Predict.a
PRODUCT_TYPE = "static-library"
BUILD_TYPE = "Static Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR)/codegen/lib/Decision_Predict -I$(START_DIR) -I$(MATLAB_WORKSPACE)/C/ProgramData/MATLAB/SupportPackages/R2023a/toolbox/target/supportpackages/nvidia/include -I$(MATLAB_WORKSPACE)/C/ProgramData/MATLAB/SupportPackages/R2023a/toolbox/target/supportpackages/nvidia/sources/utils -I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils -I$(MATLAB_ROOT)/extern/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DMW_CUDA_ARCH=720 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DMW_DL_DATA_PATH="$(START_DIR)" -DMW_SCHED_OTHER=1
DEFINES_CUSTOM = 
DEFINES_SKIPFORSIL = -D__linux__ -DARM_PROJECT -D_USE_TARGET_UDP_ -D_RUNONTARGETHARDWARE_BUILD_ -DSTACK_SIZE=200000
DEFINES_STANDARD = -DMODEL=Decision_Predict

DEFINES = $(DEFINES_) $(DEFINES_CUSTOM) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/codegen/lib/Decision_Predict/MWCNNLayer.cpp $(START_DIR)/codegen/lib/Decision_Predict/MWElementwiseAffineLayer.cpp $(START_DIR)/codegen/lib/Decision_Predict/MWFCLayer.cpp $(START_DIR)/codegen/lib/Decision_Predict/MWFusedConvActivationLayer.cpp $(START_DIR)/codegen/lib/Decision_Predict/MWInputLayer.cpp $(START_DIR)/codegen/lib/Decision_Predict/MWMaxPoolingLayer.cpp $(START_DIR)/codegen/lib/Decision_Predict/MWOutputLayer.cpp $(START_DIR)/codegen/lib/Decision_Predict/MWSoftmaxLayer.cpp $(START_DIR)/codegen/lib/Decision_Predict/MWTensorBase.cpp $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnElementwiseAffineLayerImpl.cu $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnFCLayerImpl.cu $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnFusedConvActivationLayerImpl.cu $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnMaxPoolingLayerImpl.cu $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnOutputLayerImpl.cu $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnSoftmaxLayerImpl.cu $(START_DIR)/codegen/lib/Decision_Predict/MWElementwiseAffineLayerImplKernel.cu $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnCNNLayerImpl.cu $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnTargetNetworkImpl.cu $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnLayerImplFactory.cu $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnCustomLayerBase.cu $(START_DIR)/codegen/lib/Decision_Predict/Decision_Predict_data.cu $(START_DIR)/codegen/lib/Decision_Predict/Decision_Predict_initialize.cu $(START_DIR)/codegen/lib/Decision_Predict/Decision_Predict_terminate.cu $(START_DIR)/codegen/lib/Decision_Predict/Decision_Predict.cu $(START_DIR)/codegen/lib/Decision_Predict/DeepLearningNetwork.cu $(START_DIR)/codegen/lib/Decision_Predict/predict.cu $(MATLAB_WORKSPACE)/C/ProgramData/MATLAB/SupportPackages/R2023a/toolbox/target/supportpackages/nvidia/sources/utils/MW_nvidia_init.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = MWCNNLayer.o MWElementwiseAffineLayer.o MWFCLayer.o MWFusedConvActivationLayer.o MWInputLayer.o MWMaxPoolingLayer.o MWOutputLayer.o MWSoftmaxLayer.o MWTensorBase.o MWCudnnElementwiseAffineLayerImpl.o MWCudnnFCLayerImpl.o MWCudnnFusedConvActivationLayerImpl.o MWCudnnMaxPoolingLayerImpl.o MWCudnnOutputLayerImpl.o MWCudnnSoftmaxLayerImpl.o MWElementwiseAffineLayerImplKernel.o MWCudnnCNNLayerImpl.o MWCudnnTargetNetworkImpl.o MWCudnnLayerImplFactory.o MWCudnnCustomLayerBase.o Decision_Predict_data.o Decision_Predict_initialize.o Decision_Predict_terminate.o Decision_Predict.o DeepLearningNetwork.o predict.o MW_nvidia_init.o

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = 

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = $(LDFLAGS_CUSTOMLIBFLAGS) -lm -lstdc++ -lcufft -lcublas -lcusolver

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_CU_OPTS = -arch sm_72 
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_CU_OPTS) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_CU_OPTS = -arch sm_72 
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_CU_OPTS) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = -lcudnn -lcublas -arch sm_72 

CPP_LDFLAGS += $(CPP_LDFLAGS_)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = -lcudnn -lcublas -arch sm_72 

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_)

#-----------
# Linker
#-----------

LDFLAGS_ = -lcudnn -lcublas -arch sm_72 

LDFLAGS += $(LDFLAGS_)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = -lcudnn -lcublas -arch sm_72 

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_)

###########################################################################
## INLINED COMMANDS
###########################################################################


DERIVED_SRCS = $(subst .o,.dep,$(OBJS))

build:

%.dep:



-include codertarget_assembly_flags.mk
-include *.dep


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute


all : build
	echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


prebuild : 


download : $(PRODUCT)


execute : download


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	echo "### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS)  $(PRODUCT) $(OBJS)
	echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.o : %.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : %.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : %.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/codegen/lib/Decision_Predict/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/codegen/lib/Decision_Predict/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/codegen/lib/Decision_Predict/%.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCNNLayer.o : $(START_DIR)/codegen/lib/Decision_Predict/MWCNNLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWElementwiseAffineLayer.o : $(START_DIR)/codegen/lib/Decision_Predict/MWElementwiseAffineLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWFCLayer.o : $(START_DIR)/codegen/lib/Decision_Predict/MWFCLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWFusedConvActivationLayer.o : $(START_DIR)/codegen/lib/Decision_Predict/MWFusedConvActivationLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWInputLayer.o : $(START_DIR)/codegen/lib/Decision_Predict/MWInputLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWMaxPoolingLayer.o : $(START_DIR)/codegen/lib/Decision_Predict/MWMaxPoolingLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWOutputLayer.o : $(START_DIR)/codegen/lib/Decision_Predict/MWOutputLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWSoftmaxLayer.o : $(START_DIR)/codegen/lib/Decision_Predict/MWSoftmaxLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWTensorBase.o : $(START_DIR)/codegen/lib/Decision_Predict/MWTensorBase.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnElementwiseAffineLayerImpl.o : $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnElementwiseAffineLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnFCLayerImpl.o : $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnFCLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnFusedConvActivationLayerImpl.o : $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnFusedConvActivationLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnMaxPoolingLayerImpl.o : $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnMaxPoolingLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnOutputLayerImpl.o : $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnOutputLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnSoftmaxLayerImpl.o : $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnSoftmaxLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWElementwiseAffineLayerImplKernel.o : $(START_DIR)/codegen/lib/Decision_Predict/MWElementwiseAffineLayerImplKernel.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnCNNLayerImpl.o : $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnCNNLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnTargetNetworkImpl.o : $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnTargetNetworkImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnLayerImplFactory.o : $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnLayerImplFactory.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnCustomLayerBase.o : $(START_DIR)/codegen/lib/Decision_Predict/MWCudnnCustomLayerBase.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


Decision_Predict_data.o : $(START_DIR)/codegen/lib/Decision_Predict/Decision_Predict_data.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


Decision_Predict_initialize.o : $(START_DIR)/codegen/lib/Decision_Predict/Decision_Predict_initialize.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


Decision_Predict_terminate.o : $(START_DIR)/codegen/lib/Decision_Predict/Decision_Predict_terminate.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


Decision_Predict.o : $(START_DIR)/codegen/lib/Decision_Predict/Decision_Predict.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


DeepLearningNetwork.o : $(START_DIR)/codegen/lib/Decision_Predict/DeepLearningNetwork.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


predict.o : $(START_DIR)/codegen/lib/Decision_Predict/predict.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MW_nvidia_init.o : $(MATLAB_WORKSPACE)/C/ProgramData/MATLAB/SupportPackages/R2023a/toolbox/target/supportpackages/nvidia/sources/utils/MW_nvidia_init.c
	$(CC) $(CFLAGS) -o $@ $<


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	echo "### PRODUCT = $(PRODUCT)"
	echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	echo "### BUILD_TYPE = $(BUILD_TYPE)"
	echo "### INCLUDES = $(INCLUDES)"
	echo "### DEFINES = $(DEFINES)"
	echo "### ALL_SRCS = $(ALL_SRCS)"
	echo "### ALL_OBJS = $(ALL_OBJS)"
	echo "### LIBS = $(LIBS)"
	echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	echo "### CFLAGS = $(CFLAGS)"
	echo "### LDFLAGS = $(LDFLAGS)"
	echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	echo "### CPPFLAGS = $(CPPFLAGS)"
	echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	echo "### ARFLAGS = $(ARFLAGS)"
	echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files ..."
	$(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(RM) *.c.dep
	$(RM) *.cpp.dep .cu.dep
	$(ECHO) "### Deleted all derived files."


