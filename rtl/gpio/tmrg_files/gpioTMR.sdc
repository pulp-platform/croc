set sdc_version 1.3

set tmrgSucces 0
set tmrgFailed 0
proc constrainNet netName {
  global tmrgSucces
  global tmrgFailed
  # find nets matching netName pattern
  set nets [dc::get_net $netName]
  if {[llength $nets] != 0} {
    set_dont_touch $nets
    incr tmrgSucces
  } else {
    puts "\[TMRG\] Warning! Net(s) '$netName' not found"
    incr tmrgFailed
  }
}

constrainNet /clk_i
constrainNet /clk_iA
constrainNet /clk_iB
constrainNet /clk_iC
constrainNet /gpio_iA[*]
constrainNet /gpio_iB[*]
constrainNet /gpio_iC[*]
constrainNet /gpio_i[*]
constrainNet /i_reg_file/clk_i
constrainNet /i_reg_file/clk_iA
constrainNet /i_reg_file/clk_iB
constrainNet /i_reg_file/clk_iC
constrainNet /i_reg_file/id_qA[*]
constrainNet /i_reg_file/id_qB[*]
constrainNet /i_reg_file/id_qC[*]
constrainNet /i_reg_file/id_qVotedA[*]
constrainNet /i_reg_file/id_qVotedB[*]
constrainNet /i_reg_file/id_qVotedC[*]
constrainNet /i_reg_file/read_addr_qA[*]
constrainNet /i_reg_file/read_addr_qB[*]
constrainNet /i_reg_file/read_addr_qC[*]
constrainNet /i_reg_file/read_addr_qVotedA[*]
constrainNet /i_reg_file/read_addr_qVotedB[*]
constrainNet /i_reg_file/read_addr_qVotedC[*]
constrainNet /i_reg_file/reg_qA
constrainNet /i_reg_file/reg_qB
constrainNet /i_reg_file/reg_qC
constrainNet /i_reg_file/reg_qVotedA
constrainNet /i_reg_file/reg_qVotedB
constrainNet /i_reg_file/reg_qVotedC
constrainNet /i_reg_file/req_qA
constrainNet /i_reg_file/req_qB
constrainNet /i_reg_file/req_qC
constrainNet /i_reg_file/req_qVotedA
constrainNet /i_reg_file/req_qVotedB
constrainNet /i_reg_file/req_qVotedC
constrainNet /i_reg_file/rst_ni
constrainNet /i_reg_file/rst_niA
constrainNet /i_reg_file/rst_niB
constrainNet /i_reg_file/rst_niC
constrainNet /i_reg_file/valid_qA
constrainNet /i_reg_file/valid_qB
constrainNet /i_reg_file/valid_qC
constrainNet /i_reg_file/valid_qVotedA
constrainNet /i_reg_file/valid_qVotedB
constrainNet /i_reg_file/valid_qVotedC
constrainNet /i_reg_file/w_err_qA
constrainNet /i_reg_file/w_err_qB
constrainNet /i_reg_file/w_err_qC
constrainNet /i_reg_file/w_err_qVotedA
constrainNet /i_reg_file/w_err_qVotedB
constrainNet /i_reg_file/w_err_qVotedC
constrainNet /i_reg_file/we_qA
constrainNet /i_reg_file/we_qB
constrainNet /i_reg_file/we_qC
constrainNet /i_reg_file/we_qVotedA
constrainNet /i_reg_file/we_qVotedB
constrainNet /i_reg_file/we_qVotedC
constrainNet /i_sync/clk_i
constrainNet /i_sync/clk_iA
constrainNet /i_sync/clk_iB
constrainNet /i_sync/clk_iC
constrainNet /i_sync/reg_qA[*]
constrainNet /i_sync/reg_qB[*]
constrainNet /i_sync/reg_qC[*]
constrainNet /i_sync/reg_qVotedA[*]
constrainNet /i_sync/reg_qVotedB[*]
constrainNet /i_sync/reg_qVotedC[*]
constrainNet /i_sync/rst_ni
constrainNet /i_sync/rst_niA
constrainNet /i_sync/rst_niB
constrainNet /i_sync/rst_niC
constrainNet /is_outputA[*]
constrainNet /is_outputB[*]
constrainNet /is_outputC[*]
constrainNet /is_output[*]
constrainNet /reg2hwA[*]
constrainNet /reg2hwB[*]
constrainNet /reg2hwC[*]
constrainNet /reg2hw[*]
constrainNet /rst_ni
constrainNet /rst_niA
constrainNet /rst_niB
constrainNet /rst_niC
constrainNet /serial_qA[*]
constrainNet /serial_qB[*]
constrainNet /serial_qC[*]
constrainNet /serial_qVotedA[*]
constrainNet /serial_qVotedB[*]
constrainNet /serial_qVotedC[*]


    puts "TMRG successful  $tmrgSucces failed $tmrgFailed"
