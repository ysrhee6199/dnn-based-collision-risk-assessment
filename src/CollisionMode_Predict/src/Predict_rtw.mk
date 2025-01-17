###########################################################################
## Makefile generated for component 'Predict'. 
## 
## Makefile     : Predict_rtw.mk
## Generated on : Wed Jul 31 04:58:31 2024
## Final product: ./Predict.a
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

PRODUCT_NAME              = Predict
MAKEFILE                  = Predict_rtw.mk
MATLAB_ROOT               = $(MATLAB_WORKSPACE)/C/Program_Files/MATLAB/R2023a
MATLAB_BIN                = $(MATLAB_WORKSPACE)/C/Program_Files/MATLAB/R2023a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = $(MATLAB_WORKSPACE)/C/Users/AVEES/Desktop/collisionmode/CollisionMode/Code
TGT_FCN_LIB               = ISO_C++11
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 
RELATIVE_PATH_TO_ANCHOR   = ../../..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
MODELLIB                  = Predict.a

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

PRODUCT = ./Predict.a
PRODUCT_TYPE = "static-library"
BUILD_TYPE = "Static Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR)/codegen/lib/Predict -I$(START_DIR) -I$(MATLAB_WORKSPACE)/C/ProgramData/MATLAB/SupportPackages/R2023a/toolbox/target/supportpackages/nvidia/include -I$(MATLAB_WORKSPACE)/C/ProgramData/MATLAB/SupportPackages/R2023a/toolbox/target/supportpackages/nvidia/sources/utils -I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils -I$(MATLAB_ROOT)/extern/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DMW_CUDA_ARCH=720 -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DMW_DL_DATA_PATH="$(START_DIR)" -DMW_SCHED_OTHER=1
DEFINES_CUSTOM = 
DEFINES_SKIPFORSIL = -D__linux__ -DARM_PROJECT -D_USE_TARGET_UDP_ -D_RUNONTARGETHARDWARE_BUILD_ -DSTACK_SIZE=200000
DEFINES_STANDARD = -DMODEL=Predict

DEFINES = $(DEFINES_) $(DEFINES_CUSTOM) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/codegen/lib/Predict/MWCNNLayer.cpp $(START_DIR)/codegen/lib/Predict/MWElementwiseAffineLayer.cpp $(START_DIR)/codegen/lib/Predict/MWFCLayer.cpp $(START_DIR)/codegen/lib/Predict/MWFusedConvActivationLayer.cpp $(START_DIR)/codegen/lib/Predict/MWInputLayer.cpp $(START_DIR)/codegen/lib/Predict/MWMaxPoolingLayer.cpp $(START_DIR)/codegen/lib/Predict/MWOutputLayer.cpp $(START_DIR)/codegen/lib/Predict/MWSoftmaxLayer.cpp $(START_DIR)/codegen/lib/Predict/MWTensorBase.cpp $(START_DIR)/codegen/lib/Predict/MWCudnnElementwiseAffineLayerImpl.cu $(START_DIR)/codegen/lib/Predict/MWCudnnFCLayerImpl.cu $(START_DIR)/codegen/lib/Predict/MWCudnnFusedConvActivationLayerImpl.cu $(START_DIR)/codegen/lib/Predict/MWCudnnMaxPoolingLayerImpl.cu $(START_DIR)/codegen/lib/Predict/MWCudnnOutputLayerImpl.cu $(START_DIR)/codegen/lib/Predict/MWCudnnSoftmaxLayerImpl.cu $(START_DIR)/codegen/lib/Predict/MWElementwiseAffineLayerImplKernel.cu $(START_DIR)/codegen/lib/Predict/MWCudnnCNNLayerImpl.cu $(START_DIR)/codegen/lib/Predict/MWCudnnTargetNetworkImpl.cu $(START_DIR)/codegen/lib/Predict/MWCudnnLayerImplFactory.cu $(START_DIR)/codegen/lib/Predict/MWCudnnCustomLayerBase.cu $(START_DIR)/codegen/lib/Predict/Predict_data.cu $(START_DIR)/codegen/lib/Predict/Predict_initialize.cu $(START_DIR)/codegen/lib/Predict/Predict_terminate.cu $(START_DIR)/codegen/lib/Predict/Predict.cu $(START_DIR)/codegen/lib/Predict/DeepLearningNetwork.cu $(START_DIR)/codegen/lib/Predict/predict1.cu $(MATLAB_WORKSPACE)/C/ProgramData/MATLAB/SupportPackages/R2023a/toolbox/target/supportpackages/nvidia/sources/utils/MW_nvidia_init.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = MWCNNLayer.o MWElementwiseAffineLayer.o MWFCLayer.o MWFusedConvActivationLayer.o MWInputLayer.o MWMaxPoolingLayer.o MWOutputLayer.o MWSoftmaxLayer.o MWTensorBase.o MWCudnnElementwiseAffineLayerImpl.o MWCudnnFCLayerImpl.o MWCudnnFusedConvActivationLayerImpl.o MWCudnnMaxPoolingLayerImpl.o MWCudnnOutputLayerImpl.o MWCudnnSoftmaxLayerImpl.o MWElementwiseAffineLayerImplKernel.o MWCudnnCNNLayerImpl.o MWCudnnTargetNetworkImpl.o MWCudnnLayerImplFactory.o MWCudnnCustomLayerBase.o Predict_data.o Predict_initialize.o Predict_terminate.o Predict.o DeepLearningNetwork.o predict1.o MW_nvidia_init.o

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


