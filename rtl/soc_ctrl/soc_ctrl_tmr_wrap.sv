module soc_ctrl_tmr_wrap #(
  parameter bit [31:0] BootAddrDefault = 32'h10000000,
  parameter obi_pkg::obi_cfg_t ObiCfg = obi_pkg::ObiDefaultConfig,
  parameter type       relobi_req_t = logic,
  parameter type       relobi_rsp_t = logic,
  parameter type       relobi_r_chan_t = logic,
  parameter type       r_optional_t = logic,
  parameter type       obi_req_t = logic,
  parameter type       obi_rsp_t = logic,
  parameter type       apb_req_t = logic,
  parameter type       apb_resp_t = logic
) (
  input logic clk_i,
  input logic rst_ni,

  input relobi_req_t relobi_req_i,
  output relobi_rsp_t relobi_rsp_o,

  input soc_ctrl_reg_pkg::soc_ctrl__in_t  hwif_in[3],
  output soc_ctrl_reg_pkg::soc_ctrl__out_t hwif_out[3]
);

  relobi_rsp_t [2:0] relobi_rsp;
  relobi_r_chan_t [2:0] relobi_r;

  soc_ctrl_tmr_part_reg_pkg::soc_ctrl__in_t  hwif_in_tmr[3];
  soc_ctrl_tmr_part_reg_pkg::soc_ctrl__out_t hwif_out_tmr[3];

  relobi_tmr_r #(
    .ObiCfg (ObiCfg),
    .obi_r_chan_t (relobi_r_chan_t),
    .r_optional_t (r_optional_t)
  ) i_relobi_tmr_r (
    .three_r_i (relobi_r),
    .voted_r_o (relobi_rsp_o.r),
    .fault_o ()
  );

  soc_ctrl_tmr_part_reg_pkg::soc_ctrl__out_t hwif_out_sync[3];
  soc_ctrl_tmr_part_reg_pkg::soc_ctrl__out_t alt_hwif_out_sync[3][2];
  for (genvar i = 0; i < 3; i++) begin : gen_tmr_part
    for (genvar j = 0; j < 2; j++) begin : gen_tmr_part_sync
      assign alt_hwif_out_sync[i][j] = hwif_out_sync[(i+j+1) % 3];
    end
    soc_ctrl_tmr_part #(
      .BootAddrDefault(BootAddrDefault),
      .ObiCfg (ObiCfg),
      .relobi_req_t (relobi_req_t),
      .relobi_rsp_t (relobi_rsp_t),
      .obi_req_t (obi_req_t),
      .obi_rsp_t (obi_rsp_t),
      .apb_req_t (apb_req_t),
      .apb_resp_t (apb_resp_t)
    ) i_soc_ctrl_tmr_part (
      .clk_i(clk_i),
      .rst_ni(rst_ni),

      .relobi_req_i(relobi_req_i),
      .relobi_rsp_o(relobi_rsp[i]),

      .hwif_in(hwif_in_tmr[i]),
      .hwif_out(hwif_out_tmr[i]),

      .hwif_out_sync(hwif_out_sync[i]),
      .hwif_out_sync_i(alt_hwif_out_sync[i])
    );

    assign relobi_r[i] = relobi_rsp[i].r;
    assign relobi_rsp_o.gnt[i] = relobi_rsp[i].gnt[0];
    assign relobi_rsp_o.rvalid[i] = relobi_rsp[i].rvalid[0];

    assign hwif_out[i].bootaddr.bootaddr.value = hwif_out_tmr[i].bootaddr.bootaddr.value;
    assign hwif_out[i].fetchen.fetchen.value = hwif_out_tmr[i].fetchen.fetchen.value;
    assign hwif_out[i].corestatus.corestatus.value = hwif_out_tmr[i].corestatus.corestatus.value;
    assign hwif_out[i].bootmode.bootmode.value = hwif_out_tmr[i].bootmode.bootmode.value;
    assign hwif_out[i].sram_dly.sram_dly.value = hwif_out_tmr[i].sram_dly.sram_dly.value;

    assign hwif_in_tmr[i].bootaddr.bootaddr.next     = hwif_out_tmr[i].bootaddr.bootaddr.value;
    assign hwif_in_tmr[i].fetchen.fetchen.next       = hwif_in[i].fetchen.fetchen.we ?
                                                       hwif_in[i].fetchen.fetchen.next :
                                                       hwif_out_tmr[i].fetchen.fetchen.value;
    assign hwif_in_tmr[i].corestatus.corestatus.next = hwif_out_tmr[i].corestatus.corestatus.value;
    assign hwif_in_tmr[i].bootmode.bootmode.next     = hwif_in[i].bootmode.bootmode.we ?
                                                       hwif_in[i].bootmode.bootmode.next :
                                                       hwif_out_tmr[i].bootmode.bootmode.value;
    assign hwif_in_tmr[i].sram_dly.sram_dly.next     = hwif_out_tmr[i].sram_dly.sram_dly.value;
  end

endmodule


