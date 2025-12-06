# Compile testbench's dependencies RTL files
if {[catch { vlog -incr -sv \
    "+define+TARGET_VERILATOR" \
    "+define+TARGET_VSIM" \
    "+define+SYNTHESIS" \
    "+define+SIMULATION" \
    "+incdir+../rtl/common_cells/include" \
    "+incdir+../rtl/register_interface/include" \
    "../rtl/common_verification/clk_rst_gen.sv" \
    "../rtl/tech_cells_generic/tc_sram.sv" \
    "../rtl/tech_cells_generic/tc_sram_impl.sv" \
    "../rtl/tech_cells_generic/tc_clk.sv" \
    "../rtl/common_cells/binary_to_gray.sv" \
    "../rtl/common_cells/cb_filter_pkg.sv" \
    "../rtl/common_cells/cc_onehot.sv" \
    "../rtl/common_cells/cdc_reset_ctrlr_pkg.sv" \
    "../rtl/common_cells/cf_math_pkg.sv" \
    "../rtl/common_cells/clk_int_div.sv" \
    "../rtl/common_cells/credit_counter.sv" \
    "../rtl/common_cells/delta_counter.sv" \
    "../rtl/common_cells/ecc_pkg.sv" \
    "../rtl/common_cells/edge_propagator_tx.sv" \
    "../rtl/common_cells/exp_backoff.sv" \
    "../rtl/common_cells/fifo_v3.sv" \
    "../rtl/common_cells/gray_to_binary.sv" \
    "../rtl/common_cells/isochronous_4phase_handshake.sv" \
    "../rtl/common_cells/isochronous_spill_register.sv" \
    "../rtl/common_cells/lfsr.sv" \
    "../rtl/common_cells/lfsr_16bit.sv" \
    "../rtl/common_cells/lfsr_8bit.sv" \
    "../rtl/common_cells/lossy_valid_to_stream.sv" \
    "../rtl/common_cells/mv_filter.sv" \
    "../rtl/common_cells/onehot_to_bin.sv" \
    "../rtl/common_cells/plru_tree.sv" \
    "../rtl/common_cells/passthrough_stream_fifo.sv" \
    "../rtl/common_cells/popcount.sv" \
    "../rtl/common_cells/rr_arb_tree.sv" \
    "../rtl/common_cells/rstgen_bypass.sv" \
    "../rtl/common_cells/serial_deglitch.sv" \
    "../rtl/common_cells/shift_reg.sv" \
    "../rtl/common_cells/shift_reg_gated.sv" \
    "../rtl/common_cells/spill_register_flushable.sv" \
    "../rtl/common_cells/stream_demux.sv" \
    "../rtl/common_cells/stream_filter.sv" \
    "../rtl/common_cells/stream_fork.sv" \
    "../rtl/common_cells/stream_intf.sv" \
    "../rtl/common_cells/stream_join_dynamic.sv" \
    "../rtl/common_cells/stream_mux.sv" \
    "../rtl/common_cells/stream_throttle.sv" \
    "../rtl/common_cells/sub_per_hash.sv" \
    "../rtl/common_cells/sync.sv" \
    "../rtl/common_cells/sync_wedge.sv" \
    "../rtl/common_cells/unread.sv" \
    "../rtl/common_cells/read.sv" \
    "../rtl/common_cells/addr_decode_dync.sv" \
    "../rtl/common_cells/cdc_2phase.sv" \
    "../rtl/common_cells/cdc_4phase.sv" \
    "../rtl/common_cells/clk_int_div_static.sv" \
    "../rtl/common_cells/addr_decode.sv" \
    "../rtl/common_cells/addr_decode_napot.sv" \
    "../rtl/common_cells/multiaddr_decode.sv" \
    "../rtl/common_cells/cb_filter.sv" \
    "../rtl/common_cells/cdc_fifo_2phase.sv" \
    "../rtl/common_cells/clk_mux_glitch_free.sv" \
    "../rtl/common_cells/counter.sv" \
    "../rtl/common_cells/ecc_decode.sv" \
    "../rtl/common_cells/ecc_encode.sv" \
    "../rtl/common_cells/edge_detect.sv" \
    "../rtl/common_cells/lzc.sv" \
    "../rtl/common_cells/max_counter.sv" \
    "../rtl/common_cells/rstgen.sv" \
    "../rtl/common_cells/spill_register.sv" \
    "../rtl/common_cells/stream_delay.sv" \
    "../rtl/common_cells/stream_fifo.sv" \
    "../rtl/common_cells/stream_fork_dynamic.sv" \
    "../rtl/common_cells/stream_join.sv" \
    "../rtl/common_cells/cdc_reset_ctrlr.sv" \
    "../rtl/common_cells/cdc_fifo_gray.sv" \
    "../rtl/common_cells/fall_through_register.sv" \
    "../rtl/common_cells/id_queue.sv" \
    "../rtl/common_cells/stream_to_mem.sv" \
    "../rtl/common_cells/stream_arbiter_flushable.sv" \
    "../rtl/common_cells/stream_fifo_optimal_wrap.sv" \
    "../rtl/common_cells/stream_register.sv" \
    "../rtl/common_cells/stream_xbar.sv" \
    "../rtl/common_cells/cdc_fifo_gray_clearable.sv" \
    "../rtl/common_cells/cdc_2phase_clearable.sv" \
    "../rtl/common_cells/mem_to_banks_detailed.sv" \
    "../rtl/common_cells/stream_arbiter.sv" \
    "../rtl/common_cells/stream_omega_net.sv" \
    "../rtl/common_cells/mem_to_banks.sv" \
    "../rtl/riscv-dbg/dm_pkg.sv" \
    "../rtl/riscv-dbg/debug_rom/debug_rom.sv" \
    "../rtl/riscv-dbg/debug_rom/debug_rom_one_scratch.sv" \
    "../rtl/riscv-dbg/dm_csrs.sv" \
    "../rtl/riscv-dbg/dm_mem.sv" \
    "../rtl/riscv-dbg/dmi_cdc.sv" \
    "../rtl/riscv-dbg/dmi_jtag_tap.sv" \
    "../rtl/riscv-dbg/dm_sba.sv" \
    "../rtl/riscv-dbg/dm_top.sv" \
    "../rtl/riscv-dbg/dmi_jtag.sv" \
    "../rtl/riscv-dbg/dm_obi_top.sv" \
    "../rtl/riscv-dbg/dmi_test.sv" \
    "../rtl/croc_pkg.sv" \
    "../rtl/soc_ctrl/soc_ctrl_reg_pkg.sv" \
}]} {return 1}

# Compile Croc netlist
if {[catch { vlog -incr -sv \
    "../yosys/out/croc_chip_yosys_debug.v" \
}]} {return 1}

# Compile Croc's testbench
if {[catch { vlog -incr -sv \
    "+define+TARGET_NETLIST_YOSYS" \
    "../rtl/tb_croc_soc.sv" \
}]} {return 1}
