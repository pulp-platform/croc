# PULP Timer Peripheral

The timer peripheral can be operated either as two 32 bit timer or as one 64 bit timer. In each case the timer counts on high-going edges of the 32.768 kHz reference clock. A configurable prescaler can be used before each timer (a 1:1 ratio is achieved by chosing the ref clock as clock source).

## Registers

| Register Name      | Offset | Access | Description                                      |
|--------------------|--------|--------|--------------------------------------------------|
| `CFG_REG_LOW`      | `0x00` | R*/W   | Configuration register for lower 32-bit          |
| `CFG_REG_HIGH`     | `0x04` | R*/W   | Configuration register for upper 32-bit          |
| `TIMER_VALUE_LOW`  | `0x08` | R/W    | Timer value for lower 32-bit                     |
| `TIMER_VALUE_HIGH` | `0x0C` | R/W    | Timer value for upper 32-bit                     |
| `TIMER_CMP_LOW`    | `0x10` | R/W    | Timer comparator value for lower 32-bit          |
| `TIMER_CMP_HIGH`   | `0x14` | R/W    | Timer comparator value for upper 32-bit          |
| `TIMER_START_LOW`  | `0x18` | R/W    | Timer start value register for lower 32-bit      |
| `TIMER_START_HIGH` | `0x1C` | R/W    | Timer start value register for upper 32-bit      |
| `TIMER_RESET_LOW`  | `0x20` | R/W    | Additional Reset timer register for lower 32-bit |
| `TIMER_RESET_HIGH` | `0x24` | R/W    | Additional Reset timer register for upper 32-bit |

### Register: CFG_REG_LOW
| Bit #  | Access | Description |
|--------|--------|-------------|
| `31`   | R/W    | **64-bit mode:** Enables 64-bit mode<br>&emsp;0: 64-bit mode disabled. Two 32-bit counters are available<br>&emsp;1: 64-bit mode disabled. One 32-bit counter is available |
| `30:9` |        | **Reserved** |
| `15:8` | R/W    | **Prescaler value:**<br>`FreqTimer = 1/(1+PrescalerValue[7:0])` |
| `7`    | R/W    | **Clock Source:**<br>&emsp;0: From Prescaler<br>&emsp;1: From 32.768 KHz ref clock |
| `6`    | R/W    | **Prescaler enable:** Activates prescaler counting<br>&emsp;0: Prescaler is disabled<br>&emsp;1: Prescaler is enabled |
| `5`    | R/W    | **One shot:** One shot feature<br>&emsp;0: Keeps counting when TIMER_CMP_LOW is reached<br>&emsp;1: Disables timer when TIMER_CMP_LOW is reached |
| `4`    | R/W    | **CMP&CLR:** Compare and clear feature<br>&emsp;0: Timer keeps going on after reaching TIMER_CMP_LOW<br>&emsp;1: Set timer to 0 when TIMER_CMP_LOW is reached |
| `3`    | R/W    | **IEM:** Input event mask<br>&emsp;0: Input event is disabled<br>&emsp;1: Input event is enabled |
| `2`    | R/W    | **IRQ Enable:** Rise an interrupt request when TIMER_CMP_LOW is reached<br>&emsp;0: IRQ is enabled<br>&emsp;1: IRQ is disabled |
| `1`    | W      | **RESET:** Resets timer value (this field is cleared after timer reset) |
| `0`    | R/W    | **ENABLE:** Enables Timer<br>&emsp;0: Timer idle<br>&emsp;1: Timer active |

### Register: CFG_REG_HIGH
| Bit #  | Access | Description |
|--------|--------|-------------|
| `31:8` |        | **Reserved** |
| `7`    | R/W    | **Clock Source:**<br>&emsp;0: From Prescaler<br>&emsp;1: From 32.768 KHz ref clock |
| `6`    | R/W    | **Prescaler enable:** Activates prescaler counting<br>&emsp;0: Prescaler is disabled<br>&emsp;1: Prescaler is enabled |
| `5`    | R/W    | **One shot:** One shot feature<br>&emsp;0: Keeps counting when TIMER_CMP_LOW is reached<br>&emsp;1: Disables timer when TIMER_CMP_LOW is reached |
| `4`    | R/W    | **CMP&CLR:** Compare and clear feature<br>&emsp;0: Timer keeps going on after reaching TIMER_CMP_LOW<br>&emsp;1: Set timer to 0 when TIMER_CMP_LOW is reached |
| `3`    | R/W    | **IEM:** Input event mask<br>&emsp;0: Input event is disabled<br>&emsp;1: Input event is enabled |
| `2`    | R/W    | **IRQ Enable:** Rise an interrupt request when TIMER_CMP_LOW is reached<br>&emsp;0: IRQ is enabled<br>&emsp;1: IRQ is disabled |
| `1`    | W      | **RESET:** Resets timer value (this field is cleared after timer reset) |
| `0`    | R/W    | **ENABLE:** Enables Timer<br>&emsp;0: Timer idle<br>&emsp;1: Timer active |