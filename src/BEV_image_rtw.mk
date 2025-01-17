###########################################################################
## Makefile generated for component 'BEV_image'. 
## 
## Makefile     : BEV_image_rtw.mk
## Generated on : Mon Jun 10 19:44:00 2024
## Final product: ./BEV_image.a
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

PRODUCT_NAME              = BEV_image
MAKEFILE                  = BEV_image_rtw.mk
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
MODELLIB                  = BEV_image.a

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          GNU GCC for NVIDIA Embedded Processors
# Supported Version(s):    
# ToolchainInfo Version:   2023a
# Specification Revision:  1.0
# 

#-----------
# MACROS
#-----------

CCOUTPUTFLAG  = --output_file=
LDOUTPUTFLAG  = --output_file=
XCOMPILERFLAG =  

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lm -lm -lstdc++

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: GNU GCC for NVIDIA Embedded Processors Assembler
AS = as

# C Compiler: GNU GCC for NVIDIA Embedded Processors C Compiler
CC = gcc

# Linker: GNU GCC for NVIDIA Embedded Processors Linker
LD = gcc

# C++ Compiler: GNU GCC for NVIDIA Embedded Processors C++ Compiler
CPP = g++

# C++ Linker: GNU GCC for NVIDIA Embedded Processors C++ Linker
CPP_LD = g++

# Archiver: GNU GCC for NVIDIA Embedded Processors Archiver
AR = ar

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: Make Tool
MAKE = make


#-------------------------
# Directives/Utilities
#-------------------------

ASDEBUG             = -g
AS_OUTPUT_FLAG      = -o
CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
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

ARFLAGS              = -r
ASFLAGS              = -c \
                         \
                       $(ASFLAGS_ADDITIONAL) \
                       $(INCLUDES)
CFLAGS               = -c \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                         \
                       -O2
CPPFLAGS             = -c \
                       -MMD -MP -MF"$(@:%.o=%.dep)" -MT"$@"  \
                       -fpermissive  \
                         \
                       -O2
CPP_LDFLAGS          = -lrt -pthread -ldl \
                        
CPP_SHAREDLIB_LDFLAGS  = -shared  \
                         -lrt -pthread -ldl \
                          
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = -lrt -pthread -ldl \
                        
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE) -j4
SHAREDLIB_LDFLAGS    = -shared  \
                       -lrt -pthread -ldl \
                        



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = ./BEV_image.a
PRODUCT_TYPE = "static-library"
BUILD_TYPE = "Static Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR)/codegen/lib/BEV_image -I$(START_DIR) -I$(MATLAB_WORKSPACE)/C/ProgramData/MATLAB/SupportPackages/R2023a/toolbox/target/supportpackages/nvidia/include -I$(MATLAB_WORKSPACE)/C/ProgramData/MATLAB/SupportPackages/R2023a/toolbox/target/supportpackages/nvidia/sources/utils -I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src/utils -I$(MATLAB_ROOT)/extern/include

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DMW_DL_DATA_PATH="$(START_DIR)" -DMW_SCHED_OTHER=1
DEFINES_CUSTOM = 
DEFINES_SKIPFORSIL = -D__linux__ -DARM_PROJECT -D_USE_TARGET_UDP_ -D_RUNONTARGETHARDWARE_BUILD_ -DSTACK_SIZE=200000
DEFINES_STANDARD = -DMODEL=BEV_image

