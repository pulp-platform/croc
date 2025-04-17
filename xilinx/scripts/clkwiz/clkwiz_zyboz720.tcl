# Copyright 2024 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51
#
# Florian Zaruba <zarubaf@iis.ee.ethz.ch>
# Cyril Koenig <cykoenig@iis.ee.ethz.ch>
# Paul Scheffler <paulsc@iis.ee.ethz.ch>
# Felix Niederer <fniederer@student.ethz.ch>

create_ip -name clk_wiz -vendor xilinx.com -library ip -version 6.0 -module_name $proj
set_property -dict [list \
  CONFIG.PRIM_SOURCE {No_buffer} \
  CONFIG.PRIM_IN_FREQ {125.000} \
  CONFIG.CLKOUT1_USED {true} \
  CONFIG.CLK_OUT1_PORT {clk_20} \
  CONFIG.CLKOUT1_REQUESTED_OUT_FREQ {20.000} \
  CONFIG.CLKIN1_JITTER_PS {50.0} \
  CONFIG.MMCM_CLKFBOUT_MULT_F {8.000} \
  CONFIG.MMCM_CLKIN1_PERIOD {8.000} \
  CONFIG.MMCM_CLKOUT1_DIVIDE {50} \
  CONFIG.NUM_OUT_CLKS {1} \
  CONFIG.CLKOUT1_JITTER {155.330} \
  CONFIG.CLKOUT1_PHASE_ERROR {89.971} \
] [get_ips $proj]
