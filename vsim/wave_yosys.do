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