DEFINES = $(DEFINES_) $(DEFINES_CUSTOM) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/codegen/lib/BEV_image/BEV_image_data.cpp $(START_DIR)/codegen/lib/BEV_image/rt_nonfinite.cpp $(START_DIR)/codegen/lib/BEV_image/rtGetNaN.cpp $(START_DIR)/codegen/lib/BEV_image/rtGetInf.cpp $(START_DIR)/codegen/lib/BEV_image/BEV_image_initialize.cpp $(START_DIR)/codegen/lib/BEV_image/BEV_image_terminate.cpp $(START_DIR)/codegen/lib/BEV_image/BEV_image.cpp $(START_DIR)/codegen/lib/BEV_image/minOrMax.cpp $(START_DIR)/codegen/lib/BEV_image/norm.cpp $(START_DIR)/codegen/lib/BEV_image/Interacting.cpp $(START_DIR)/codegen/lib/BEV_image/sqrtm.cpp $(START_DIR)/codegen/lib/BEV_image/xnrm2.cpp $(START_DIR)/codegen/lib/BEV_image/mrdivide_helper.cpp $(START_DIR)/codegen/lib/BEV_image/det.cpp $(START_DIR)/codegen/lib/BEV_image/inv.cpp $(START_DIR)/codegen/lib/BEV_image/Mixing.cpp $(START_DIR)/codegen/lib/BEV_image/meshgrid.cpp $(START_DIR)/codegen/lib/BEV_image/isequal.cpp $(START_DIR)/codegen/lib/BEV_image/inpolygon.cpp $(START_DIR)/codegen/lib/BEV_image/find.cpp $(START_DIR)/codegen/lib/BEV_image/linspace.cpp $(START_DIR)/codegen/lib/BEV_image/TLC.cpp $(START_DIR)/codegen/lib/BEV_image/I_lat.cpp $(START_DIR)/codegen/lib/BEV_image/xzlarf.cpp $(START_DIR)/codegen/lib/BEV_image/xhseqr.cpp $(START_DIR)/codegen/lib/BEV_image/xdlanv2.cpp $(START_DIR)/codegen/lib/BEV_image/xrot.cpp $(START_DIR)/codegen/lib/BEV_image/sqrt.cpp $(START_DIR)/codegen/lib/BEV_image/CTRV_MODEL.cpp $(START_DIR)/codegen/lib/BEV_image/CV_MODEL.cpp $(START_DIR)/codegen/lib/BEV_image/BEV_image_rtwutil.cpp $(MATLAB_WORKSPACE)/C/ProgramData/MATLAB/SupportPackages/R2023a/toolbox/target/supportpackages/nvidia/sources/utils/MW_nvidia_init.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = BEV_image_data.cpp.o rt_nonfinite.cpp.o rtGetNaN.cpp.o rtGetInf.cpp.o BEV_image_initialize.cpp.o BEV_image_terminate.cpp.o BEV_image.cpp.o minOrMax.cpp.o norm.cpp.o Interacting.cpp.o sqrtm.cpp.o xnrm2.cpp.o mrdivide_helper.cpp.o det.cpp.o inv.cpp.o Mixing.cpp.o meshgrid.cpp.o isequal.cpp.o inpolygon.cpp.o find.cpp.o linspace.cpp.o TLC.cpp.o I_lat.cpp.o xzlarf.cpp.o xhseqr.cpp.o xdlanv2.cpp.o xrot.cpp.o sqrt.cpp.o CTRV_MODEL.cpp.o CV_MODEL.cpp.o BEV_image_rtwutil.cpp.o MW_nvidia_init.c.o

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

SYSTEM_LIBS = $(LDFLAGS_CUSTOMLIBFLAGS) -lm -lstdc++

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_OPTS = -fopenmp
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_OPTS) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_OPTS = -fopenmp
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_OPTS) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_ = -fopenmp

CPP_LDFLAGS += $(CPP_LDFLAGS_)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_ = -fopenmp

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_)

#-----------
# Linker
#-----------

LDFLAGS_ = -fopenmp

LDFLAGS += $(LDFLAGS_)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_ = -fopenmp

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

%.c.o : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : %.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(RELATIVE_PATH_TO_ANCHOR)/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : $(START_DIR)/codegen/lib/BEV_image/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(START_DIR)/codegen/lib/BEV_image/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(START_DIR)/codegen/lib/BEV_image/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.c.o : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.s.o : $(START_DIR)/%.s
	$(AS) $(ASFLAGS) -o "$@" "$<"


