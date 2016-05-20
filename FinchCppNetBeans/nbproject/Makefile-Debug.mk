#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/CommandLineFinch.o \
	${OBJECTDIR}/Finch/Finch.o \
	${OBJECTDIR}/Finch/hid-libusb.o \
	${OBJECTDIR}/SampleMain.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=`pkg-config --libs libusb-1.0` -lpthread   

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/finchcppnetbeans

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/finchcppnetbeans: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/finchcppnetbeans ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/CommandLineFinch.o: CommandLineFinch.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `pkg-config --cflags libusb-1.0`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/CommandLineFinch.o CommandLineFinch.cpp

${OBJECTDIR}/Finch/Finch.o: Finch/Finch.cpp 
	${MKDIR} -p ${OBJECTDIR}/Finch
	${RM} "$@.d"
	$(COMPILE.cc) -g `pkg-config --cflags libusb-1.0`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Finch/Finch.o Finch/Finch.cpp

${OBJECTDIR}/Finch/hid-libusb.o: Finch/hid-libusb.c 
	${MKDIR} -p ${OBJECTDIR}/Finch
	${RM} "$@.d"
	$(COMPILE.c) -g `pkg-config --cflags libusb-1.0`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Finch/hid-libusb.o Finch/hid-libusb.c

${OBJECTDIR}/SampleMain.o: SampleMain.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g `pkg-config --cflags libusb-1.0`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SampleMain.o SampleMain.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/finchcppnetbeans

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
