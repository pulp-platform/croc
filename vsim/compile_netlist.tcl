# Compile testbench's dependencies RTL files
if {[catch { vlog -incr -sv \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+$ROOT/rtl/common_cells/include" \
    "+incdir+$ROOT/rtl/register_interface/include" \
    "$ROOT/rtl/common_verification/clk_rst_gen.sv" \
    "$ROOT/rtl/tech_cells_generic/tc_sram.sv" \
    "$ROOT/rtl/tech_cells_generic/tc_sram_impl.sv" \
    "$ROOT/rtl/tech_cells_generic/tc_clk.sv" \
    "$ROOT/rtl/common_cells/binary_to_gray.sv" \
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
    "$ROOT/rtl/riscv-dbg/dm_pkg.sv" \
    "$ROOT/rtl/riscv-dbg/debug_rom/debug_rom.sv" \
    "$ROOT/rtl/riscv-dbg/debug_rom/debug_rom_one_scratch.sv" \
    "$ROOT/rtl/riscv-dbg/dm_csrs.sv" \
    "$ROOT/rtl/riscv-dbg/dm_mem.sv" \
    "$ROOT/rtl/riscv-dbg/dmi_cdc.sv" \
    "$ROOT/rtl/riscv-dbg/dmi_jtag_tap.sv" \
    "$ROOT/rtl/riscv-dbg/dm_sba.sv" \
    "$ROOT/rtl/riscv-dbg/dm_top.sv" \
    "$ROOT/rtl/riscv-dbg/dmi_jtag.sv" \
    "$ROOT/rtl/riscv-dbg/dm_obi_top.sv" \
    "$ROOT/rtl/riscv-dbg/dmi_test.sv" \
    "$ROOT/rtl/croc_pkg.sv" \
    "$ROOT/rtl/soc_ctrl/soc_ctrl_reg_pkg.sv" \
}]} {return 1}

# Compile Croc netlist
if {[catch { vlog -incr -sv \
    "$ROOT/yosys/out/croc_chip_yosys_debug.v" \
}]} {return 1}

# Compile Croc's testbench
if {[catch { vlog -incr -sv \
    "+define+TARGET_NETLIST_YOSYS" \
    "$ROOT/rtl/tb_croc_soc.sv" \
}]} {return 1}
