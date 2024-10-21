`include "common_cells/registers.svh"

module gpio_reg_top #(
    parameter obi_pkg::obi_cfg_t           ObiCfg      = obi_pkg::ObiDefaultConfig,
    parameter type obi_req_t = logic,   // OBI request type
    parameter type obi_rsp_t = logic,   // OBI response type
    parameter int AW = 11               // Address width
) (
    input logic clk_i,                  // Clock
    input logic rst_ni,                 // Active-low reset

    //Connection to Obi
    input obi_req_t  obi_reg_req_i,      // OBI request interface
    output obi_rsp_t obi_reg_rsp_o,     // OBI response interface

    // To Hardware
    output gpio_reg_pkg::gpio_reg2hw_t reg2hw,   // Write from reg to HW
    input gpio_reg_pkg::gpio_hw2reg_t  hw2reg    // Read from HW to reg
);

    // Import the GPIO package for register definitions and parameters
    import gpio_reg_pkg::*;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //obi preparations//
    /////////////////////////////////////////////////////////////////////////////////////////////////////

    // Signals for the OBI response
    logic [ObiCfg.DataWidth-1:0] rsp_data;         
    logic                        valid_d, valid_q;  //needs to be delayed for the response phase                   
    logic                        err;                                      
    //logic [BlockAw-1:0]          word_addr_d, word_addr_q;  //needs to be delayed for the response phase    
    logic [ObiCfg.IdWidth-1:0]   id_d, id_q;   //needs to be delayed for the response phase 
    logic [BlockAw-1:0]          register_addr;
         
    //OBI rsp Assignment
    always_comb begin
        obi_reg_rsp_o.r.rdata       = rsp_data;
        obi_reg_rsp_o.r.rid         = id_q;
        obi_reg_rsp_o.r.err         = err; 
        obi_reg_rsp_o.r.r_optional  = '0;
        obi_reg_rsp_o.gnt           = obi_reg_req_i.req;
        obi_rsp_o.rvalid            = valid_q;
    end

    //id, valid and address handling
    assign id_d          = obi_reg_req_i.aid;
    assign valid_d       = obi_req_i.req;
   //assign word_addr_d  = obi_reg_req_i.addr[BlockAw+1:2];
    assign register_addr = obi_reg_req_i.addr[BlockAw+1:2];

    //FF for the obi rsp signals (id and valid)
    `FF(id_d, id_q, '0, clk_i, rst_ni);
    `FF(valid_d, valid_q, '0, clk_i, rst_ni);
    //`FF(word_addr_d, word_addr_q, '0, clk_i, rst_ni);

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //registers//
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    // Storage for registers
    logic [7*GpioCount-1:0] register_storage_d, register_storage_q; 
    parameter int IndexOffsetDir     = 0;
    parameter int IndexOffsetEn      = 1*GpioCount - 1;
    parameter int IndexOffsetIn      = 2*GpioCount - 1;
    parameter int IndexOffsetOut     = 3*GpioCount - 1;
    parameter int IndexOffsetToggle  = 4*GpioCount - 1;
    parameter int IndexOffsetIrptEn  = 5*GpioCount - 1;
    parameter int IndexOffsetIrptSt  = 6*GpioCount - 1;

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //SEQ LOGIC//
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    `FF(register_storage_d, register_storage_q, '0, clk_i, rst_ni);

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    //COMB LOGIC//
    ////////////////////////////////////////////////////////////////////////////////////////////////////

    //-----------------------------------------------------------------------------------------------
    //WRITE
    //-----------------------------------------------------------------------------------------------
    always comb begin
      case (register_addr)
        GPIO_DIR_OFFSET: begin
          for (genvar i = 0; i < GpioCount; i++) begin

            if (obi_reg_req_i.req && obi_reg_req_i.we) begin
              register_storage_d[i + IndexOffsetDir] = obi_reg_req_i.wdata[i]; 
            end

          end
          err = 1'b0;
        end

        GPIO_EN_OFFSET: begin
          for (genvar i = 0; i < GpioCount; i++) begin

            if (obi_reg_req_i.req && obi_reg_req_i.we) begin
              register_storage_d[i + IndexOffsetEn] = obi_reg_req_i.wdata[i]; 
            end

          end
          err = 1'b0;
        end

        GPIO_IN_OFFSET: begin
          for (genvar i = 0; i < GpioCount; i++) begin

            register_storage_d[i + IndexOffsetIn] = hw2reg.gpio_in[i].d; //write from GPIOlogic

          end
          err = 1'b0;
        end

        GPIO_OUT_OFFSET: begin
          for (genvar i = 0; i < GpioCount; i++) begin

            if (obi_reg_req_i.req && obi_reg_req_i.we) begin
              register_storage_d[i + IndexOffsetOut] = obi_reg_req_i.wdata[i]; 
            end

            if (hw2reg.gpio_out[i].de) begin 
              register_storage_d[i + IndexOffsetOut] = hw2reg.gpio_out[i].d;
            end

          end
          err = 1'b0;
        end

        GPIO_TOGGLE_OFFSET: begin
          for (genvar i = 0; i < GpioCount; i++) begin

            if (obi_reg_req_i.req && obi_reg_req_i.we) begin
              register_storage_d[i + IndexOffsetToggle] = obi_reg_req_i.wdata[i]; 
            end

          end
          err = 1'b0;
        end

        GPIO_INTRPT_RISE_FALL_EN_OFFSET: begin
          for (genvar i = 0; i < GpioCount; i++) begin

            if (obi_reg_req_i.req && obi_reg_req_i.we) begin
              register_storage_d[i + IndexOffsetIrptEn] = obi_reg_req_i.wdata[i]; 
            end

          end
          err = 1'b0;
        end 

        GPIO_INTRPT_RISE_FALL_STATUS_OFFSET: begin
          for (genvar i = 0; i < GpioCount; i++) begin

            if (obi_reg_req_i.req && obi_reg_req_i.we) begin
              register_storage_d[i + IndexOffsetIrptSt] = obi_reg_req_i.wdata[i]; 
            end

            if (hw2reg.intrpt_rise_fall_status[i].de) begin
              register_storage_d[i + IndexOffsetIrptSt] = hw2reg.intrpt_rise_fall_status[i].d;
            end

          end
          err = 1'b0;
        end

        default: begin
          err = 1'b1; // unmapped register access
        end

      endcase
    end

    //-----------------------------------------------------------------------------------------------
    //READ
    //-----------------------------------------------------------------------------------------------
    always_comb begin
      rsp_data = 32'h0;  // Default value for read data
      case (register_addr)

        GPIO_DIR_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin

            reg2hw.gpio_dir[i].q = register_storage_q[i + IndexOffsetDir];

            if (obi_reg_req_i.req && ~obi_reg_req_i.we && obi_reg_req_i.rready) begin
              rsp_data[i] = register_storage_q[i + IndexOffsetDir];
            end

          end
          err = 1'b0;
        end

        GPIO_EN_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin

            reg2hw.gpio_en[i].q = register_storage_q[i + IndexOffsetEn];

            if (obi_reg_req_i.req && ~obi_reg_req_i.we && obi_reg_req_i.rready) begin
              rsp_data[i] = register_storage_q[i + IndexOffsetEn];
            end

          end
          err = 1'b0;
        end

        GPIO_IN_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin

            if (obi_reg_req_i.req && ~obi_reg_req_i.we && obi_reg_req_i.rready) begin
              rsp_data[i] = register_storage_q[i + IndexOffsetIn];
            end 

          end
          err = 1'b0;
        end

        GPIO_OUT_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin

            reg2hw.gpio_out[i].q = register_storage_q[i + IndexOffsetOut];

            if (obi_reg_req_i.req && ~obi_reg_req_i.we && obi_reg_req_i.rready) begin
              rsp_data[i] = register_storage_q[i + IndexOffsetOut];
            end

          end
          err = 1'b0;
        end

        GPIO_TOGGLE_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin

            reg2hw.gpio_toggle[i].q = register_storage_q[i + IndexOffsetToggle];

            if (obi_reg_req_i.req && ~obi_reg_req_i.we && obi_reg_req_i.rready) begin
              rsp_data[i] = register_storage_q[i + IndexOffsetToggle];
            end

          end
          err = 1'b0;
        end

        GPIO_INTRPT_RISE_FALL_EN_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin

            reg2hw.intrpt_rise_fall_en[i].q = register_storage_q[i + IndexOffsetIrptEn];

            if (obi_reg_req_i.req && ~obi_reg_req_i.we && obi_reg_req_i.rready) begin
              rsp_data[i] = register_storage_q[i + IndexOffsetIrptEn];
            end

          end
          err = 1'b0;
        end

        GPIO_INTRPT_RISE_FALL_STATUS_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin

            reg2hw.intrpt_rise_fall_status[i].q = register_storage_q[i + IndexOffsetIrptSt];

            if (obi_reg_req_i.req && ~obi_reg_req_i.we && obi_reg_req_i.rready) begin
              rsp_data[i] = register_storage_q[i + IndexOffsetIrptSt];
            end

          end
          err = 1'b0;
        end

        default: begin
          rsp_data = 32'hBADCAB1E;  // Return error value in devmode for unmapped reads
          err = 1'b1;
        end
      endcase
    end

endmodule
