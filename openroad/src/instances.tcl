# Copyright 2024 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Philippe Sauter <phsauter@ethz.ch>

# Automatic collection of SRAMs and delay-line macros
# Used for automatic macro placement
# set macros [list]

# set srams [get_cells *RM_IHP*]
# foreach inst $srams {
#     lappend macros $inst
# }


# Macro names as produced by the yosys synthesis
# Used for manual macro placement

set CROC            i_croc_soc/i_croc
set USER            i_croc_soc/i_user
set IBEX            $CROC/i_core_wrap.i_ibex
set SRAM            $CROC/gen_sram_bank
set JTAG            $CROC/i_dmi_jtag
set SRAM_256x64  	genblk2.genblk1.genblk1.genblk1.genblk1.gen_256x32xBx1.i_cut

# memory banks
set bank0_sram0 $SRAM.__0.i_sram/$SRAM_256x64
set bank1_sram0 $SRAM.__1.i_sram/$SRAM_256x64

set ibex_clkgate $IBEX/core_clock_gate_i.i_clkgate

set JTAG_ASYNC_REQ [get_nets $JTAG/i_dmi_cdc/i_cdc_req/*async_*]
set JTAG_ASYNC_RSP [get_nets $JTAG/i_dmi_cdc/i_cdc_resp/*async_*]