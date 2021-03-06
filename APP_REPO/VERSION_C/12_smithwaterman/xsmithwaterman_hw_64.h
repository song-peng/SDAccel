// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.1
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

// control
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of group_id_x
//        bit 31~0 - group_id_x[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of group_id_y
//        bit 31~0 - group_id_y[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of group_id_z
//        bit 31~0 - group_id_z[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of global_offset_x
//        bit 31~0 - global_offset_x[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of global_offset_y
//        bit 31~0 - global_offset_y[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of global_offset_z
//        bit 31~0 - global_offset_z[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of matrix
//        bit 31~0 - matrix[31:0] (Read/Write)
// 0x44 : Data signal of matrix
//        bit 31~0 - matrix[63:32] (Read/Write)
// 0x48 : reserved
// 0x4c : Data signal of maxIndex
//        bit 31~0 - maxIndex[31:0] (Read/Write)
// 0x50 : Data signal of maxIndex
//        bit 31~0 - maxIndex[63:32] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of s1
//        bit 31~0 - s1[31:0] (Read/Write)
// 0x5c : Data signal of s1
//        bit 31~0 - s1[63:32] (Read/Write)
// 0x60 : reserved
// 0x64 : Data signal of s2
//        bit 31~0 - s2[31:0] (Read/Write)
// 0x68 : Data signal of s2
//        bit 31~0 - s2[63:32] (Read/Write)
// 0x6c : reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XSMITHWATERMAN_CONTROL_ADDR_AP_CTRL              0x00
#define XSMITHWATERMAN_CONTROL_ADDR_GIE                  0x04
#define XSMITHWATERMAN_CONTROL_ADDR_IER                  0x08
#define XSMITHWATERMAN_CONTROL_ADDR_ISR                  0x0c
#define XSMITHWATERMAN_CONTROL_ADDR_GROUP_ID_X_DATA      0x10
#define XSMITHWATERMAN_CONTROL_BITS_GROUP_ID_X_DATA      32
#define XSMITHWATERMAN_CONTROL_ADDR_GROUP_ID_Y_DATA      0x18
#define XSMITHWATERMAN_CONTROL_BITS_GROUP_ID_Y_DATA      32
#define XSMITHWATERMAN_CONTROL_ADDR_GROUP_ID_Z_DATA      0x20
#define XSMITHWATERMAN_CONTROL_BITS_GROUP_ID_Z_DATA      32
#define XSMITHWATERMAN_CONTROL_ADDR_GLOBAL_OFFSET_X_DATA 0x28
#define XSMITHWATERMAN_CONTROL_BITS_GLOBAL_OFFSET_X_DATA 32
#define XSMITHWATERMAN_CONTROL_ADDR_GLOBAL_OFFSET_Y_DATA 0x30
#define XSMITHWATERMAN_CONTROL_BITS_GLOBAL_OFFSET_Y_DATA 32
#define XSMITHWATERMAN_CONTROL_ADDR_GLOBAL_OFFSET_Z_DATA 0x38
#define XSMITHWATERMAN_CONTROL_BITS_GLOBAL_OFFSET_Z_DATA 32
#define XSMITHWATERMAN_CONTROL_ADDR_MATRIX_DATA          0x40
#define XSMITHWATERMAN_CONTROL_BITS_MATRIX_DATA          64
#define XSMITHWATERMAN_CONTROL_ADDR_MAXINDEX_DATA        0x4c
#define XSMITHWATERMAN_CONTROL_BITS_MAXINDEX_DATA        64
#define XSMITHWATERMAN_CONTROL_ADDR_S1_DATA              0x58
#define XSMITHWATERMAN_CONTROL_BITS_S1_DATA              64
#define XSMITHWATERMAN_CONTROL_ADDR_S2_DATA              0x64
#define XSMITHWATERMAN_CONTROL_BITS_S2_DATA              64

