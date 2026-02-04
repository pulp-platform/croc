// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Philippe Sauter <phsauter@iis.ee.ethz.ch>

`include "common_cells/registers.svh"

/// Bootrom containing a WFI trampoline.
/// After reset the core fetches from here, enables the M-mode interrupt
/// executes WFI, and waits until woken by CLINT msip.
/// On wake it clears msip, reads the boot address from soc_ctrl and jumps there.
module bootrom #(
	/// The OBI configuration for all ports.
	parameter obi_pkg::obi_cfg_t ObiCfg = obi_pkg::ObiDefaultConfig,
	/// OBI request type
	parameter type obi_req_t = logic,
	/// OBI response type
	parameter type obi_rsp_t = logic
) (
	input  logic     clk_i,
	input  logic     rst_ni,
	input  obi_req_t obi_req_i,
	output obi_rsp_t obi_rsp_o
);

	// Bootrom contents (9 words, 36 bytes)
	// https://godbolt.org/z/MP5ejvzdf
	localparam int unsigned RomSize = 9;
	localparam logic [31:0] RomData [RomSize] = '{
		32'h00800293, // addi  t0, zero, 8  # t0 = 8 (MSIE bit)
		32'h30429073, // csrw  mie, t0      # Enable M-mode software interrupt
		32'h10500073, // wfi                # Sleep until interrupt
		32'h020402b7, // lui   t0, 0x02040  # t0 = CLINT base (0x02040000)
		32'h0002a023, // sw    zero, 0(t0)  # Clear msip
		32'h30401073, // csrw  mie, zero    # Disable interrupts
		32'h030002b7, // lui   t0, 0x03000  # t0 = SOC_CTRL base (0x03000000)
		32'h0002a283, // lw    t0, 0(t0)    # t0 = boot address
		32'h00028067  // jalr  zero, 0(t0)  # Jump to boot address
	};

	localparam int unsigned AddressWidth = cf_math_pkg::idx_width(RomSize) +2; // in bytes

	// Handle OBI requests
	logic                      we_d, we_q;               // delayed to the response phase
	logic                      req_d, req_q;             // delayed to the response phase
	logic [ObiCfg.IdWidth-1:0] id_d, id_q;               // delayed to the response phase
	logic [AddressWidth-1:0]   read_addr_d, read_addr_q; // delayed to the response phase (word addr)

	assign req_d       = obi_req_i.req;
	assign we_d        = obi_req_i.a.we;
	assign id_d        = obi_req_i.a.aid;
	assign read_addr_d = obi_req_i.a.addr[AddressWidth-1:2];

	// Latch request for one-cycle response
	`FF(req_q, req_d, '0, clk_i, rst_ni)
	`FF(we_q, we_d, '0, clk_i, rst_ni)
	`FF(id_q, id_d, '0, clk_i, rst_ni)
	`FF(read_addr_q, read_addr_d, '0, clk_i, rst_ni)

	// Address range check
	logic in_range;
	assign in_range = (read_addr_q < RomSize);

	always_comb begin
		obi_rsp_o         = '0;
		obi_rsp_o.gnt     = 1'b1; // always grant
		obi_rsp_o.rvalid  = req_q;
		obi_rsp_o.r.rid   = id_q;
		if (we_q || !in_range) begin
			// write request or out of range
			obi_rsp_o.r.rdata = 32'hBADCAB1E;
			obi_rsp_o.r.err   = 1'b1;
		end else begin
			obi_rsp_o.r.rdata = RomData[read_addr_q];
			obi_rsp_o.r.err   = 1'b0;
		end
	end

endmodule
