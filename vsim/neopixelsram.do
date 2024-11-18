onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/clk_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/rst_ni
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/fifo_empty_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/fifo_usage_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/fifo_data_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/fifo_pop_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/timing_constraints_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/data_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/t1h
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/t1l
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/t0h
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/t0l
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/t_latch
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/num_neopixel
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/counter_q
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/counter_en
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/counter_clear
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/counter_overflow
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/state_d
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/state_q
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/active_color_data
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/active_color_data_index
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/i_neopixel_controller/neopixel_index
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/dma_constraints
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/dma_obi_req
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/dma_obi_rsp
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/dma_req_ready
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/dma_transfer_done
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/dma_busy
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_neopixel/fifo_access
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {426109 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 563
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 0
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ns
update
WaveRestoreZoom {0 ns} {2421226 ns}