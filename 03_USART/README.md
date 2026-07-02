This project configures the AVR USART hardware via direct register manipulation without using external libraries.

Configures UBRR for timing.

Sets UCSRB to enable hardware transmission.

Safely masks UCSRC (0x86) to bypass the shared memory address trap with UBRRH.

Reads physical button states from Port A and transmits the raw byte over serial.

Verification
1. Hardware Verification (Logic Analyzer)
(Insert your logic analyzer screenshot here: ![Logic Analyzer](link_to_image.png))

Capturing the physical PD1 pin to verify start bits, 8-bit data payloads, stop bits, and accurate 9600 baud timing.

2. Register Verification (Microchip Studio)
(Insert your Microchip Studio watch window screenshot here: ![Debugger](link_to_image.png))

I/O Peripheral view confirming correct bit-masking in the USART control registers.
