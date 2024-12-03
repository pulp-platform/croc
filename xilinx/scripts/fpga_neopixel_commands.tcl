# this are commands for the neopixel fpga programming

openocd -f xilinx/scripts/openocd.genesys2.tcl 
riscv-1.0 riscv32-unknown-elf-gdb -ex "target extended-remote localhost:3333"

set *0x20001040=4
set *0x20001060=16
set *0x20001080=9
set *0x200010a0=8
set *0x200010c0=17
set *0x200010e0=1000
set *0x20001100=0xFFFFFF

# set *0x20001060=4
# set *0x20001080=16
# set *0x200010a0=9
# set *0x200010c0=8
# set *0x200010e0=17
# set *0x20001100=1000
# set *0x20001100=10000000

set *0x20001180=1
set *0x20001200=0x00ff0000

set *0x10000374=0x0fff00
set *0x10000378=0xfff000
set *0x1000037c=0x0000ff
set *0x10000380=0x1fff0
set *0x10000384=0x0000fff
set *0x10000388=0x0000ff000
set *0x1000038c=0x0000011
set *0x10000390=0x00f0fff

set *0x10000394=0x0000f00
set *0x10000398=0xff00000
set *0x1000039c=0x0000ff0
set *0x100003a0=0x00ff0000
set *0x100003a4=0x000aa00
set *0x100003a8=0x0000bb0
set *0x100003ac=0xff00000
set *0x100003b0=0x0000aa0

set *0x100003b4=0x1100000
set *0x100003b8=0x000ff00
set *0x100003bc=0x0000990
set *0x100003c0=0xee00000
set *0x100003c4=0x0000ee0
set *0x100003c8=0x00000ff
set *0x100003cc=0x00000bb
set *0x100003d0=0x000000f

set *0x100003d4=0x00f0000
set *0x100003d8=0x00000b0
set *0x100003dc=0x00f00880
set *0x100003e0=0x0000dd0
set *0x100003e4=0x00ff000
set *0x100003e8=0x00000ff
set *0x100003ec=0x0ff0000
set *0x100003f0=0x00ff000

set *0x20001180=2
set *0x20001120=0x10000374
set *0x20001140=128
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x20001120=0x100003e4
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x200011a0=2
set *0x20001120=0x10000374
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x20001120=0x100003e4
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x200011a0=2
set *0x20001120=0x10000374
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x20001120=0x100003e4
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x200011a0=2
set *0x20001120=0x10000374
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x20001120=0x100003e4
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x200011a0=2
set *0x20001120=0x10000374
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
python import time; time.sleep(1)
set *0x20001120=0x100003e4
set *0x20001140=16
set *0x20001160=1
set *0x20001160=0
 
32'h0DAD_1234, 32'hCAFE_FADE, 32'h5555_ACED, 32'hFFFF_7871, 32'h8888_1111, 32'h8888_EDEF
parameter logic [BlockAwNeopixel - 1:0] NUM_NEOPIXEL_OFFSET     = 11'h 60;
parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T1H_OFFSET      = 11'h 80;
parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T1L_OFFSET      = 11'h A0;
parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T0H_OFFSET      = 11'h C0;
parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T0L_OFFSET      = 11'h E0;
parameter logic [BlockAwNeopixel - 1:0] NEOPIXEL_T_LATCH_OFFSET  = 11'h 100;
parameter logic [BlockAwNeopixel - 1:0] DMA_SRC_ADDR_OFFSET      = 11'h 120;
parameter logic [BlockAwNeopixel - 1:0] DMA_NUM_BYTES_OFFSET     = 11'h 140;
parameter logic [BlockAwNeopixel - 1:0] DMA_VALID_OFFSET         = 11'h 160;
parameter logic [BlockAwNeopixel - 1:0] FIFO_ACCESS_OFFSET      = 11'h 180;

SramBaseAddr      = 32'h1000_0000;
foreach (neopixel_dma_data[i])begin
            jtag_write_reg32(croc_pkg::SramBaseAddr + (i) * 4 + 884, neopixel_dma_data[i], 1, 5);
end
    $display("@%t | [JTAG] FINISHED: Writing data1 to SRAM for neopixel_dma", $time);
    $display("@%t | [JTAG] START: Writing to Register for neopixel_dma", $time);
    jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::FIFO_ACCESS_OFFSET, 2'b10);
    jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_SRC_ADDR_OFFSET, croc_pkg::SramBaseAddr + 884);
    jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_NUM_BYTES_OFFSET, 4*4);
    jtag_write_reg32(neopixel_pkg::NeoPixelRegisterAddrOffset + neopixel_pkg::DMA_VALID_OFFSET, 1'b1, 0, 0);