%.o : $(START_DIR)/codegen/lib/Predict/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/codegen/lib/Predict/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/codegen/lib/Predict/%.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


%.o : $(START_DIR)/%.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCNNLayer.o : $(START_DIR)/codegen/lib/Predict/MWCNNLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWElementwiseAffineLayer.o : $(START_DIR)/codegen/lib/Predict/MWElementwiseAffineLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWFCLayer.o : $(START_DIR)/codegen/lib/Predict/MWFCLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWFusedConvActivationLayer.o : $(START_DIR)/codegen/lib/Predict/MWFusedConvActivationLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWInputLayer.o : $(START_DIR)/codegen/lib/Predict/MWInputLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWMaxPoolingLayer.o : $(START_DIR)/codegen/lib/Predict/MWMaxPoolingLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWOutputLayer.o : $(START_DIR)/codegen/lib/Predict/MWOutputLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWSoftmaxLayer.o : $(START_DIR)/codegen/lib/Predict/MWSoftmaxLayer.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWTensorBase.o : $(START_DIR)/codegen/lib/Predict/MWTensorBase.cpp
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnElementwiseAffineLayerImpl.o : $(START_DIR)/codegen/lib/Predict/MWCudnnElementwiseAffineLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnFCLayerImpl.o : $(START_DIR)/codegen/lib/Predict/MWCudnnFCLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnFusedConvActivationLayerImpl.o : $(START_DIR)/codegen/lib/Predict/MWCudnnFusedConvActivationLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnMaxPoolingLayerImpl.o : $(START_DIR)/codegen/lib/Predict/MWCudnnMaxPoolingLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnOutputLayerImpl.o : $(START_DIR)/codegen/lib/Predict/MWCudnnOutputLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnSoftmaxLayerImpl.o : $(START_DIR)/codegen/lib/Predict/MWCudnnSoftmaxLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWElementwiseAffineLayerImplKernel.o : $(START_DIR)/codegen/lib/Predict/MWElementwiseAffineLayerImplKernel.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnCNNLayerImpl.o : $(START_DIR)/codegen/lib/Predict/MWCudnnCNNLayerImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnTargetNetworkImpl.o : $(START_DIR)/codegen/lib/Predict/MWCudnnTargetNetworkImpl.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnLayerImplFactory.o : $(START_DIR)/codegen/lib/Predict/MWCudnnLayerImplFactory.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


MWCudnnCustomLayerBase.o : $(START_DIR)/codegen/lib/Predict/MWCudnnCustomLayerBase.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


Predict_data.o : $(START_DIR)/codegen/lib/Predict/Predict_data.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


Predict_initialize.o : $(START_DIR)/codegen/lib/Predict/Predict_initialize.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


Predict_terminate.o : $(START_DIR)/codegen/lib/Predict/Predict_terminate.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


Predict.o : $(START_DIR)/codegen/lib/Predict/Predict.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


DeepLearningNetwork.o : $(START_DIR)/codegen/lib/Predict/DeepLearningNetwork.cu
	$(CPP) $(CPPFLAGS) -o $@ $<


predict1.o : $(START_DIR)/codegen/lib/Predict/predict1.cu
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


