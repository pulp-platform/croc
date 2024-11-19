// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>
// - Tobias Senti <tsenti@student.ethz.ch>
// - Paul Scheffler <paulsc@iis.ee.ethz.ch>

module tc_sram_blackbox #(
  parameter int unsigned NumWords     = 32'd0,
  parameter int unsigned DataWidth    = 32'd0,
  parameter int unsigned ByteWidth    = 32'd0,
  parameter int unsigned NumPorts     = 32'd0,
  parameter int unsigned Latency      = 32'd0,
  parameter              SimInit      = "none",
  parameter bit          PrintSimCfg  = 1'b0,
  parameter              ImplKey      = "none"
) ();
endmodule

// need to be specific with sizes, sv2v doesn't know the port-sizes
// so it will convert them to 1-bit, then every other tool complains
`define IHP13_TC_SRAM_256x48_TIEOFF \
  .A_BIST_CLK   (  1'b0 ), \
  .A_BIST_ADDR  (  8'd0 ), \
  .A_BIST_DIN   ( 48'd0 ), \
  .A_BIST_BM    ( 48'd0 ), \
  .A_BIST_MEN   (  1'b0 ), \
  .A_BIST_WEN   (  1'b0 ), \
  .A_BIST_REN   (  1'b0 ), \
  .A_BIST_EN    (  1'b0 ), \
  .A_DLY        (  1'b0 )

`define IHP13_TC_SRAM_256x64_TIEOFF \
  .A_BIST_CLK   (  1'b0 ), \
  .A_BIST_ADDR  (  8'd0 ), \
  .A_BIST_DIN   ( 64'd0 ), \
  .A_BIST_BM    ( 64'd0 ), \
  .A_BIST_MEN   (  1'b0 ), \
  .A_BIST_WEN   (  1'b0 ), \
  .A_BIST_REN   (  1'b0 ), \
  .A_BIST_EN    (  1'b0 ), \
  .A_DLY        (  1'b0 )

// 512x64 is useful in case we want to change four-way to two-way in D and I cache
// without dropping overall cache size
`define IHP13_TC_SRAM_512x64_TIEOFF \
  .A_BIST_CLK   (  1'b0 ), \
  .A_BIST_ADDR  (  9'd0 ), \
  .A_BIST_DIN   ( 64'd0 ), \
  .A_BIST_BM    ( 64'd0 ), \
  .A_BIST_MEN   (  1'b0 ), \
  .A_BIST_WEN   (  1'b0 ), \
  .A_BIST_REN   (  1'b0 ), \
  .A_BIST_EN    (  1'b0 ), \
  .A_DLY        (  1'b0 )

`define IHP13_TC_SRAM_1024x64_TIEOFF \
  .A_BIST_CLK   (  1'b0 ), \
  .A_BIST_ADDR  ( 10'd0 ), \
  .A_BIST_DIN   ( 64'd0 ), \
  .A_BIST_BM    ( 64'd0 ), \
  .A_BIST_MEN   (  1'b0 ), \
  .A_BIST_WEN   (  1'b0 ), \
  .A_BIST_REN   (  1'b0 ), \
  .A_BIST_EN    (  1'b0 ), \
  .A_DLY        (  1'b0 )

`define IHP13_TC_SRAM_2048x64_TIEOFF \
  .A_BIST_CLK   (  1'b0 ), \
  .A_BIST_ADDR  ( 11'd0 ), \
  .A_BIST_DIN   ( 64'd0 ), \
  .A_BIST_BM    ( 64'd0 ), \
  .A_BIST_MEN   (  1'b0 ), \
  .A_BIST_WEN   (  1'b0 ), \
  .A_BIST_REN   (  1'b0 ), \
  .A_BIST_EN    (  1'b0 ), \
  .A_DLY        (  1'b0 )

module tc_sram #(
  parameter int unsigned NumWords     = 32'd1024,
  parameter int unsigned DataWidth    = 32'd128,
  parameter int unsigned ByteWidth    = 32'd8,
  parameter int unsigned NumPorts     = 32'd2,
  parameter int unsigned Latency      = 32'd1,
  parameter              SimInit      = "none",
  parameter bit          PrintSimCfg  = 1'b0,
  parameter              ImplKey      = "none",
  // DEPENDENT PARAMETERS, DO NOT OVERWRITE!
  parameter int unsigned AddrWidth = (NumWords > 32'd1) ? $clog2(NumWords) : 32'd1,
  parameter int unsigned BeWidth   = (DataWidth + ByteWidth - 32'd1) / ByteWidth,
  parameter type         addr_t    = logic [AddrWidth-1:0],
  parameter type         data_t    = logic [DataWidth-1:0],
  parameter type         be_t      = logic [BeWidth-1:0]
) (
  input  logic                 clk_i,
  input  logic                 rst_ni,
  input  logic  [NumPorts-1:0] req_i,
  input  logic  [NumPorts-1:0] we_i,
  input  addr_t [NumPorts-1:0] addr_i,
  input  data_t [NumPorts-1:0] wdata_i,
  input  be_t   [NumPorts-1:0] be_i,
  output data_t [NumPorts-1:0] rdata_o
);

  localparam P1L1 = (NumPorts == 1 & Latency == 1);

  // Assemble bit mask
  data_t [NumPorts-1:0] bm;

  for (genvar p = 0; p < NumPorts; ++p) begin : gen_bm_ports
      for (genvar b = 0; b < DataWidth; ++b) begin : gen_bm_bits
        assign bm[p][b] = be_i[p][b/ByteWidth];
      end
  end

  // Generate desired cuts
  if (NumWords == 256 && DataWidth <= 48 && P1L1) begin: gen_256x48xBx1
    // L2 tag cache, alligned to 64bit
    logic [47:0] wdata48, rdata48, bm48;

    assign rdata_o = rdata48;
    assign wdata48 = wdata_i;
    assign bm48    = bm;

    RM_IHPSG13_1P_256x48_c2_bm_bist i_cut (
     .A_CLK   ( clk_i   ),
     .A_ADDR  ( addr_i [0][7:0] ),
     .A_BM    ( bm48    ),
     .A_MEN   ( req_i   ),
     .A_WEN   ( we_i    ),
     .A_REN   ( ~we_i   ),
     .A_DIN   ( wdata48 ),
     .A_DOUT  ( rdata48 ),
     `IHP13_TC_SRAM_256x48_TIEOFF
    );

  end else if (NumWords == 256 & DataWidth == 64 & P1L1) begin : gen_256x64xBx1
    // should not be used but easy to implement
    RM_IHPSG13_1P_256x64_c2_bm_bist i_cut (
     .A_CLK   ( clk_i   ),
     .A_ADDR  ( addr_i [0][7:0] ),
     .A_BM    ( bm      ),
     .A_MEN   ( req_i   ),
     .A_WEN   ( we_i    ),
     .A_REN   ( ~we_i   ),
     .A_DIN   ( wdata_i ),
     .A_DOUT  ( rdata_o ),
     `IHP13_TC_SRAM_256x64_TIEOFF
    );

  
  end else if (NumWords == 256 && DataWidth > 64 && DataWidth <= 96 && P1L1) begin: gen_256x96xBx1
    // L1I and L1D tag caches, alligned to 48bit
    logic [1:0][47:0] wdata48, rdata48, bm48;

    assign rdata_o = rdata48;
    assign wdata48 = wdata_i;
    assign bm48    = bm;

    RM_IHPSG13_1P_256x48_c2_bm_bist i_cut_low (
     .A_CLK   ( clk_i   ),
     .A_ADDR  ( addr_i [0][7:0] ),
     .A_BM    ( bm48[0]    ),
     .A_MEN   ( req_i   ),
     .A_WEN   ( we_i    ),
     .A_REN   ( ~we_i   ),
     .A_DIN   ( wdata48[0] ),
     .A_DOUT  ( rdata48[0] ),
     `IHP13_TC_SRAM_256x48_TIEOFF
    );

    RM_IHPSG13_1P_256x48_c2_bm_bist i_cut_high (
     .A_CLK   ( clk_i   ),
     .A_ADDR  ( addr_i [0][7:0] ),
     .A_BM    ( bm48[1]    ),
     .A_MEN   ( req_i   ),
     .A_WEN   ( we_i    ),
     .A_REN   ( ~we_i   ),
     .A_DIN   ( wdata48[1] ),
     .A_DOUT  ( rdata48[1] ),
     `IHP13_TC_SRAM_256x48_TIEOFF
    );

  
  end else if (NumWords == 256 && DataWidth > 96 && DataWidth <= 128 && P1L1) begin : gen_256x128xBx1
    // 4way L1I data caches, two physical caches in parallel
    logic [1:0][63:0] wdata64, rdata64, bm64;

    assign rdata_o = rdata64;
    assign wdata64 = wdata_i;
    assign bm64    = bm;

    RM_IHPSG13_1P_256x64_c2_bm_bist i_cut_high (
     .A_CLK   ( clk_i           ),
     .A_ADDR  ( addr_i [0][7:0] ),
     .A_BM    ( bm64[1]         ),
     .A_MEN   ( req_i           ),
     .A_WEN   ( we_i            ),
     .A_REN   ( ~we_i           ),
     .A_DIN   ( wdata64[1]      ),
     .A_DOUT  ( rdata64[1]      ),
     `IHP13_TC_SRAM_256x64_TIEOFF
    );
    RM_IHPSG13_1P_256x64_c2_bm_bist i_cut_low (
     .A_CLK   ( clk_i           ),
     .A_ADDR  ( addr_i [0][7:0] ),
     .A_BM    ( bm64[0]         ),
     .A_MEN   ( req_i           ),
     .A_WEN   ( we_i            ),
     .A_REN   ( ~we_i           ),
     .A_DIN   ( wdata64[0]      ),
     .A_DOUT  ( rdata64[0]      ),
     `IHP13_TC_SRAM_256x64_TIEOFF
    );
  
  end else if (NumWords == 256 && DataWidth == 256 && P1L1) begin : gen_256x256xBx1
    // 2way L1D data caches, four physical caches in parallel
    // one bank has a width of number-of-ways times XLEN (4*64=256)
    logic [3:0][63:0] wdata64, rdata64, bm64;

    assign rdata_o = rdata64;
    assign wdata64 = wdata_i;
    assign bm64    = bm;

    for (genvar c = 0; c < 4; ++c) begin : gen_cuts
      RM_IHPSG13_1P_256x64_c2_bm_bist i_cut (
        .A_CLK   ( clk_i           ),
        .A_ADDR  ( addr_i [0][7:0] ),
        .A_BM    ( bm64[c]         ),
        .A_MEN   ( req_i           ),
        .A_WEN   ( we_i            ),
        .A_REN   ( ~we_i           ),
        .A_DIN   ( wdata64[c]      ),
        .A_DOUT  ( rdata64[c]      ),
        `IHP13_TC_SRAM_256x64_TIEOFF
      );
    end

  end else if (NumWords == 512 && DataWidth == 32 && P1L1) begin: gen_256x32xBx1
    logic [63:0] wdata64, rdata64, bm64;
    logic sel_d, sel_q;

    // muxing neighboring bits instead of upper/lower 32bit reduces routing
    always_comb begin : gen_bit_interleaving
      for (int i = 0; i < 32; i++) begin
          // duplicate each bit
          wdata64[2*i]   = wdata_i[0][i]; // even bits (active if addr LSB is 0)
          bm64[2*i]      = bm[0][i] & ~addr_i[0][0];
          wdata64[2*i+1] = wdata_i[0][i]; // odd bits  (active if addr LSB is 1)
          bm64[2*i+1]    = bm[0][i] & addr_i[0][0];

          if(~sel_q) begin
            rdata_o[0][i] = rdata64[2*i];   // even bits
          end else begin
            rdata_o[0][i] = rdata64[2*i+1]; // odd bits
          end
      end
    end

    // LSB needed for read in next cycle
    assign sel_d = addr_i[0][0];

    always_ff @(posedge clk_i or negedge rst_ni) begin : proc_mem_sel_q
      if(~rst_ni)             sel_q <= '0;
      else if (req_i & ~we_i) sel_q <= sel_d;
    end

    RM_IHPSG13_1P_256x64_c2_bm_bist i_cut (
     .A_CLK   ( clk_i   ),
     .A_ADDR  ( addr_i [0][8:1] ),
     .A_BM    ( bm64    ),
     .A_MEN   ( req_i   ),
     .A_WEN   ( we_i    ),
     .A_REN   ( ~we_i   ),
     .A_DIN   ( wdata64 ),
     .A_DOUT  ( rdata64 ),
     `IHP13_TC_SRAM_256x64_TIEOFF
    );
  end else if (NumWords == 1024 && DataWidth == 32 && P1L1) begin: gen_1024x32xBx1
    logic [63:0] wdata64, rdata64, bm64;
    logic sel_d, sel_q;

    // muxing neighboring bits instead of upper/lower 32bit reduces routing
    always_comb begin : gen_bit_interleaving
      for (int i = 0; i < 32; i++) begin
          // duplicate each bit
          wdata64[2*i]   = wdata_i[0][i]; // even bits (active if addr LSB is 0)
          bm64[2*i]      = bm[0][i] & ~addr_i[0][0];
          wdata64[2*i+1] = wdata_i[0][i]; // odd bits  (active if addr LSB is 1)
          bm64[2*i+1]    = bm[0][i] & addr_i[0][0];

          if(~sel_q) begin
            rdata_o[0][i] = rdata64[2*i];   // even bits
          end else begin
            rdata_o[0][i] = rdata64[2*i+1]; // odd bits
          end
      end
    end

    // LSB needed for read in next cycle
    assign sel_d = addr_i[0][0];

    always_ff @(posedge clk_i or negedge rst_ni) begin : proc_mem_sel_q
      if(~rst_ni)             sel_q <= '0;
      else if (req_i & ~we_i) sel_q <= sel_d;
    end

    RM_IHPSG13_1P_512x64_c2_bm_bist i_cut (
     .A_CLK   ( clk_i   ),
     .A_ADDR  ( addr_i [0][9:1] ),
     .A_BM    ( bm64    ),
     .A_MEN   ( req_i   ),
     .A_WEN   ( we_i    ),
     .A_REN   ( ~we_i   ),
     .A_DIN   ( wdata64 ),
     .A_DOUT  ( rdata64 ),
     `IHP13_TC_SRAM_512x64_TIEOFF
    );
  end else if (NumWords == 2048 && DataWidth == 32 && P1L1) begin: gen_2048x32xBx1
    logic [63:0] wdata64, rdata64, bm64;
    logic sel_d, sel_q;

    // muxing neighboring bits instead of upper/lower 32bit reduces routing
    always_comb begin : gen_bit_interleaving
      for (int i = 0; i < 32; i++) begin
          // duplicate each bit
          wdata64[2*i]   = wdata_i[0][i]; // even bits (active if addr LSB is 0)
          bm64[2*i]      = bm[0][i] & ~addr_i[0][0];
          wdata64[2*i+1] = wdata_i[0][i]; // odd bits  (active if addr LSB is 1)
          bm64[2*i+1]    = bm[0][i] & addr_i[0][0];

          if(~sel_q) begin
            rdata_o[0][i] = rdata64[2*i];   // even bits
          end else begin
            rdata_o[0][i] = rdata64[2*i+1]; // odd bits
          end
      end
    end

    // LSB needed for read in next cycle
    assign sel_d = addr_i[0][0];

    always_ff @(posedge clk_i or negedge rst_ni) begin : proc_mem_sel_q
      if(~rst_ni)             sel_q <= '0;
      else if (req_i & ~we_i) sel_q <= sel_d;
    end

    RM_IHPSG13_1P_1024x64_c2_bm_bist i_cut (
     .A_CLK   ( clk_i   ),
     .A_ADDR  ( addr_i [0][10:1] ),
     .A_BM    ( bm64    ),
     .A_MEN   ( req_i   ),
     .A_WEN   ( we_i    ),
     .A_REN   ( ~we_i   ),
     .A_DIN   ( wdata64 ),
     .A_DOUT  ( rdata64 ),
     `IHP13_TC_SRAM_1024x64_TIEOFF
    );
  end else if (NumWords == 512 && DataWidth <= 48 && P1L1) begin: gen_512x48xBx1
    // L1I and L1D tag caches, alligned to 48bit
    logic [47:0] wdata48, bm48;
    logic [1:0][47:0] rdata48;
    logic cut_sel_d, cut_sel_q;

    assign wdata48 = wdata_i;
    assign bm48    = bm;

    // Select cut based on address MSB
    assign cut_sel_d = addr_i[0][8];
    assign rdata_o = rdata48[cut_sel_q];

    always_ff @(posedge clk_i or negedge rst_ni) begin : proc_mem_sel_q
      if(~rst_ni)             cut_sel_q <= '0;
      else if (req_i & ~we_i) cut_sel_q <= cut_sel_d;
    end

    for (genvar c = 0; c < 2; ++c) begin : gen_cuts
      RM_IHPSG13_1P_256x48_c2_bm_bist i_cut (
       .A_CLK   ( clk_i    ),
       .A_ADDR  ( addr_i [0][7:0] ),
       .A_BM    ( bm48     ),
       .A_MEN   ( req_i & (cut_sel_d == c) ),
       .A_WEN   ( we_i     ),
       .A_REN   ( ~we_i    ),
       .A_DIN   ( wdata48  ),
       .A_DOUT  ( rdata48[c] ),
       `IHP13_TC_SRAM_256x48_TIEOFF
      );
    end

  end else if (NumWords == 512 && DataWidth == 128 && P1L1) begin : gen_512x128xBx1
    // 2way L1I data caches, two physical caches in parallel
    logic [1:0][63:0] wdata64, rdata64, bm64;

    assign rdata_o = rdata64;
    assign wdata64 = wdata_i;
    assign bm64    = bm;

    RM_IHPSG13_1P_512x64_c2_bm_bist i_cut_high (
     .A_CLK   ( clk_i           ),
     .A_ADDR  ( addr_i [0][8:0] ),
     .A_BM    ( bm64[1]         ),
     .A_MEN   ( req_i           ),
     .A_WEN   ( we_i            ),
     .A_REN   ( ~we_i           ),
     .A_DIN   ( wdata64[1]      ),
     .A_DOUT  ( rdata64[1]      ),
     `IHP13_TC_SRAM_512x64_TIEOFF
    );
    RM_IHPSG13_1P_512x64_c2_bm_bist i_cut_low (
     .A_CLK   ( clk_i           ),
     .A_ADDR  ( addr_i [0][8:0] ),
     .A_BM    ( bm64[0]         ),
     .A_MEN   ( req_i           ),
     .A_WEN   ( we_i            ),
     .A_REN   ( ~we_i           ),
     .A_DIN   ( wdata64[0]      ),
     .A_DOUT  ( rdata64[0]      ),
     `IHP13_TC_SRAM_512x64_TIEOFF
    );

  end else if (NumWords == 512 && DataWidth == 256 && P1L1) begin : gen_512x256xBx1
    // L1D data caches, four physical caches in parallel
    // one bank has a width of number-of-ways times XLEN (4*64=256)
    logic [3:0][63:0] wdata64, rdata64, bm64;

    assign rdata_o = rdata64;
    assign wdata64 = wdata_i;
    assign bm64    = bm;

    for (genvar c = 0; c < 4; ++c) begin : gen_cuts
      RM_IHPSG13_1P_512x64_c2_bm_bist i_cut (
        .A_CLK   ( clk_i           ),
        .A_ADDR  ( addr_i [0][8:0] ),
        .A_BM    ( bm64[c]         ),
        .A_MEN   ( req_i           ),
        .A_WEN   ( we_i            ),
        .A_REN   ( ~we_i           ),
        .A_DIN   ( wdata64[c]      ),
        .A_DOUT  ( rdata64[c]      ),
        `IHP13_TC_SRAM_512x64_TIEOFF
      );
    end

  end else if (NumWords == 2048 & DataWidth == 64 & P1L1) begin : gen_2048x64xBx1
    // L2 data caches, 2048 lines
    logic [63:0] wdata64, rdata64, bm64;
    
    assign rdata_o = rdata64;
    assign wdata64 = wdata_i;
    assign bm64    = bm;

    RM_IHPSG13_1P_2048x64_c2_bm_bist i_cut (
       .A_CLK   ( clk_i    ),
       .A_ADDR  ( addr_i [0][10:0] ),
       .A_BM    ( bm64     ),
       .A_MEN   ( req_i    ),
       .A_WEN   ( we_i     ),
       .A_REN   ( ~we_i    ),
       .A_DIN   ( wdata64  ),
       .A_DOUT  ( rdata64  ),
       `IHP13_TC_SRAM_2048x64_TIEOFF
      );

  end else begin : gen_blackbox

  `ifndef SYNTHESIS
    initial $fatal("No tc_sram for %m: NumWords %0d, DataWidth %0d NumPorts %0d, Latency %0d",
        NumWords, DataWidth, NumPorts);
  `endif

  // Instantiate a non-linkable blackbox with parameters for debugging
  `ifdef SYNTHESIS
    (* dont_touch = "true" *)
    tc_sram_blackbox #(
      .NumWords     ( NumWords    ),
      .DataWidth    ( DataWidth   ),
      .ByteWidth    ( ByteWidth   ),
      .NumPorts     ( NumPorts    ),
      .Latency      ( Latency     ),
      .SimInit      ( SimInit     ),
      .PrintSimCfg  ( PrintSimCfg ),
      .ImplKey      ( ImplKey     )
    ) i_sram_blackbox ();
  `endif

end

endmodule
