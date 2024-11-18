// Copyright 2024 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51
//
// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>

module mlem_sound (
    input  logic clk_i,
    input  logic rst_ni,
    output logic modulated_o
);

    // max 64kbit
    localparam int unsigned MaxRomWidth = 16;
    typedef logic [MaxRomWidth-1:0] addr_t;

    // address variable
    addr_t addr_d, addr_q;

    // next state
    assign addr_d = addr_q < 'd6568 ? addr_q + 'd1 : addr_q;

    // output
    mlem_sound_data #(
        .addr_t ( addr_t )
    ) i_mlem_sound_data (
        .addr_i ( addr_q      ),
        .data_o ( modulated_o )
    );

    // state
    always_ff @(posedge clk_i or negedge rst_ni) begin : proc_addr_state
        if(~rst_ni) begin
           addr_q <= '0;
        end else begin
           addr_q <= addr_d;
        end
    end

endmodule