module soc_ctrl_tmr_part #(
  parameter bit [31:0] BootAddrDefault = 32'h10000000,
  parameter obi_pkg::obi_cfg_t ObiCfg = obi_pkg::ObiDefaultConfig,
  parameter type       relobi_req_t = logic,
  parameter type       relobi_rsp_t = logic,
  parameter type       obi_req_t = logic,
  parameter type       obi_rsp_t = logic,
  parameter type       apb_req_t = logic,
  parameter type       apb_resp_t = logic
) (
  input logic clk_i,
  input logic rst_ni,

  input relobi_req_t relobi_req_i,
  output relobi_rsp_t relobi_rsp_o,

  input soc_ctrl_tmr_part_reg_pkg::soc_ctrl__in_t hwif_in,
  output soc_ctrl_tmr_part_reg_pkg::soc_ctrl__out_t hwif_out,

  output soc_ctrl_tmr_part_reg_pkg::soc_ctrl__out_t hwif_out_sync,
  input soc_ctrl_tmr_part_reg_pkg::soc_ctrl__out_t  hwif_out_sync_i[2]
);
  obi_req_t soc_ctrl_obi_req;
  obi_rsp_t soc_ctrl_obi_rsp;
  apb_req_t soc_ctrl_apb_req;
  apb_resp_t soc_ctrl_apb_rsp;

  relobi_decoder #(
    .Cfg (ObiCfg),
    .relobi_req_t (relobi_req_t),
    .relobi_rsp_t (relobi_rsp_t),
    .obi_req_t (obi_req_t),
    .obi_rsp_t (obi_rsp_t),
    .a_optional_t (logic),
    .r_optional_t (logic)
  ) i_periph_decoder (
    .rel_req_i ( relobi_req_i ),
    .rel_rsp_o ( relobi_rsp_o ),
    .req_o ( soc_ctrl_obi_req ),
    .rsp_i ( soc_ctrl_obi_rsp ),
    .fault_o ()
  );

  obi_to_apb #(
    .ObiCfg    ( ObiCfg     ),
    .obi_req_t ( obi_req_t ),
    .obi_rsp_t ( obi_rsp_t ),
    .apb_req_t ( apb_req_t     ),
    .apb_rsp_t ( apb_resp_t    )
  ) i_soc_ctrl_translate (
    .clk_i,
    .rst_ni,

    .obi_req_i     ( soc_ctrl_obi_req     ),
    .obi_rsp_o     ( soc_ctrl_obi_rsp     ),

    .apb_req_o     ( soc_ctrl_apb_req     ),
    .apb_rsp_i     ( soc_ctrl_apb_rsp     )
  );

  soc_ctrl_tmr_part_reg_top #(
    .BootAddrDefault(BootAddrDefault)
  ) i_soc_ctrl_tmr_part_reg_top (
    .clk(clk_i),
    .arst_n(rst_ni),

    .s_apb_psel ( soc_ctrl_apb_req.psel ),
    .s_apb_penable ( soc_ctrl_apb_req.penable ),
    .s_apb_pwrite ( soc_ctrl_apb_req.pwrite ),
    .s_apb_pprot ( soc_ctrl_apb_req.pprot ),
    .s_apb_paddr ( soc_ctrl_apb_req.paddr[soc_ctrl_reg_pkg::SOC_CTRL_REG_TOP_MIN_ADDR_WIDTH-1:0] ),
    .s_apb_pwdata ( soc_ctrl_apb_req.pwdata ),
    .s_apb_pstrb ( soc_ctrl_apb_req.pstrb ),
    .s_apb_pready ( soc_ctrl_apb_rsp.pready ),
    .s_apb_prdata ( soc_ctrl_apb_rsp.prdata ),
    .s_apb_pslverr ( soc_ctrl_apb_rsp.pslverr ),

    .hwif_in(hwif_in),
    .hwif_out(hwif_out_sync)
  );

  bitwise_TMR_voter_fail #(
    .DataWidth($bits(hwif_out.bootaddr.bootaddr.value))
  ) hwif_out_bootaddr_vote (
    .a_i        (hwif_out_sync.bootaddr.bootaddr.value),
    .b_i        (hwif_out_sync_i[0].bootaddr.bootaddr.value),
    .c_i        (hwif_out_sync_i[1].bootaddr.bootaddr.value),
    .majority_o (hwif_out.bootaddr.bootaddr.value),
    .fault_detected_o()
  );
  bitwise_TMR_voter_fail #(
    .DataWidth($bits(hwif_out.fetchen.fetchen.value))
  ) hwif_out_fetchen_vote (
    .a_i        (hwif_out_sync.fetchen.fetchen.value),
    .b_i        (hwif_out_sync_i[0].fetchen.fetchen.value),
    .c_i        (hwif_out_sync_i[1].fetchen.fetchen.value),
    .majority_o (hwif_out.fetchen.fetchen.value),
    .fault_detected_o()
  );
  bitwise_TMR_voter_fail #(
    .DataWidth($bits(hwif_out.corestatus.corestatus.value))
  ) hwif_out_corestatus_vote (
    .a_i        (hwif_out_sync.corestatus.corestatus.value),
    .b_i        (hwif_out_sync_i[0].corestatus.corestatus.value),
    .c_i        (hwif_out_sync_i[1].corestatus.corestatus.value),
    .majority_o (hwif_out.corestatus.corestatus.value),
    .fault_detected_o()
  );
  bitwise_TMR_voter_fail #(
    .DataWidth($bits(hwif_out.bootmode.bootmode.value))
  ) hwif_out_bootmode_vote (
    .a_i        (hwif_out_sync.bootmode.bootmode.value),
    .b_i        (hwif_out_sync_i[0].bootmode.bootmode.value),
    .c_i        (hwif_out_sync_i[1].bootmode.bootmode.value),
    .majority_o (hwif_out.bootmode.bootmode.value),
    .fault_detected_o()
  );
  bitwise_TMR_voter_fail #(
    .DataWidth($bits(hwif_out.sram_dly.sram_dly.value))
  ) hwif_out_sram_dly_vote (
    .a_i        (hwif_out_sync.sram_dly.sram_dly.value),
    .b_i        (hwif_out_sync_i[0].sram_dly.sram_dly.value),
    .c_i        (hwif_out_sync_i[1].sram_dly.sram_dly.value),
    .majority_o (hwif_out.sram_dly.sram_dly.value),
    .fault_detected_o()
  );

endmodule
