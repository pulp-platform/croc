onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/clk_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/rst_ni
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/obi_req_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/obi_rsp_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/irq
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/irq_n
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/rxd_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/txd_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/cts_n
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/dsr_n
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/ri_n
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/cd_n
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/rts_n
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/dtr_n
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/rxd
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/txd
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/rx_fifo_trigger
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/rx_timeout
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/reg_read
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/reg_write
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/rx_reg_write
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/tx_reg_write
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/modem_reg_write
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/intrpt_reg_write
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/oversample_rate_edge_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/double_rate_edge_i
add wave -noupdate /tb_croc_soc/i_croc_soc/i_user/i_uart/baud_rate_edge_i
add wave -noupdate /tb_croc_soc/uart_rx_i
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {6617800 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 249
configure wave -valuecolwidth 207
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
WaveRestoreZoom {0 ns} {872256947 ns}
