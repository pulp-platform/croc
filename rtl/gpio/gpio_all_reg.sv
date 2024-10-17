module gpio_reg_top #(
  parameter type reg_req_t = logic,
  parameter type reg_rsp_t = logic,
  parameter int AW = 11
) (
  input logic clk_i,
  input logic rst_ni,
  input  reg_req_t reg_req_i,
  output reg_rsp_t reg_rsp_o,
  // To HW
  output gpio_reg_pkg::gpio_reg2hw_t reg2hw, // Write //hw is the pad
  input  gpio_reg_pkg::gpio_hw2reg_t hw2reg, // Read


  // Config
  input devmode_i // If 1, explicit error return for unmapped register access
);
    import gpio_reg_pkg::* ;
    //info register

    //gpio_in registers

    for (genvar i = 0; i < GpioCount; i++) begin
        gpio_single_reg u_reg_cell_gpio_in (
            .AW
            ) (
            .clk_i, 
            .rst_ni,
            .en(),  //enable has to be one that you can write the data into the register
            .d(hw2reg.gpio_in[i].d), //4-bit input data
            .q() //4-bit output data
            );
    end

    //gpio_out registers

    //toggle registers

    //interrupt rise and fall registers

    //interrupt rise and fall enable registers






endmodule