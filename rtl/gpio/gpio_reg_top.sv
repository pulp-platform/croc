module gpio_reg_top #(
    parameter obi_pkg::obi_cfg_t           ObiCfg      = obi_pkg::ObiDefaultConfig,
    parameter type obi_req_t = logic,   // OBI request type
    parameter type obi_rsp_t = logic,   // OBI response type
    parameter int AW = 11               // Address width
) (
    input logic clk_i,                  // Clock
    input logic rst_ni,                 // Active-low reset

    //Connection to Obi
    input obi_req_t obi_reg_req_i,      // OBI request interface
    output obi_rsp_t obi_reg_rsp_o,     // OBI response interface

    // To Hardware
    output gpio_reg_pkg::gpio_reg2hw_t reg2hw,   // Write from reg to HW
    input gpio_reg_pkg::gpio_hw2reg_t hw2reg    // Read from HW to reg
);

    // Import the GPIO package for register definitions and parameters
    import gpio_reg_pkg::*;

    ////////////////////
    //obi preparations//
    ////////////////////

    // Signals for the obi response
    logic [ObiCfg.DataWidth-1:0] rsp_data;         
    logic valid_d, valid_q;                       //needs to be delayed for the response phase                   
    logic err;                                      
    logic [BlockAw-1:0] word_addr_d, word_addr_q; //needs to be delayed for the response phase    
    logic [ObiCfg.IdWidth-1:0] id_d, id_q;        //needs to be delayed for the response phase 
         
    always_comb begin
        obi_reg_rsp_o.r.rdata       = rsp_data;
        obi_reg_rsp_o.r.rid         = id_q;
        obi_reg_rsp_o.r.err         = err; 
        obi_reg_rsp_o.r.r_optional  = '0;
        obi_reg_rsp_o.gnt           = obi_reg_req_i.req;
        obi_rsp_o.rvalid            = valid_q;
    end

    //id, valid and address handling
    assign id_d         = obi_reg_req_i.aid;
    assign valid_d      = obi_req_i.req;
    assign word_addr_d  = obi_reg_req_i.addr[BlockAw+1:2];

    //FF for the obi rsp signals (id and valid)
    always_ff @(posedge clk_i or negedge rst_ni) begin
        if (!rst_ni) begin
            id_q        <= '0;
            valid_q     <= '0;
            word_addr_q <= '0;
        end else begin
            id_q        <= id_d;    // Keep ID for the response phase
            valid_q     <= valid_d; // Keep valid for the response phase
            word_addr_q <= word_addr_d;
        end
    end

    /////////////
    //registers//
    /////////////

    // Storage for registers
    gpio_reg2hw_t reg2hw_storage;
    gpio_hw2reg_t hw2reg_storage;

    // Assign HW to register inputs from external HW module
    assign hw2reg_storage = hw2reg;

    //-------------------
    //write registers
    //-------------------

    always_ff @(posedge clk_i or negedge rst_ni) begin
      if (!rst_ni) begin
        reg2hw.gpio_dir                 <= '0;
        reg2hw.gpio_en                  <= '0;
        reg2hw.gpio_out                 <= '0;
        reg2hw.gpio_toggle              <= '0;
        reg2hw.intrpt_rise_fall_en      <= '0;
        reg2hw.intrpt_rise_fall_status  <= '0;
        err                             <= '0;
      end else if (obi_reg_req_i.req && obi_reg_req_i.we) begin
        // Handle write operations to GPIO registers based on address
        case (word_addr_q)
          GPIO_GPIO_DIR_OFFSET: begin
            for (int i = 0; i < GpioCount; i++) begin
                reg2hw_storage.gpio_dir[i].q <= obi_reg_req_i.wdata[i*2 +: 2]; //remember we have two bits
            end
            err <= 1'b0;
          end
          GPIO_GPIO_EN_OFFSET: begin
            for (int i = 0; i < GpioCount; i++) begin
                reg2hw_storage.gpio_en[i].q <= obi_reg_req_i.wdata[i];
            end
            err <= 1'b0;
          end
          GPIO_GPIO_OUT_OFFSET: begin
            for (int i = 0; i < GpioCount; i++) begin
                reg2hw_storage.gpio_out[i].q <= obi_reg_req_i.wdata[i];
            end
            err <= 1'b0;
          end
          GPIO_GPIO_TOGGLE_OFFSET: begin
            for (int i = 0; i < GpioCount; i++) begin
                reg2hw_storage.gpio_toggle[i].q <= obi_reg_req_i.wdata[i];
            end
            err <= 1'b0;
          end
          GPIO_INTRPT_RISE_FALL_EN_OFFSET: begin
            for (int i = 0; i < GpioCount; i++) begin
                reg2hw_storage.intrpt_rise_fall_en[i].q <= obi_reg_req_i.wdata[i];
            end
            err <= 1'b0;
          end
          GPIO_INTRPT_RISE_FALL_STATUS_OFFSET: begin
            for (int i = 0; i < GpioCount; i++) begin
                reg2hw_storage.intrpt_rise_fall_status[i].q <= obi_reg_req_i.wdata[i];
            end
            err <= 1'b0;
          end
          default: begin
            err <= 1'b1; // unmapped register access
          end
        endcase
      end
    end

    //-------------------
    //read registers
    //-------------------
    always_comb begin
      rsp_data = 32'h0;  // Default value for read data
      case (word_addr_q)
        GPIO_GPIO_DIR_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin
              rsp_data[i*2 +: 2] = reg2hw_storage.gpio_dir[i].q; //since we have two bits
          end
          err <= 1'b0;
        end
        GPIO_GPIO_EN_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin
              rsp_data[i] = reg2hw_storage.gpio_en[i].q;
          end
          err <= 1'b0;
        end
        GPIO_GPIO_IN_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin
              rsp_data[i] = hw2reg_storage.gpio_in[i].d;
          end
          err <= 1'b0;
        end
        GPIO_GPIO_OUT_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin
              rsp_data[i] = reg2hw_storage.gpio_out[i].q;
          end
          err <= 1'b0;
        end
        GPIO_GPIO_TOGGLE_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin
              rsp_data[i] = reg2hw_storage.gpio_toggle[i].q;
          end
          err <= 1'b0;
        end
        GPIO_INTRPT_RISE_FALL_EN_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin
              rsp_data[i] = reg2hw_storage.intrpt_rise_fall_en[i].q;
          end
          err <= 1'b0;
        end
        GPIO_INTRPT_RISE_FALL_STATUS_OFFSET: begin
          for (int i = 0; i < GpioCount; i++) begin
              rsp_data[i] = hw2reg_storage.intrpt_rise_fall_status[i].d;
          end
          err <= 1'b0;
        end
        default: begin
          rsp_data = 32'hDEADBEEF;  // Return error value in devmode for unmapped reads
          err <= 1'b1;
        end
      endcase
    end

    // Output to hardware from register storage
    assign reg2hw = reg2hw_storage;

endmodule
