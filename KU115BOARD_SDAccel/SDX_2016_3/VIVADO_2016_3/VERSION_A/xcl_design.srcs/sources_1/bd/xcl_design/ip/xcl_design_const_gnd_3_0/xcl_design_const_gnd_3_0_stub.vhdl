-- Copyright 1986-2016 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2016.3_sdx (win64) Build 1721784 Tue Nov 29 22:12:44 MST 2016
-- Date        : Tue May 16 05:50:26 2017
-- Host        : SakinderLaptop1 running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               c:/Sim/sdaccel_ku/xcl_design/xcl_design.srcs/sources_1/bd/xcl_design/ip/xcl_design_const_gnd_3_0/xcl_design_const_gnd_3_0_stub.vhdl
-- Design      : xcl_design_const_gnd_3_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xcku115-flvb2104-2-e
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity xcl_design_const_gnd_3_0 is
  Port ( 
    dout : out STD_LOGIC_VECTOR ( 2 downto 0 )
  );

end xcl_design_const_gnd_3_0;

architecture stub of xcl_design_const_gnd_3_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "dout[2:0]";
begin
end;