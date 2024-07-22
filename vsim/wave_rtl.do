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
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/i_ibex/core_sleep_o
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/core_instr_obi_req
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/core_instr_obi_rsp
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/core_data_obi_req
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/core_data_obi_rsp
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_core_wrap/i_ibex/gen_regfile_ff/register_file_i/rf_reg_q
add wave -noupdate /tb_croc_soc/i_croc_soc/i_croc/i_soc_ctrl/reg2hw
update