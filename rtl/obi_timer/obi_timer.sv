module obi_timer #(
  parameter type          obi_req_t = logic,
  parameter type          obi_rsp_t = logic
) (
  input  logic     clk_i,
  input  logic     rst_ni,
  input  obi_req_t obi_req_i,
  output obi_rsp_t obi_rsp_o,
  output logic     expired_o,
  output logic     overflow_o
);

  // Registers
  logic [31:0]   count_d,   count_q;
  logic [31:0] compare_d, compare_q;
  logic         enable_d,  enable_q;

  // Internal signals
  obi_req_t      obi_req_d, obi_req_q;
  logic              err_d,     err_q;
  logic     [31:0] rdata_d,   rdata_q;

  assign obi_req_d = obi_req_i;

  // bit enable mask: defines which bits are written to by wdata of the OBI request
  logic [31:0] be_mask;
  for (genvar i = 0; unsigned'(i) < 32/8; ++i ) begin : gen_write_mask
    assign be_mask[8*i +: 8] = {8{obi_req_i.a.be[i]}};
  end

  // Output assignment
  assign expired_o  = (compare_q != 32'h0 && compare_q == count_q) ? 1'b1 1'b0;
  assign overflow_o = (count_q == 32'hffff_ffff) ? 1'b1 : 1'b0;

  always_comb begin : obi_response
    obi_rsp_o         = '0;
    obi_rsp_o.gnt     = 1'b1; 
    obi_rsp_o.rvalid  = obi_req_q.req;
    obi_rsp_o.r.err   = err_q;
    obi_rsp_o.r.rid   = obi_req_q.a.aid;
    obi_rsp_o.r.rdata = rdata_q;
  end

  always_comb begin
    err_d     = '0;
    rdata_d   = '0;
    count_d   = count_q;
    compare_d = compare_q;
    enable_d  = enable_q;

    if (expired_o)
      count_d = '0;
    else if (enable_q)
      count_d = count_q + 1;

    if (obi_req_i.req) begin

      if (obi_req_i.a.we) begin : write
        automatic logic [31:0] wdata = obi_req_i.a.wdata & be_mask;
        unique case ({obi_req_i.a.addr[IntAddrWidth-1:2], 2'b00})
          OBI_TIMER_COUNT_OFFSET: begin
            count_d = wdata;
          end
          OBI_TIMER_COMPARE_OFFSET: begin
            compare_d = wdata;
            count_d   = '0;
          end
          OBI_TIMER_ENABLE_OFFSET: begin
            enable_d = wdata[0];
          end
          default: begin
            err_d = 1'b1;
          end
        endcase

      end else begin : read
        unique case ({obi_req_i.a.addr[IntAddrWidth-1:2], 2'b00})
          OBI_TIMER_COUNT_OFFSET: begin
            rdata_d = count_q;
          end
          OBI_TIMER_COMPARE_OFFSET: begin
            rdata_d = compare_q;
          end
          OBI_TIMER_ENABLE_OFFSET: begin
            rdata_d = {31'h0, enable_q};
          end
          default: begin
            rdata_d = 32'hBADCAB1E;
            err_d   = 1'b1;
          end
        endcase
      end

    end
  end

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (~rst_ni) begin
      count_q   <= '0;
      compare_q <= '0;
      enable_q  <= '0;
    end else begin
      count_q   <= count_d;
      compare_q <= compare_d;
      enable_q  <= enable_d;
    end
  end


endmodule
