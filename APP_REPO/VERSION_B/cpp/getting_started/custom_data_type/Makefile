
#+-------------------------------------------------------------------------------
# The following parameters are assigned with default values. These parameters can
# be overridden through the make command line
#+-------------------------------------------------------------------------------

# Device Platform (Default ~ zc706)
PLATFORM := zc706

# Run Target:
#   hw  - Compile for hardware
#   emu - Compile for emulation (Default)
TARGET := emu

# Current Directory
pwd := $(CURDIR)

# Points to Utility Directory
COMMON_REPO = ../../../
ABS_COMMON_REPO = $(shell readlink -f $(COMMON_REPO))

# Include Libraries
include $(ABS_COMMON_REPO)/libs/sds_utils/sds_utils.mk

# Target OS:
#     linux (Default), standalone
TARGET_OS := linux

# Emulation Mode:
#     debug     - Include debug data
#     optimized - Exclude debug data (Default)
EMU_MODE := optimized

# Additional sds++ flags - this should be reserved for sds++ flags defined
# at run-time. Other sds++ options should be defined in the makefile data section below
# section below
ADDL_FLAGS := 

# Set to 1 (number one) to enable sds++ verbose output
VERBOSE := 
# Build Executable
EXECUTABLE := rgb_to_hsv_accel.elf

#+--------------------------------------------------------------------------
# Makefile Data
#+--------------------------------------------------------------------------

# Source Files
SRC_DIR := src
OBJECTS += \
$(pwd)/$(TARGET)/bitmap.o \
$(pwd)/$(TARGET)/main.o \
$(pwd)/$(TARGET)/rgb_to_hsv.o

# SDS Options
HW_FLAGS := -sds-hw rgb_to_hsv_accel rgb_to_hsv.cpp -sds-end
EMU_FLAGS := 
ifeq ($(TARGET), emu)
	EMU_FLAGS := -mno-bitstream -mno-boot-files -emulation $(EMU_MODE)
endif

# Compilation and Link Flags
IFLAGS := -I.
CFLAGS = -Wall -O3 -c
CFLAGS += -MT"$@" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" 
CFLAGS += -std=c++0x
CFLAGS += -I$(sds_utils_HDRS)
LFLAGS = "$@" "$<" 
#+---------------------------------------------------------------------

SDSFLAGS := -sds-pf $(PLATFORM) \
	-target-os $(TARGET_OS) \
	$(ADDL_FLAGS)

# SDS Compiler
CC := sds++ $(SDSFLAGS)

.PHONY: all
all: $(TARGET)/$(EXECUTABLE)

$(TARGET)/$(EXECUTABLE): $(OBJECTS)
	mkdir -p $(TARGET)
	@echo 'Building Target: $@'
	@echo 'Trigerring: SDS++ Linker'
	cd $(TARGET) ; $(CC) -o $(EXECUTABLE) $(OBJECTS) $(EMU_FLAGS)
	@echo 'SDx Completed Building Target: $@'
	@echo ' '

$(pwd)/$(TARGET)/%.o: $(pwd)/$(SRC_DIR)/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: SDS++ Compiler'
	mkdir -p $(TARGET)
	cd $(TARGET) ; $(CC) $(CFLAGS) -o $(LFLAGS) $(HW_FLAGS)
	@echo 'Finished building: $<'
	@echo ' '

# Check Rule Builds the Sources and Executes on Specified Target
check: all
ifeq ($(TARGET), emu)

    ifeq ($(TARGET_OS), linux)
	    cp $(ABS_COMMON_REPO)/utility/emu_run.sh $(TARGET)/
	    cd $(TARGET) ; ./emu_run.sh $(EXECUTABLE)
    else
	    cd $(TARGET) ; sdsoc_emulator -timeout 120
    endif

else
	$(info "This Release Doesn't Support Automated Hardware Execution")
endif

.PHONY: cleanall clean ultraclean
clean:
	$(RM) $(TARGET)/$(EXECUTABLE) $(OBJECTS)

cleanall:clean
	$(RM) -rf $(TARGET) .Xil

.PHONY: docs
docs: README.md

README.md: description.json
	$(ABS_COMMON_REPO)/utility/readme_gen/readme_gen.py description.json

ECHO:= @echo

.PHONY: help

help::
	$(ECHO) "Makefile Usage:"
	$(ECHO) "	make all TARGET=<emu/hw> TARGET_OS=<linux/standalone>"
	$(ECHO) "		Command to generate the design for specified Target and OS."
	$(ECHO) ""
	$(ECHO) "	make clean TARGET=<emu/hw> TARGET_OS=<linux/standalone>"
	$(ECHO) "		Command to remove the generated non-hardware files."
	$(ECHO) ""
	$(ECHO) "	make cleanall"
	$(ECHO) "		Command to remove all the generated files."
	$(ECHO) ""
	$(ECHO) "	make check TARGET=<emu/hw> TARGET_OS=<linux/standalone>"
	$(ECHO) "		Command to run application in emulation."
	$(ECHO) ""

