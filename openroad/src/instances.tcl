# Copyright 2024 ETH Zurich and University of Bologna.
# Solderpad Hardware License, Version 0.51, see LICENSE for details.
# SPDX-License-Identifier: SHL-0.51

# Authors:
# - Philippe Sauter <phsauter@iis.ee.ethz.ch>

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
set SRAM_512x32     gen_512x32xBx1.i_cut

# memory banks
set sram {\[0\].i_sram/}
set bank0_sram0 $SRAM$sram$SRAM_512x32
set sram {\[1\].i_sram/}
set bank1_sram0 $SRAM$sram$SRAM_512x32

# JTAG request and response CDCs
# Goal: Find the async nets and their source and destination cells
# We only want to constrain paths internal to the CDC and going through the async nets.
# It is more complex than usual due to how OpenROAD currently dissolves hierarchy when reading in designs.
set JTAG_CDC_REQ $JTAG/i_dmi_cdc.i_cdc_req
# find all startpoints (flops) that drive through async_data nets and flops that directly drive async nets
set JTAG_ASYNC_REQ_START [get_fanin -to [get_nets $JTAG_CDC_REQ/*async_data*] -flat -startpoints_only -only_cells]
set JTAG_ASYNC_REQ_START [concat $JTAG_ASYNC_REQ_START [get_cells $JTAG_CDC_REQ/*async*_o*_reg]]
# find all endpoints (flops) that are driven through async nets and are in the CDC
set JTAG_ASYNC_REQ_END [list]
set JTAG_ASYNC_REQ_CANDIDATES [get_fanout -from [get_nets $JTAG_CDC_REQ/*async*_data*] -flat -endpoints_only -only_cells]
foreach cell $JTAG_ASYNC_REQ_CANDIDATES {
	if {[string match "${JTAG_CDC_REQ}/*" [get_name $cell]]} {
		lappend JTAG_ASYNC_REQ_END $cell
	}
}
# These paths (clear and isolate) go out of the CDC but we know they cannot cause timing violations
# because they have a seperate 4-phase handshake making sure they stay stable for multiple cycles in each clock domain.
lappend JTAG_ASYNC_REQ_END {*}[get_fanout -from [get_pins $JTAG_CDC_REQ/*i_cdc_reset_ctrlr_half_a*async_data*_reg/Q] -flat -endpoints_only -only_cells]

# The same for the response CDC
set JTAG_CDC_RSP $JTAG/i_dmi_cdc.i_cdc_resp
set JTAG_ASYNC_RSP_START [get_fanin -to [get_nets $JTAG_CDC_RSP/*async_data*] -flat -startpoints_only -only_cells]
set JTAG_ASYNC_RSP_START [concat $JTAG_ASYNC_RSP_START [get_cells $JTAG_CDC_RSP/*async*_o*_reg]]
set JTAG_ASYNC_RSP_END [list]
set JTAG_ASYNC_RSP_CANDIDATES [get_fanout -from [get_nets $JTAG_CDC_RSP/*async*_data*] -flat -endpoints_only -only_cells]
foreach cell $JTAG_ASYNC_RSP_CANDIDATES {
	if {[string match "${JTAG_CDC_RSP}/*" [get_name $cell]]} {
		lappend JTAG_ASYNC_RSP_END $cell
	}
}
lappend JTAG_ASYNC_RSP_END {*}[get_fanout -from [get_pins $JTAG_CDC_RSP/*i_cdc_reset_ctrlr_half_a*async_data*_reg/Q] -flat -endpoints_only -only_cells]

