# This script was generated automatically by bender.
set ROOT "/home/phsauter/repos/croc-soc"

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "$ROOT/.bender/git/checkouts/common_verification-9c658e5d2b0ba5b1/src/clk_rst_gen.sv" \
    "$ROOT/.bender/git/checkouts/common_verification-9c658e5d2b0ba5b1/src/sim_timeout.sv" \
    "$ROOT/.bender/git/checkouts/common_verification-9c658e5d2b0ba5b1/src/stream_watchdog.sv" \
    "$ROOT/.bender/git/checkouts/common_verification-9c658e5d2b0ba5b1/src/signal_highlighter.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "$ROOT/.bender/git/checkouts/common_verification-9c658e5d2b0ba5b1/src/rand_id_queue.sv" \
    "$ROOT/.bender/git/checkouts/common_verification-9c658e5d2b0ba5b1/src/rand_stream_mst.sv" \
    "$ROOT/.bender/git/checkouts/common_verification-9c658e5d2b0ba5b1/src/rand_synch_holdable_driver.sv" \
    "$ROOT/.bender/git/checkouts/common_verification-9c658e5d2b0ba5b1/src/rand_verif_pkg.sv" \
    "$ROOT/.bender/git/checkouts/common_verification-9c658e5d2b0ba5b1/src/rand_synch_driver.sv" \
    "$ROOT/.bender/git/checkouts/common_verification-9c658e5d2b0ba5b1/src/rand_stream_slv.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/rtl/tc_sram.sv" \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/rtl/tc_sram_impl.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/rtl/tc_clk.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/deprecated/cluster_pwr_cells.sv" \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/deprecated/generic_memory.sv" \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/deprecated/generic_rom.sv" \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/deprecated/pad_functional.sv" \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/deprecated/pulp_buffer.sv" \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/deprecated/pulp_pwr_cells.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/tc_pwr.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/deprecated/pulp_clock_gating_async.sv" \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/deprecated/cluster_clk_cells.sv" \
    "$ROOT/.bender/git/checkouts/tech_cells_generic-58757830bf570bff/src/deprecated/pulp_clk_cells.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/binary_to_gray.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/cb_filter_pkg.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/cc_onehot.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/cdc_reset_ctrlr_pkg.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/cf_math_pkg.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/clk_int_div.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/delta_counter.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/ecc_pkg.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/edge_propagator_tx.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/exp_backoff.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/fifo_v3.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/gray_to_binary.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/isochronous_4phase_handshake.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/isochronous_spill_register.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/lfsr.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/lfsr_16bit.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/lfsr_8bit.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/lossy_valid_to_stream.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/mv_filter.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/onehot_to_bin.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/plru_tree.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/passthrough_stream_fifo.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/popcount.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/rr_arb_tree.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/rstgen_bypass.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/serial_deglitch.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/shift_reg.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/shift_reg_gated.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/spill_register_flushable.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_demux.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_filter.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_fork.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_intf.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_join_dynamic.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_mux.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_throttle.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/sub_per_hash.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/sync.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/sync_wedge.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/unread.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/read.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/addr_decode_dync.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/cdc_2phase.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/cdc_4phase.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/clk_int_div_static.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/addr_decode.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/addr_decode_napot.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/multiaddr_decode.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/cb_filter.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/cdc_fifo_2phase.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/clk_mux_glitch_free.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/counter.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/ecc_decode.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/ecc_encode.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/edge_detect.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/lzc.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/max_counter.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/rstgen.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/spill_register.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_delay.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_fifo.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_fork_dynamic.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_join.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/cdc_reset_ctrlr.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/cdc_fifo_gray.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/fall_through_register.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/id_queue.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_to_mem.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_arbiter_flushable.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_fifo_optimal_wrap.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_register.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_xbar.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/cdc_fifo_gray_clearable.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/cdc_2phase_clearable.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/mem_to_banks_detailed.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_arbiter.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/stream_omega_net.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/mem_to_banks.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/sram.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/clock_divider_counter.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/clk_div.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/find_first_one.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/generic_LFSR_8bit.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/generic_fifo.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/prioarbiter.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/pulp_sync.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/pulp_sync_wedge.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/rrarbiter.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/clock_divider.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/fifo_v2.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/deprecated/fifo_v1.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/edge_propagator_ack.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/edge_propagator.sv" \
    "$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/src/edge_propagator_rx.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/include" \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/src/apb_pkg.sv" \
    "$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/src/apb_intf.sv" \
    "$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/src/apb_err_slv.sv" \
    "$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/src/apb_regs.sv" \
    "$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/src/apb_cdc.sv" \
    "$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/src/apb_demux.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/include" \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/src/apb_test.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/include" \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_pkg.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_intf.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_atop_filter.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_burst_splitter.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_bus_compare.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_cdc_dst.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_cdc_src.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_cut.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_delayer.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_demux_simple.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_dw_downsizer.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_dw_upsizer.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_fifo.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_id_remap.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_id_prepend.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_isolate.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_join.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_lite_demux.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_lite_dw_converter.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_lite_from_mem.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_lite_join.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_lite_lfsr.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_lite_mailbox.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_lite_mux.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_lite_regs.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_lite_to_apb.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_lite_to_axi.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_modify_address.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_mux.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_rw_join.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_rw_split.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_serializer.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_slave_compare.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_throttle.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_to_detailed_mem.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_cdc.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_demux.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_err_slv.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_dw_converter.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_from_mem.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_id_serialize.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_lfsr.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_multicut.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_to_axi_lite.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_to_mem.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_zero_mem.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_interleaved_xbar.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_iw_converter.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_lite_xbar.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_xbar.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_to_mem_banked.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_to_mem_interleaved.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_to_mem_split.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_xp.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/include" \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_chan_compare.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_dumper.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_sim_mem.sv" \
    "$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/src/axi_test.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/include" \
    "+incdir+$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/include" \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "+incdir+$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/include" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/reg_intf.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/vendor/lowrisc_opentitan/src/prim_subreg_arb.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/vendor/lowrisc_opentitan/src/prim_subreg_ext.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/apb_to_reg.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/axi_lite_to_reg.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/axi_to_reg_v2.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/periph_to_reg.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/reg_cdc.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/reg_cut.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/reg_demux.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/reg_err_slv.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/reg_filter_empty_writes.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/reg_mux.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/reg_to_apb.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/reg_to_mem.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/reg_to_tlul.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/reg_to_axi.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/reg_uniform.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/vendor/lowrisc_opentitan/src/prim_subreg_shadow.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/vendor/lowrisc_opentitan/src/prim_subreg.sv" \
    "$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/src/deprecated/axi_to_reg.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/include" \
    "+incdir+$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/include" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/slib_clock_div.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/slib_counter.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/slib_edge_detect.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/slib_fifo.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/slib_input_filter.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/slib_input_sync.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/slib_mv_filter.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/uart_baudgen.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/uart_interrupt.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/uart_receiver.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/uart_transmitter.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/apb_uart.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/apb_uart_wrap.sv" \
    "$ROOT/.bender/git/checkouts/apb_uart-1661b022e394171b/src/reg_uart_wrap.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_register_file_latch.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_register_file_ff.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_register_file_fpga.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl" \
    "+incdir+$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/vendor/lowrisc_ip/ip/prim/rtl" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_pkg.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/vendor/lowrisc_ip/ip/prim/rtl/prim_assert.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_alu.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_compressed_decoder.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_controller.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_counter.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_csr.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_decoder.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_fetch_fifo.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_load_store_unit.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_multdiv_fast.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_multdiv_slow.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_pmp.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_wb_stage.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_cs_registers.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_ex_block.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_id_stage.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_prefetch_buffer.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_if_stage.sv" \
    "$ROOT/.bender/git/checkouts/ibex-584f8cc4751656c0/rtl/ibex_core.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "+incdir+$ROOT/.bender/git/checkouts/obi-3557b24b03dc62bb/include" \
    "$ROOT/.bender/git/checkouts/obi-3557b24b03dc62bb/src/obi_pkg.sv" \
    "$ROOT/.bender/git/checkouts/obi-3557b24b03dc62bb/src/obi_intf.sv" \
    "$ROOT/.bender/git/checkouts/obi-3557b24b03dc62bb/src/obi_atop_resolver.sv" \
    "$ROOT/.bender/git/checkouts/obi-3557b24b03dc62bb/src/obi_demux.sv" \
    "$ROOT/.bender/git/checkouts/obi-3557b24b03dc62bb/src/obi_err_sbr.sv" \
    "$ROOT/.bender/git/checkouts/obi-3557b24b03dc62bb/src/obi_mux.sv" \
    "$ROOT/.bender/git/checkouts/obi-3557b24b03dc62bb/src/obi_sram_shim.sv" \
    "$ROOT/.bender/git/checkouts/obi-3557b24b03dc62bb/src/obi_xbar.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/src/dm_pkg.sv" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/debug_rom/debug_rom.sv" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/debug_rom/debug_rom_one_scratch.sv" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/src/dm_csrs.sv" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/src/dm_mem.sv" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/src/dmi_cdc.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/src/dmi_jtag_tap.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/src/dm_sba.sv" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/src/dm_top.sv" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/src/dmi_jtag.sv" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/src/dm_obi_top.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/src/dmi_test.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "$ROOT/.bender/git/checkouts/riscv-dbg-f39867366869cb4a/tb/jtag_dmi/jtag_test_simple.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "$ROOT/.bender/git/checkouts/timer_unit-e01a08dbd2ad03a8/rtl/timer_unit_counter.sv" \
    "$ROOT/.bender/git/checkouts/timer_unit-e01a08dbd2ad03a8/rtl/timer_unit_counter_presc.sv" \
    "$ROOT/.bender/git/checkouts/timer_unit-e01a08dbd2ad03a8/rtl/apb_timer_unit.sv" \
    "$ROOT/.bender/git/checkouts/timer_unit-e01a08dbd2ad03a8/rtl/timer_unit.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/axi-4ecab47b5e77b28c/include" \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "+incdir+$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/include" \
    "$ROOT/.bender/git/checkouts/unbent-b8b0b9719a6741d1/src/bus_err_unit_bare.sv" \
    "$ROOT/.bender/git/checkouts/unbent-b8b0b9719a6741d1/src/bus_err_unit_reg_pkg.sv" \
    "$ROOT/.bender/git/checkouts/unbent-b8b0b9719a6741d1/src/bus_err_unit_reg_top.sv" \
    "$ROOT/.bender/git/checkouts/unbent-b8b0b9719a6741d1/src/bus_err_unit.sv" \
    "$ROOT/.bender/git/checkouts/unbent-b8b0b9719a6741d1/src/axi_err_unit_wrap.sv" \
    "$ROOT/.bender/git/checkouts/unbent-b8b0b9719a6741d1/src/obi_err_unit_wrap.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/include" \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "+incdir+$ROOT/.bender/git/checkouts/obi-3557b24b03dc62bb/include" \
    "+incdir+$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/include" \
    "$ROOT/rtl/croc_pkg.sv" \
    "$ROOT/rtl/soc_ctrl/soc_ctrl_reg_pkg.sv" \
    "$ROOT/rtl/core_wrap.sv" \
    "$ROOT/rtl/soc_ctrl/soc_ctrl_reg_top.sv" \
    "$ROOT/rtl/croc_domain.sv" \
    "$ROOT/rtl/user_domain.sv" \
    "$ROOT/rtl/croc_soc.sv" \
    "$ROOT/rtl/croc_chip.sv" \
}]} {return 1}

if {[catch { vlog -incr -sv \
    +define+TARGET_RTL \
    +define+TARGET_SIMULATION \
    +define+TARGET_VERILATOR \
    +define+TARGET_VSIM \
    +define+SYNTHESIS \
    +define+SIMULATION \
    "+incdir+$ROOT/.bender/git/checkouts/apb-90081bf79b7fb8f6/include" \
    "+incdir+$ROOT/.bender/git/checkouts/common_cells-df65432c571d78d4/include" \
    "+incdir+$ROOT/.bender/git/checkouts/obi-3557b24b03dc62bb/include" \
    "+incdir+$ROOT/.bender/git/checkouts/register_interface-8146d26ca39e5d02/include" \
    "$ROOT/rtl/tb_croc_soc.sv" \
}]} {return 1}