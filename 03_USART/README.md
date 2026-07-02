This project configures the AVR USART hardware via direct register manipulation without using external libraries.

Configures UBRR for timing.

Sets UCSRB to enable hardware transmission.

Safely masks UCSRC (0x86) to bypass the shared memory address trap with UBRRH.

Reads physical button states from Port A and transmits the raw byte over serial.

Verification
1. Hardware Verification (Logic Analyzer)
<img src="assets/1111.png" width="400" alt="">

Capturing the physical PD1 pin to verify start bits, 8-bit data payloads, stop bits, and accurate 9600 baud timing.

2. Register Verification (Microchip Studio)
 <img src="assets/11.png" width="400" alt="">

I/O Peripheral view confirming correct bit-masking in the USART control registers.
