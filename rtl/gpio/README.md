# GPIO Peripheral

The GPIO can be configured to use anywhere between 1 and 32 GPIO lines. A common interrupt line is exposed, the interrupt cause can be seen in the interrupt status register which is cleared on read.

For every GPIO there is one bit (starting at the LSB and filling towards MSB) in the following registers.

## Registers

| Register Name        | Offset  | Access | Description                                               |
|----------------------|---------|--------|-----------------------------------------------------------|
| `GPIO_DIR`           | `0x000` | R/W    | Direction register (0: input, 1: output)                  |
| `GPIO_EN`            | `0x080` | R/W    | Enable register (0: disable updates, 1: enabled)          |
| `GPIO_IN`            | `0x100` | R      | Input value register                                      |
| `GPIO_OUT`           | `0x180` | R/W    | Output value register                                     |
| `GPIO_TOGGLE`        | `0x200` | W      | Toggle output value                                       |
| `GPIO_INTRPT_EN`     | `0x280` | R/W    | Enable interrupts register                                |
| `GPIO_INTRPT_STATUS` | `0x300` | R      | Interrupt status register (1: interrupt occured)          |
| `GPIO_INTRPT_EDGE`   | `0x380` | R/W    | Interrupt edge register (0: falling edge, 1: rising edge) |

All registers are initialized to `0x00` after a reset.