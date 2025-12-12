# Copyright (c) 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Published with permission from Siemens. 
# Siemens QuestaSim is available through EDA Higher Education Software Program
# https://www.sw.siemens.com/en-US/academic/educators/eda-higher-education-software/
#
# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/rst_ni
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/clk_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/ref_clk_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/jtag_tck_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/jtag_tdi_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/jtag_tdo_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/jtag_tms_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/jtag_trst_ni
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/data_addr_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/data_be_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/data_gnt_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/data_rdata_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/data_req_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/data_rvalid_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/data_wdata_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/data_we_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/fetch_enable_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/instr_addr_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/instr_gnt_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/instr_rdata_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/instr_req_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/instr_rvalid_i
update