%.cpp.o : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


BEV_image_data.cpp.o : $(START_DIR)/codegen/lib/BEV_image/BEV_image_data.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rt_nonfinite.cpp.o : $(START_DIR)/codegen/lib/BEV_image/rt_nonfinite.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rtGetNaN.cpp.o : $(START_DIR)/codegen/lib/BEV_image/rtGetNaN.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


rtGetInf.cpp.o : $(START_DIR)/codegen/lib/BEV_image/rtGetInf.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


BEV_image_initialize.cpp.o : $(START_DIR)/codegen/lib/BEV_image/BEV_image_initialize.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


BEV_image_terminate.cpp.o : $(START_DIR)/codegen/lib/BEV_image/BEV_image_terminate.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


BEV_image.cpp.o : $(START_DIR)/codegen/lib/BEV_image/BEV_image.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


minOrMax.cpp.o : $(START_DIR)/codegen/lib/BEV_image/minOrMax.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


norm.cpp.o : $(START_DIR)/codegen/lib/BEV_image/norm.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Interacting.cpp.o : $(START_DIR)/codegen/lib/BEV_image/Interacting.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


sqrtm.cpp.o : $(START_DIR)/codegen/lib/BEV_image/sqrtm.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xnrm2.cpp.o : $(START_DIR)/codegen/lib/BEV_image/xnrm2.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


mrdivide_helper.cpp.o : $(START_DIR)/codegen/lib/BEV_image/mrdivide_helper.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


det.cpp.o : $(START_DIR)/codegen/lib/BEV_image/det.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


inv.cpp.o : $(START_DIR)/codegen/lib/BEV_image/inv.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


Mixing.cpp.o : $(START_DIR)/codegen/lib/BEV_image/Mixing.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


meshgrid.cpp.o : $(START_DIR)/codegen/lib/BEV_image/meshgrid.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


isequal.cpp.o : $(START_DIR)/codegen/lib/BEV_image/isequal.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


inpolygon.cpp.o : $(START_DIR)/codegen/lib/BEV_image/inpolygon.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


find.cpp.o : $(START_DIR)/codegen/lib/BEV_image/find.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


linspace.cpp.o : $(START_DIR)/codegen/lib/BEV_image/linspace.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


TLC.cpp.o : $(START_DIR)/codegen/lib/BEV_image/TLC.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


I_lat.cpp.o : $(START_DIR)/codegen/lib/BEV_image/I_lat.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xzlarf.cpp.o : $(START_DIR)/codegen/lib/BEV_image/xzlarf.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xhseqr.cpp.o : $(START_DIR)/codegen/lib/BEV_image/xhseqr.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xdlanv2.cpp.o : $(START_DIR)/codegen/lib/BEV_image/xdlanv2.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


xrot.cpp.o : $(START_DIR)/codegen/lib/BEV_image/xrot.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


sqrt.cpp.o : $(START_DIR)/codegen/lib/BEV_image/sqrt.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


CTRV_MODEL.cpp.o : $(START_DIR)/codegen/lib/BEV_image/CTRV_MODEL.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


CV_MODEL.cpp.o : $(START_DIR)/codegen/lib/BEV_image/CV_MODEL.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


BEV_image_rtwutil.cpp.o : $(START_DIR)/codegen/lib/BEV_image/BEV_image_rtwutil.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


MW_nvidia_init.c.o : $(MATLAB_WORKSPACE)/C/ProgramData/MATLAB/SupportPackages/R2023a/toolbox/target/supportpackages/nvidia/sources/utils/MW_nvidia_init.c
	$(CC) $(CFLAGS) -o "$@" "$<"


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
	echo "### ASFLAGS = $(ASFLAGS)"
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
	$(RM) *.cpp.dep
	$(ECHO) "### Deleted all derived files."


