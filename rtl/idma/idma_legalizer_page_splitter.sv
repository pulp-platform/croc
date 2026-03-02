// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// Authors:
// - Tobias Senti <tsenti@ethz.ch>

/// Legalizer module implementing a page splitter
module idma_legalizer_page_splitter #(
    parameter int unsigned OffsetWidth   = 32'd2,
    parameter int unsigned PageAddrWidth = 32'd5,
    parameter type         addr_t        = logic,
    parameter type         page_len_t    = logic,
    parameter type         page_addr_t   = logic
) (
    /// current address
    input addr_t addr_i,
    /// Burst enabled?
    input logic not_bursting_i,
    /// User-given constraints enabled ?
    input logic reduce_len_i,
    /// User-given constraints
    input logic [2:0] max_llen_i,
    /// number of bytes to end of page
    output page_len_t num_bytes_to_pb_o
);
    logic [3:0] page_addr_width;
    page_len_t  page_size;
    page_addr_t page_offset;

    always_comb begin : proc_addr_width
        if (not_bursting_i) begin
            page_addr_width = OffsetWidth;
        end else begin
            // should the "virtual" page be reduced? e.g. the transfers split into
            // smaller chunks than the AXI page size?
            page_addr_width = OffsetWidth + (reduce_len_i ? max_llen_i : 'd8);
            // a page can be a maximum of 4kB (12 bit)
            page_addr_width = page_addr_width > 'd12 ? 'd12 : page_addr_width;
        end
    end

    // calculate the page size in byte
    assign page_size = page_len_t'(1 << page_addr_width);

    // this is written very confusing due to system verilog not allowing variable
    // length ranges.
    // the goal is to get 'addr_i[PageAddrWidth-1:0]' where PageAddrWidth is
    // page_addr_width and dynamically changing
    always_comb begin : proc_range_select
        page_offset = '0;
        for (int i = 0; i < PageAddrWidth; i++) begin
            page_offset[i] = page_addr_width > i ? addr_i[i] : 1'b0;
        end
    end

    // calculate the number of bytes left in the page (number of bytes until
    // we reach the page boundary (bp)
    assign num_bytes_to_pb_o = page_size - page_offset;

endmodule
