# Copyright (c) 2025 ETH Zurich and University of Bologna.
# Licensed under the Apache License, Version 2.0, see LICENSE for details.
# SPDX-License-Identifier: Apache-2.0
#
# Authors:
# - Zexin Fu <zexifu@iis.ee.ethz.ch>
set ROOT ".."

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "$ROOT/rtl/common_verification/clk_rst_gen.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "$ROOT/rtl/tech_cells_generic/tc_sram.sv" \
    "$ROOT/rtl/tech_cells_generic/tc_sram_impl.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "$ROOT/rtl/tech_cells_generic/tc_clk.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "$ROOT/rtl/common_cells/binary_to_gray.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "$ROOT/rtl/common_cells/cb_filter_pkg.sv" \
    "$ROOT/rtl/common_cells/cc_onehot.sv" \
    "$ROOT/rtl/common_cells/cdc_reset_ctrlr_pkg.sv" \
    "$ROOT/rtl/common_cells/cf_math_pkg.sv" \
    "$ROOT/rtl/common_cells/clk_int_div.sv" \
    "$ROOT/rtl/common_cells/credit_counter.sv" \
    "$ROOT/rtl/common_cells/delta_counter.sv" \
    "$ROOT/rtl/common_cells/ecc_pkg.sv" \
    "$ROOT/rtl/common_cells/edge_propagator_tx.sv" \
    "$ROOT/rtl/common_cells/exp_backoff.sv" \
    "$ROOT/rtl/common_cells/fifo_v3.sv" \
    "$ROOT/rtl/common_cells/gray_to_binary.sv" \
    "$ROOT/rtl/common_cells/isochronous_4phase_handshake.sv" \
    "$ROOT/rtl/common_cells/isochronous_spill_register.sv" \
    "$ROOT/rtl/common_cells/lfsr.sv" \
    "$ROOT/rtl/common_cells/lfsr_16bit.sv" \
    "$ROOT/rtl/common_cells/lfsr_8bit.sv" \
    "$ROOT/rtl/common_cells/lossy_valid_to_stream.sv" \
    "$ROOT/rtl/common_cells/mv_filter.sv" \
    "$ROOT/rtl/common_cells/onehot_to_bin.sv" \
    "$ROOT/rtl/common_cells/plru_tree.sv" \
    "$ROOT/rtl/common_cells/passthrough_stream_fifo.sv" \
    "$ROOT/rtl/common_cells/popcount.sv" \
    "$ROOT/rtl/common_cells/rr_arb_tree.sv" \
    "$ROOT/rtl/common_cells/rstgen_bypass.sv" \
    "$ROOT/rtl/common_cells/serial_deglitch.sv" \
    "$ROOT/rtl/common_cells/shift_reg.sv" \
    "$ROOT/rtl/common_cells/shift_reg_gated.sv" \
    "$ROOT/rtl/common_cells/spill_register_flushable.sv" \
    "$ROOT/rtl/common_cells/stream_demux.sv" \
    "$ROOT/rtl/common_cells/stream_filter.sv" \
    "$ROOT/rtl/common_cells/stream_fork.sv" \
    "$ROOT/rtl/common_cells/stream_intf.sv" \
    "$ROOT/rtl/common_cells/stream_join_dynamic.sv" \
    "$ROOT/rtl/common_cells/stream_mux.sv" \
    "$ROOT/rtl/common_cells/stream_throttle.sv" \
    "$ROOT/rtl/common_cells/sub_per_hash.sv" \
    "$ROOT/rtl/common_cells/sync.sv" \
    "$ROOT/rtl/common_cells/sync_wedge.sv" \
    "$ROOT/rtl/common_cells/unread.sv" \
    "$ROOT/rtl/common_cells/read.sv" \
    "$ROOT/rtl/common_cells/addr_decode_dync.sv" \
    "$ROOT/rtl/common_cells/cdc_2phase.sv" \
    "$ROOT/rtl/common_cells/cdc_4phase.sv" \
    "$ROOT/rtl/common_cells/clk_int_div_static.sv" \
    "$ROOT/rtl/common_cells/addr_decode.sv" \
    "$ROOT/rtl/common_cells/addr_decode_napot.sv" \
    "$ROOT/rtl/common_cells/multiaddr_decode.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "$ROOT/rtl/common_cells/cb_filter.sv" \
    "$ROOT/rtl/common_cells/cdc_fifo_2phase.sv" \
    "$ROOT/rtl/common_cells/clk_mux_glitch_free.sv" \
    "$ROOT/rtl/common_cells/counter.sv" \
    "$ROOT/rtl/common_cells/ecc_decode.sv" \
    "$ROOT/rtl/common_cells/ecc_encode.sv" \
    "$ROOT/rtl/common_cells/edge_detect.sv" \
    "$ROOT/rtl/common_cells/lzc.sv" \
    "$ROOT/rtl/common_cells/max_counter.sv" \
    "$ROOT/rtl/common_cells/rstgen.sv" \
    "$ROOT/rtl/common_cells/spill_register.sv" \
    "$ROOT/rtl/common_cells/stream_delay.sv" \
    "$ROOT/rtl/common_cells/stream_fifo.sv" \
    "$ROOT/rtl/common_cells/stream_fork_dynamic.sv" \
    "$ROOT/rtl/common_cells/stream_join.sv" \
    "$ROOT/rtl/common_cells/cdc_reset_ctrlr.sv" \
    "$ROOT/rtl/common_cells/cdc_fifo_gray.sv" \
    "$ROOT/rtl/common_cells/fall_through_register.sv" \
    "$ROOT/rtl/common_cells/id_queue.sv" \
    "$ROOT/rtl/common_cells/stream_to_mem.sv" \
    "$ROOT/rtl/common_cells/stream_arbiter_flushable.sv" \
    "$ROOT/rtl/common_cells/stream_fifo_optimal_wrap.sv" \
    "$ROOT/rtl/common_cells/stream_register.sv" \
    "$ROOT/rtl/common_cells/stream_xbar.sv" \
    "$ROOT/rtl/common_cells/cdc_fifo_gray_clearable.sv" \
    "$ROOT/rtl/common_cells/cdc_2phase_clearable.sv" \
    "$ROOT/rtl/common_cells/mem_to_banks_detailed.sv" \
    "$ROOT/rtl/common_cells/stream_arbiter.sv" \
    "$ROOT/rtl/common_cells/stream_omega_net.sv" \
    "$ROOT/rtl/common_cells/mem_to_banks.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/apb/include" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "$ROOT/rtl/apb/apb_pkg.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/apb/include" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "+incdir+$ROOT/rtl/register_interface/include" \
    "$ROOT/rtl/register_interface/reg_intf.sv" \
    "$ROOT/rtl/register_interface/lowrisc_opentitan/prim_subreg_arb.sv" \
    "$ROOT/rtl/register_interface/lowrisc_opentitan/prim_subreg_ext.sv" \
    "$ROOT/rtl/register_interface/periph_to_reg.sv" \
    "$ROOT/rtl/register_interface/reg_to_apb.sv" \
    "$ROOT/rtl/register_interface/lowrisc_opentitan/prim_subreg_shadow.sv" \
    "$ROOT/rtl/register_interface/lowrisc_opentitan/prim_subreg.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/apb/include" \
    "+incdir+$ROOT/rtl/register_interface/include" \
    "$ROOT/rtl/apb_uart/slib_clock_div.sv" \
    "$ROOT/rtl/apb_uart/slib_counter.sv" \
    "$ROOT/rtl/apb_uart/slib_edge_detect.sv" \
    "$ROOT/rtl/apb_uart/slib_fifo.sv" \
    "$ROOT/rtl/apb_uart/slib_input_filter.sv" \
    "$ROOT/rtl/apb_uart/slib_input_sync.sv" \
    "$ROOT/rtl/apb_uart/slib_mv_filter.sv" \
    "$ROOT/rtl/apb_uart/uart_baudgen.sv" \
    "$ROOT/rtl/apb_uart/uart_interrupt.sv" \
    "$ROOT/rtl/apb_uart/uart_receiver.sv" \
    "$ROOT/rtl/apb_uart/uart_transmitter.sv" \
    "$ROOT/rtl/apb_uart/apb_uart.sv" \
    "$ROOT/rtl/apb_uart/apb_uart_wrap.sv" \
    "$ROOT/rtl/apb_uart/reg_uart_wrap.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/cve2/include" \
    "$ROOT/rtl/cve2/cve2_pkg.sv" \
    "$ROOT/rtl/cve2/cve2_alu.sv" \
    "$ROOT/rtl/cve2/cve2_compressed_decoder.sv" \
    "$ROOT/rtl/cve2/cve2_controller.sv" \
    "$ROOT/rtl/cve2/cve2_counter.sv" \
    "$ROOT/rtl/cve2/cve2_csr.sv" \
    "$ROOT/rtl/cve2/cve2_decoder.sv" \
    "$ROOT/rtl/cve2/cve2_fetch_fifo.sv" \
    "$ROOT/rtl/cve2/cve2_load_store_unit.sv" \
    "$ROOT/rtl/cve2/cve2_multdiv_fast.sv" \
    "$ROOT/rtl/cve2/cve2_multdiv_slow.sv" \
    "$ROOT/rtl/cve2/cve2_pmp.sv" \
    "$ROOT/rtl/cve2/cve2_register_file_ff.sv" \
    "$ROOT/rtl/cve2/cve2_wb.sv" \
    "$ROOT/rtl/cve2/cve2_cs_registers.sv" \
    "$ROOT/rtl/cve2/cve2_ex_block.sv" \
    "$ROOT/rtl/cve2/cve2_id_stage.sv" \
    "$ROOT/rtl/cve2/cve2_prefetch_buffer.sv" \
    "$ROOT/rtl/cve2/cve2_if_stage.sv" \
    "$ROOT/rtl/cve2/cve2_core.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "+incdir+$ROOT/rtl/obi/include" \
    "$ROOT/rtl/obi/obi_pkg.sv" \
    "$ROOT/rtl/obi/obi_intf.sv" \
    "$ROOT/rtl/obi/obi_rready_converter.sv" \
    "$ROOT/rtl/obi/obi_atop_resolver.sv" \
    "$ROOT/rtl/obi/obi_demux.sv" \
    "$ROOT/rtl/obi/obi_err_sbr.sv" \
    "$ROOT/rtl/obi/obi_mux.sv" \
    "$ROOT/rtl/obi/obi_sram_shim.sv" \
    "$ROOT/rtl/obi/obi_xbar.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "$ROOT/rtl/riscv-dbg/dm_pkg.sv" \
    "$ROOT/rtl/riscv-dbg/debug_rom/debug_rom.sv" \
    "$ROOT/rtl/riscv-dbg/debug_rom/debug_rom_one_scratch.sv" \
    "$ROOT/rtl/riscv-dbg/dm_csrs.sv" \
    "$ROOT/rtl/riscv-dbg/dm_mem.sv" \
    "$ROOT/rtl/riscv-dbg/dmi_cdc.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "$ROOT/rtl/riscv-dbg/dmi_jtag_tap.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "$ROOT/rtl/riscv-dbg/dm_sba.sv" \
    "$ROOT/rtl/riscv-dbg/dm_top.sv" \
    "$ROOT/rtl/riscv-dbg/dmi_jtag.sv" \
    "$ROOT/rtl/riscv-dbg/dm_obi_top.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "$ROOT/rtl/riscv-dbg/dmi_test.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "$ROOT/rtl/riscv-dbg/tb/jtag_test_simple.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "$ROOT/rtl/timer_unit/timer_unit_counter.sv" \
    "$ROOT/rtl/timer_unit/timer_unit_counter_presc.sv" \
    "$ROOT/rtl/timer_unit/apb_timer_unit.sv" \
    "$ROOT/rtl/timer_unit/timer_unit.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/apb/include" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "+incdir+$ROOT/rtl/obi/include" \
    "+incdir+$ROOT/rtl/register_interface/include" \
    "$ROOT/ihp13/tc_clk.sv" \
    "$ROOT/ihp13/tc_sram.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/apb/include" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "+incdir+$ROOT/rtl/obi/include" \
    "+incdir+$ROOT/rtl/register_interface/include" \
    "$ROOT/rtl/croc_pkg.sv" \
    "$ROOT/rtl/user_pkg.sv" \
    "$ROOT/rtl/soc_ctrl/soc_ctrl_reg_pkg.sv" \
    "$ROOT/rtl/gpio/gpio_reg_pkg.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/apb/include" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "+incdir+$ROOT/rtl/obi/include" \
    "+incdir+$ROOT/rtl/register_interface/include" \
    "$ROOT/rtl/core_wrap.sv" \
    "$ROOT/rtl/soc_ctrl/soc_ctrl_reg_top.sv" \
    "$ROOT/rtl/gpio/gpio_reg_top.sv" \
    "$ROOT/rtl/gpio/gpio.sv" \
    "$ROOT/rtl/croc_domain.sv" \
    "$ROOT/rtl/user_domain.sv" \
    "$ROOT/rtl/croc_soc.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/apb/include" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "+incdir+$ROOT/rtl/obi/include" \
    "+incdir+$ROOT/rtl/register_interface/include" \
    "$ROOT/rtl/croc_chip.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/apb/include" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "+incdir+$ROOT/rtl/obi/include" \
    "+incdir+$ROOT/rtl/register_interface/include" \
    "$ROOT/openroad/out_final/croc.v" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    "+define+TARGET_IHP13" \
    "+define+TARGET_NETLIST_OPENROAD" \
    "+define+TARGET_SIMULATION" \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/apb/include" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "+incdir+$ROOT/rtl/obi/include" \
    "+incdir+$ROOT/rtl/register_interface/include" \
    "$ROOT/rtl/tb_croc_soc.sv" \
}]} {return 1}

