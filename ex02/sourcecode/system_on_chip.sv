// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

module system_on_chip (
  input clk_i,
  input rst_ni
);

  logic        core0_slave_awvalid;
  logic        core0_slave_awready;
  logic [15:0] core0_slave_awaddr;
  logic        core0_slave_awprot;
  logic        core0_slave_wvalid;
  logic        core0_slave_wready;
  logic [31:0] core0_slave_wdata;
  logic [ 3:0] core0_slave_wstrb;
  logic        core0_slave_bvalid;
  logic        core0_slave_bready;
  logic        core0_slave_bresp;
  logic        core0_slave_arvalid;
  logic        core0_slave_arready;
  logic        core0_slave_araddr;
  logic        core0_slave_arprot;
  logic        core0_slave_rvalid;
  logic        core0_slave_rready;
  logic [31:0] core0_slave_rdata;
  logic [ 1:0] core0_slave_rresp;

  logic        core0_master_awvalid;
  logic        core0_master_awready;
  logic [15:0] core0_master_awaddr;
  logic        core0_master_awprot;
  logic        core0_master_wvalid;
  logic        core0_master_wready;
  logic [31:0] core0_master_wdata;
  logic [ 3:0] core0_master_wstrb;
  logic        core0_master_bvalid;
  logic        core0_master_bready;
  logic [ 1:0] core0_master_bresp;
  logic        core0_master_arvalid;
  logic        core0_master_arready;
  logic [15:0] core0_master_araddr;
  logic        core0_master_arprot;
  logic        core0_master_rvalid;
  logic        core0_master_rready;
  logic [31:0] core0_master_rdata;
  logic [ 1:0] core0_master_rresp;

  logic        core1_slave_awvalid;
  logic        core1_slave_awready;
  logic [15:0] core1_slave_awaddr;
  logic        core1_slave_awprot;
  logic        core1_slave_wvalid;
  logic        core1_slave_wready;
  logic [31:0] core1_slave_wdata;
  logic [ 3:0] core1_slave_wstrb;
  logic        core1_slave_bvalid;
  logic        core1_slave_bready;
  logic [ 1:0] core1_slave_bresp;
  logic        core1_slave_arvalid;
  logic        core1_slave_arready;
  logic [15:0] core1_slave_araddr;
  logic        core1_slave_arprot;
  logic        core1_slave_rvalid;
  logic        core1_slave_rready;
  logic [31:0] core1_slave_rdata;
  logic [ 1:0] core1_slave_rresp;

  logic        core1_master_awvalid;
  logic        core1_master_awready;
  logic [15:0] core1_master_awaddr;
  logic        core1_master_awprot;
  logic        core1_master_wvalid;
  logic        core1_master_wready;
  logic [31:0] core1_master_wdata;
  logic [ 3:0] core1_master_wstrb;
  logic        core1_master_bvalid;
  logic        core1_master_bready;
  logic [ 1:0] core1_master_bresp;
  logic        core1_master_arvalid;
  logic        core1_master_arready;
  logic [15:0] core1_master_araddr;
  logic        core1_master_arprot;
  logic        core1_master_rvalid;
  logic        core1_master_rready;
  logic [31:0] core1_master_rdata;
  logic [ 1:0] core1_master_rresp;

  logic        memory_awvalid;
  logic        memory_awready;
  logic [15:0] memory_awaddr;
  logic        memory_awprot;
  logic        memory_wvalid;
  logic        memory_wready;
  logic [31:0] memory_wdata;
  logic [ 3:0] memory_wstrb;
  logic        memory_bvalid;
  logic        memory_bready;
  logic [ 1:0] memory_bresp;
  logic        memory_arvalid;
  logic        memory_arready;
  logic [15:0] memory_araddr;
  logic        memory_arprot;
  logic        memory_rvalid;
  logic        memory_rready;
  logic [31:0] memory_rdata;
  logic [ 1:0] memory_rresp;

  logic        display_awvalid;
  logic        display_awready;
  logic [15:0] display_awaddr;
  logic        display_awprot;
  logic        display_wvalid;
  logic        display_wready;
  logic [31:0] display_wdata;
  logic [ 3:0] display_wstrb;
  logic        display_bvalid;
  logic        display_bready;
  logic [ 1:0] display_bresp;
  logic        display_arvalid;
  logic        display_arready;
  logic [15:0] display_araddr;
  logic        display_arprot;
  logic        display_rvalid;
  logic        display_rready;
  logic [31:0] display_rdata;
  logic [ 1:0] display_rresp;

  riscv_processor i_core0 (
    .rst_ni         ( rst_ni               ),
    .clk_i          ( clk_i                ),

    .master_awvalid ( core0_master_awvalid ),
    .master_awready ( core0_master_awready ),
    .master_awaddr  ( core0_master_awaddr  ),
    .master_awprot  ( core0_master_awprot  ),
    .master_wvalid  ( core0_master_wvalid  ),
    .master_wready  ( core0_master_wready  ),
    .master_wdata   ( core0_master_wdata   ),
    .master_wstrb   ( core0_master_wstrb   ),
    .master_bvalid  ( core0_master_bvalid  ),
    .master_bready  ( core0_master_bready  ),
    .master_bresp   ( core0_master_bresp   ),
    .master_arvalid ( core0_master_arvalid ),
    .master_arready ( core0_master_arready ),
    .master_araddr  ( core0_master_araddr  ),
    .master_arprot  ( core0_master_arprot  ),
    .master_rvalid  ( core0_master_rvalid  ),
    .master_rready  ( core0_master_rready  ),
    .master_rdata   ( core0_master_rdata   ),
    .master_rresp   ( core0_master_rresp   ),

    .slave_awvalid  ( core0_slave_awvalid  ),
    .slave_awready  ( core0_slave_awready  ),
    .slave_awaddr   ( core0_slave_awaddr   ),
    .slave_awprot   ( core0_slave_awprot   ),
    .slave_wvalid   ( core0_slave_wvalid   ),
    .slave_wready   ( core0_slave_wready   ),
    .slave_wdata    ( core0_slave_wdata    ),
    .slave_wstrb    ( core0_slave_wstrb    ),
    .slave_bvalid   ( core0_slave_bvalid   ),
    .slave_bready   ( core0_slave_bready   ),
    .slave_bresp    ( core0_slave_bresp    ),
    .slave_arvalid  ( core0_slave_arvalid  ),
    .slave_arready  ( core0_slave_arready  ),
    .slave_araddr   ( core0_slave_araddr   ),
    .slave_arprot   ( core0_slave_arprot   ),
    .slave_rvalid   ( core0_slave_rvalid   ),
    .slave_rready   ( core0_slave_rready   ),
    .slave_rdata    ( core0_slave_rdata    ),
    .slave_rresp    ( core0_slave_rresp    )
  );

  riscv_processor i_core1 (
    .rst_ni         ( rst_ni               ),
    .clk_i          ( clk_i                ),

    .master_awvalid ( core1_master_awvalid ),
    .master_awready ( core1_master_awready ),
    .master_awaddr  ( core1_master_awaddr  ),
    .master_awprot  ( core1_master_awprot  ),
    .master_wvalid  ( core1_master_wvalid  ),
    .master_wready  ( core1_master_wready  ),
    .master_wdata   ( core1_master_wdata   ),
    .master_wstrb   ( core1_master_wstrb   ),
    .master_bvalid  ( core1_master_bvalid  ),
    .master_bready  ( core1_master_bready  ),
    .master_bresp   ( core1_master_bresp   ),
    .master_arvalid ( core1_master_arvalid ),
    .master_arready ( core1_master_arready ),
    .master_araddr  ( core1_master_araddr  ),
    .master_arprot  ( core1_master_arprot  ),
    .master_rvalid  ( core1_master_rvalid  ),
    .master_rready  ( core1_master_rready  ),
    .master_rdata   ( core1_master_rdata   ),
    .master_rresp   ( core1_master_rresp   ),

    .slave_awvalid  ( core1_slave_awvalid  ),
    .slave_awready  ( core1_slave_awready  ),
    .slave_awaddr   ( core1_slave_awaddr   ),
    .slave_awprot   ( core1_slave_awprot   ),
    .slave_wvalid   ( core1_slave_wvalid   ),
    .slave_wready   ( core1_slave_wready   ),
    .slave_wdata    ( core1_slave_wdata    ),
    .slave_wstrb    ( core1_slave_wstrb    ),
    .slave_bvalid   ( core1_slave_bvalid   ),
    .slave_bready   ( core1_slave_bready   ),
    .slave_bresp    ( core1_slave_bresp    ),
    .slave_arvalid  ( core1_slave_arvalid  ),
    .slave_arready  ( core1_slave_arready  ),
    .slave_araddr   ( core1_slave_araddr   ),
    .slave_arprot   ( core1_slave_arprot   ),
    .slave_rvalid   ( core1_slave_rvalid   ),
    .slave_rready   ( core1_slave_rready   ),
    .slave_rdata    ( core1_slave_rdata    ),
    .slave_rresp    ( core1_slave_rresp    )
  );

  memory i_mem (
    .rst_ni   ( rst_ni         ),
    .clk_i    ( clk_i          ),

    .awvalid  ( memory_awvalid ),
    .awready  ( memory_awready ),
    .awaddr   ( memory_awaddr  ),
    .awprot   ( memory_awprot  ),
    .wvalid   ( memory_wvalid  ),
    .wready   ( memory_wready  ),
    .wdata    ( memory_wdata   ),
    .wstrb    ( memory_wstrb   ),
    .bvalid   ( memory_bvalid  ),
    .bready   ( memory_bready  ),
    .bresp    ( memory_bresp   ),
    .arvalid  ( memory_arvalid ),
    .arready  ( memory_arready ),
    .araddr   ( memory_araddr  ),
    .arprot   ( memory_arprot  ),
    .rvalid   ( memory_rvalid  ),
    .rready   ( memory_rready  ),
    .rdata    ( memory_rdata   ),
    .rresp    ( memory_rresp   )
  );

  display i_display (
    .rst_ni   ( rst_ni          ),
    .clk_i    ( clk_i           ),

    .awvalid  ( display_awvalid ),
    .awready  ( display_awready ),
    .awaddr   ( display_awaddr  ),
    .awprot   ( display_awprot  ),
    .wvalid   ( display_wvalid  ),
    .wready   ( display_wready  ),
    .wdata    ( display_wdata   ),
    .wstrb    ( display_wstrb   ),
    .bvalid   ( display_bvalid  ),
    .bready   ( display_bready  ),
    .bresp    ( display_bresp   ),
    .arvalid  ( display_arvalid ),
    .arready  ( display_arready ),
    .araddr   ( display_araddr  ),
    .arprot   ( display_arprot  ),
    .rvalid   ( display_rvalid  ),
    .rready   ( display_rready  ),
    .rdata    ( display_rdata   ),
    .rresp    ( display_rresp   )
  );

  interconnect i_xbar(
    .rst_ni     ( rst_ni               ),
    .clk_i      ( clk_i                ),

    .m0_awvalid ( core0_slave_awvalid  ),
    .m0_awready ( core0_slave_awready  ),
    .m0_awaddr  ( core0_slave_awaddr   ),
    .m0_awprot  ( core0_slave_awprot   ),
    .m0_wvalid  ( core0_slave_wvalid   ),
    .m0_wready  ( core0_slave_wready   ),
    .m0_wdata   ( core0_slave_wdata    ),
    .m0_wstrb   ( core0_slave_wstrb    ),
    .m0_bvalid  ( core0_slave_bvalid   ),
    .m0_bready  ( core0_slave_bready   ),
    .m0_bresp   ( core0_slave_bresp    ),
    .m0_arvalid ( core0_slave_arvalid  ),
    .m0_arready ( core0_slave_arready  ),
    .m0_araddr  ( core0_slave_araddr   ),
    .m0_arprot  ( core0_slave_arprot   ),
    .m0_rvalid  ( core0_slave_rvalid   ),
    .m0_rready  ( core0_slave_rready   ),
    .m0_rdata   ( core0_slave_rdata    ),
    .m0_rresp   ( core0_slave_rresp    ),

    .s0_awvalid ( core0_master_awvalid ),
    .s0_awready ( core0_master_awready ),
    .s0_awaddr  ( core0_master_awaddr  ),
    .s0_awprot  ( core0_master_awprot  ),
    .s0_wvalid  ( core0_master_wvalid  ),
    .s0_wready  ( core0_master_wready  ),
    .s0_wdata   ( core0_master_wdata   ),
    .s0_wstrb   ( core0_master_wstrb   ),
    .s0_bvalid  ( core0_master_bvalid  ),
    .s0_bready  ( core0_master_bready  ),
    .s0_bresp   ( core0_master_bresp   ),
    .s0_arvalid ( core0_master_arvalid ),
    .s0_arready ( core0_master_arready ),
    .s0_araddr  ( core0_master_araddr  ),
    .s0_arprot  ( core0_master_arprot  ),
    .s0_rvalid  ( core0_master_rvalid  ),
    .s0_rready  ( core0_master_rready  ),
    .s0_rdata   ( core0_master_rdata   ),
    .s0_rresp   ( core0_master_rresp   ),

    .m1_awvalid ( core1_slave_awvalid  ),
    .m1_awready ( core1_slave_awready  ),
    .m1_awaddr  ( core1_slave_awaddr   ),
    .m1_awprot  ( core1_slave_awprot   ),
    .m1_wvalid  ( core1_slave_wvalid   ),
    .m1_wready  ( core1_slave_wready   ),
    .m1_wdata   ( core1_slave_wdata    ),
    .m1_wstrb   ( core1_slave_wstrb    ),
    .m1_bvalid  ( core1_slave_bvalid   ),
    .m1_bready  ( core1_slave_bready   ),
    .m1_bresp   ( core1_slave_bresp    ),
    .m1_arvalid ( core1_slave_arvalid  ),
    .m1_arready ( core1_slave_arready  ),
    .m1_araddr  ( core1_slave_araddr   ),
    .m1_arprot  ( core1_slave_arprot   ),
    .m1_rvalid  ( core1_slave_rvalid   ),
    .m1_rready  ( core1_slave_rready   ),
    .m1_rdata   ( core1_slave_rdata    ),
    .m1_rresp   ( core1_slave_rresp    ),

    .s1_awvalid ( core1_master_awvalid ),
    .s1_awready ( core1_master_awready ),
    .s1_awaddr  ( core1_master_awaddr  ),
    .s1_awprot  ( core1_master_awprot  ),
    .s1_wvalid  ( core1_master_wvalid  ),
    .s1_wready  ( core1_master_wready  ),
    .s1_wdata   ( core1_master_wdata   ),
    .s1_wstrb   ( core1_master_wstrb   ),
    .s1_bvalid  ( core1_master_bvalid  ),
    .s1_bready  ( core1_master_bready  ),
    .s1_bresp   ( core1_master_bresp   ),
    .s1_arvalid ( core1_master_arvalid ),
    .s1_arready ( core1_master_arready ),
    .s1_araddr  ( core1_master_araddr  ),
    .s1_arprot  ( core1_master_arprot  ),
    .s1_rvalid  ( core1_master_rvalid  ),
    .s1_rready  ( core1_master_rready  ),
    .s1_rdata   ( core1_master_rdata   ),
    .s1_rresp   ( core1_master_rresp   ),

    .m2_awvalid ( memory_awvalid       ),
    .m2_awready ( memory_awready       ),
    .m2_awaddr  ( memory_awaddr        ),
    .m2_awprot  ( memory_awprot        ),
    .m2_wvalid  ( memory_wvalid        ),
    .m2_wready  ( memory_wready        ),
    .m2_wdata   ( memory_wdata         ),
    .m2_wstrb   ( memory_wstrb         ),
    .m2_bvalid  ( memory_bvalid        ),
    .m2_bready  ( memory_bready        ),
    .m2_bresp   ( memory_bresp         ),
    .m2_arvalid ( memory_arvalid       ),
    .m2_arready ( memory_arready       ),
    .m2_araddr  ( memory_araddr        ),
    .m2_arprot  ( memory_arprot        ),
    .m2_rvalid  ( memory_rvalid        ),
    .m2_rready  ( memory_rready        ),
    .m2_rdata   ( memory_rdata         ),
    .m2_rresp   ( memory_rresp         ),

    .m3_awvalid ( display_awvalid      ),
    .m3_awready ( display_awready      ),
    .m3_awaddr  ( display_awaddr       ),
    .m3_awprot  ( display_awprot       ),
    .m3_wvalid  ( display_wvalid       ),
    .m3_wready  ( display_wready       ),
    .m3_wdata   ( display_wdata        ),
    .m3_wstrb   ( display_wstrb        ),
    .m3_bvalid  ( display_bvalid       ),
    .m3_bready  ( display_bready       ),
    .m3_bresp   ( display_bresp        ),
    .m3_arvalid ( display_arvalid      ),
    .m3_arready ( display_arready      ),
    .m3_araddr  ( display_araddr       ),
    .m3_arprot  ( display_arprot       ),
    .m3_rvalid  ( display_rvalid       ),
    .m3_rready  ( display_rready       ),
    .m3_rdata   ( display_rdata        ),
    .m3_rresp   ( display_rresp        )
  );

endmodule
