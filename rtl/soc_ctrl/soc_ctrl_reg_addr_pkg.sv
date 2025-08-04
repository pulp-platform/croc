package soc_ctrl_addrmap_pkg;


localparam longint unsigned SOC_CTRL_BASE_ADDR = 64'h00000000;
localparam longint unsigned SOC_CTRL_SIZE      = 64'h00000014;

localparam longint unsigned SOC_CTRL_BOOTADDR_REG_ADDR   = 64'h00000000;
localparam longint unsigned SOC_CTRL_BOOTADDR_REG_OFFSET = 64'h00000000;

localparam longint unsigned SOC_CTRL_FETCHEN_REG_ADDR   = 64'h00000004;
localparam longint unsigned SOC_CTRL_FETCHEN_REG_OFFSET = 64'h00000004;

localparam longint unsigned SOC_CTRL_CORESTATUS_REG_ADDR   = 64'h00000008;
localparam longint unsigned SOC_CTRL_CORESTATUS_REG_OFFSET = 64'h00000008;

localparam longint unsigned SOC_CTRL_BOOTMODE_REG_ADDR   = 64'h0000000C;
localparam longint unsigned SOC_CTRL_BOOTMODE_REG_OFFSET = 64'h0000000C;

localparam longint unsigned SOC_CTRL_SRAM_DLY_REG_ADDR   = 64'h00000010;
localparam longint unsigned SOC_CTRL_SRAM_DLY_REG_OFFSET = 64'h00000010;


endpackage;
