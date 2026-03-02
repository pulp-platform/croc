// Copyright 2023 ETH Zurich and University of Bologna.
// Solderpad Hardware License, Version 0.51, see LICENSE for details.
// SPDX-License-Identifier: SHL-0.51

// Authors:
// - Thomas Benz <tbenz@iis.ee.ethz.ch>
// - Tobias Senti <tsenti@ethz.ch>

`include "idma/guard.svh"
`include "common_cells/registers.svh"

/// Implementing the transport layer in the iDMA backend.
module idma_transport_layer_rw_obi #(
    /// Number of transaction that can be in-flight concurrently
    parameter int unsigned NumAxInFlight = 32'd2,
    /// Data width
    parameter int unsigned DataWidth = 32'd16,
    /// The depth of the internal reorder buffer:
    /// - '2': minimal possible configuration
    /// - '3': efficiently handle misaligned transfers (recommended)
    parameter int unsigned BufferDepth = 32'd3,
    /// Mask invalid data on the manager interface
    parameter bit MaskInvalidData = 1'b1,
    /// Print the info of the FIFO configuration
    parameter bit PrintFifoInfo = 1'b0,
    /// `r_dp_req_t` type:
    parameter type r_dp_req_t = logic,
    /// `w_dp_req_t` type:
    parameter type w_dp_req_t = logic,
    /// `r_dp_rsp_t` type:
    parameter type r_dp_rsp_t = logic,
    /// `w_dp_rsp_t` type:
    parameter type w_dp_rsp_t = logic,
    /// Write Meta channel type
    parameter type write_meta_channel_t = logic,
    /// Read Meta channel type
    parameter type read_meta_channel_t = logic,
    /// OBI Request and Response channel type
    parameter type obi_req_t = logic,
    parameter type obi_rsp_t = logic
)(
    /// Clock
    input  logic clk_i,
    /// Asynchronous reset, active low
    input  logic rst_ni,
    /// Testmode in
    input  logic testmode_i,

    /// OBI read request
    output obi_req_t obi_read_req_o,
    /// OBI read response
    input  obi_rsp_t obi_read_rsp_i,

    /// OBI write request
    output obi_req_t obi_write_req_o,
    /// OBI write response
    input  obi_rsp_t obi_write_rsp_i,

    /// Read datapath request
    input  r_dp_req_t r_dp_req_i,
    /// Read datapath request valid
    input  logic r_dp_valid_i,
    /// Read datapath request ready
    output logic r_dp_ready_o,

    /// Read datapath response
    output r_dp_rsp_t r_dp_rsp_o,
    /// Read datapath response valid
    output logic r_dp_valid_o,
    /// Read datapath response valid
    input  logic r_dp_ready_i,

    /// Write datapath request
    input  w_dp_req_t w_dp_req_i,
    /// Write datapath request valid
    input  logic w_dp_valid_i,
    /// Write datapath request ready
    output logic w_dp_ready_o,

    /// Write datapath response
    output w_dp_rsp_t w_dp_rsp_o,
    /// Write datapath response valid
    output logic w_dp_valid_o,
    /// Write datapath response valid
    input  logic w_dp_ready_i,

    /// Read meta request
    input  read_meta_channel_t ar_req_i,
    /// Read meta request valid
    input  logic ar_valid_i,
    /// Read meta request ready
    output logic ar_ready_o,

    /// Write meta request
    input  write_meta_channel_t aw_req_i,
    /// Write meta request valid
    input  logic aw_valid_i,
    /// Write meta request ready
    output logic aw_ready_o,

    /// Datapath poison signal
    input  logic dp_poison_i,

    /// Response channel valid and ready
    output logic r_chan_ready_o,
    output logic r_chan_valid_o,

    /// Read part of the datapath is busy
    output logic r_dp_busy_o,
    /// Write part of the datapath is busy
    output logic w_dp_busy_o,
    /// Buffer is busy
    output logic buffer_busy_o
);

    /// Stobe width
    localparam int unsigned StrbWidth   = DataWidth / 8;

    /// Data type
    typedef logic [DataWidth-1:0] data_t;
    /// Offset type
    typedef logic [StrbWidth-1:0] strb_t;
    /// Byte type
    typedef logic [7:0] byte_t;

    // inbound control signals to the read buffer: controlled by the read process
    strb_t buffer_in_valid;

    strb_t buffer_in_ready;
    // outbound control signals of the buffer: controlled by the write process
    strb_t buffer_out_valid, buffer_out_valid_shifted;
    strb_t
        buffer_out_ready, buffer_out_ready_shifted;

    // shifted data flowing into the buffer
    byte_t [2*StrbWidth-1:0] buffer_in_tmp;
    byte_t [StrbWidth-1:0]
        buffer_in, buffer_in_shifted;
    // aligned and coalesced data leaving the buffer
    byte_t [2*StrbWidth-1:0] buffer_out_tmp;
    byte_t [StrbWidth-1:0] buffer_out, buffer_out_shifted;

    //--------------------------------------
    // Read Ports
    //--------------------------------------

    idma_obi_read #(
        .StrbWidth        ( StrbWidth           ),
        .byte_t           ( byte_t              ),
        .strb_t           ( strb_t              ),
        .r_dp_req_t       ( r_dp_req_t          ),
        .r_dp_rsp_t       ( r_dp_rsp_t          ),
        .read_meta_chan_t ( read_meta_channel_t ),
        .read_req_t       ( obi_req_t           ),
        .read_rsp_t       ( obi_rsp_t           )
    ) i_idma_obi_read (
        .r_dp_req_i        ( r_dp_req_i ),
        .r_dp_valid_i      ( r_dp_valid_i ),
        .r_dp_ready_o      ( r_dp_ready_o ),
        .r_dp_rsp_o        ( r_dp_rsp_o ),
        .r_dp_valid_o      ( r_dp_valid_o ),
        .r_dp_ready_i      ( r_dp_ready_i ),
        .read_meta_req_i   ( ar_req_i ),
        .read_meta_valid_i ( ar_valid_i ),
        .read_meta_ready_o ( ar_ready_o ),
        .read_req_o        ( obi_read_req_o ),
        .read_rsp_i        ( obi_read_rsp_i ),
        .r_chan_valid_o    ( r_chan_valid_o ),
        .r_chan_ready_o    ( r_chan_ready_o ),
        .buffer_in_o       ( buffer_in ),
        .buffer_in_valid_o ( buffer_in_valid ),
        .buffer_in_ready_i ( buffer_in_ready )
    );

    //--------------------------------------
    // Read Barrel shifter
    //--------------------------------------

    assign buffer_in_tmp = {buffer_in, buffer_in} >> (r_dp_req_i.shift * 8);
    assign buffer_in_shifted = buffer_in_tmp[$bits(buffer_in_shifted)/8-1:0];

    //--------------------------------------
    // Buffer
    //--------------------------------------

    idma_dataflow_element #(
        .BufferDepth   ( BufferDepth   ),
        .StrbWidth     ( StrbWidth     ),
        .PrintFifoInfo ( PrintFifoInfo ),
        .strb_t        ( strb_t        ),
        .byte_t        ( byte_t        )
    ) i_dataflow_element (
        .clk_i       ( clk_i                    ),
        .rst_ni      ( rst_ni                   ),
        .testmode_i  ( testmode_i               ),
        .data_i      ( buffer_in_shifted        ),
        .valid_i     ( buffer_in_valid          ),
        .ready_o     ( buffer_in_ready          ),
        .data_o      ( buffer_out               ),
        .valid_o     ( buffer_out_valid         ),
        .ready_i     ( buffer_out_ready_shifted )
    );

    //--------------------------------------
    // Write Barrel shifter
    //--------------------------------------

    assign buffer_out_tmp           = {buffer_out, buffer_out} >> (w_dp_req_i.shift*8);
    assign buffer_out_shifted       = buffer_out_tmp[$bits(buffer_out_shifted)/8-1:0];
    assign buffer_out_valid_shifted = strb_t'({buffer_out_valid, buffer_out_valid} >>   w_dp_req_i.shift);
    assign buffer_out_ready_shifted = strb_t'({buffer_out_ready, buffer_out_ready} >> - w_dp_req_i.shift);

    //--------------------------------------
    // Write Ports
    //--------------------------------------

    idma_obi_write #(
        .StrbWidth            ( StrbWidth            ),
        .MaskInvalidData      ( MaskInvalidData      ),
        .byte_t               ( byte_t               ),
        .data_t               ( data_t               ),
        .strb_t               ( strb_t               ),
        .w_dp_req_t           ( w_dp_req_t           ),
        .w_dp_rsp_t           ( w_dp_rsp_t           ),
        .write_meta_channel_t ( write_meta_channel_t ),
        .write_req_t          ( obi_req_t            ),
        .write_rsp_t          ( obi_rsp_t            )
    ) i_idma_obi_write (
        .w_dp_req_i         ( w_dp_req_i ),
        .w_dp_valid_i       ( w_dp_valid_i ),
        .w_dp_ready_o       ( w_dp_ready_o ),
        .dp_poison_i        ( dp_poison_i ),
        .w_dp_rsp_o         ( w_dp_rsp_o ),
        .w_dp_valid_o       ( w_dp_valid_o ),
        .w_dp_ready_i       ( w_dp_ready_i ),
        .aw_req_i           ( aw_req_i ),
        .aw_valid_i         ( aw_valid_i ),
        .aw_ready_o         ( aw_ready_o  ),
        .write_req_o        ( obi_write_req_o ),
        .write_rsp_i        ( obi_write_rsp_i ),
        .buffer_out_i       ( buffer_out_shifted ),
        .buffer_out_valid_i ( buffer_out_valid_shifted ),
        .buffer_out_ready_o ( buffer_out_ready )
    );

    //--------------------------------------
    // Module Control
    //--------------------------------------
    assign r_dp_busy_o   = r_dp_valid_i;
    assign w_dp_busy_o   = w_dp_valid_i | w_dp_ready_o;
    assign buffer_busy_o = |buffer_out_valid;

endmodule

