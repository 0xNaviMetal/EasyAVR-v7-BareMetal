#include <avr/io.h>
#include <stdio.h>
void usart_init(unsigned int ubrr) {
	// 1. Set Baud Rate (51 = 9600 Baud @ 8MHz)
	UBRRH = (unsigned char)(ubrr >> 8);
	UBRRL = (unsigned char)ubrr;
	

	UCSRB = (1 << TXEN) | (1<< RXEN);
	
	// 3. Frame Format: 8-bit data, 1-stop bit, Asynchronous
	UCSRC = (1 << URSEL) | (1 << UCSZ1) | (1 << UCSZ0);
}

void trans_data(unsigned char data) {
	// Wait until transmit buffer is empty
	while(!(UCSRA & (1 << UDRE)));
	UDR = data;
}

int main(void) {
	// 1. Configure Port A for Input Buttons
	DDRA = 0x00;   // Set all Port A pins as inputs
	PORTA = 0xFF;  // Enable internal pull-up resistors
	
	// 2. Initialize USART
	usart_init(51);

	while (1) {
		// 3. Read the physical button states using PINA
	volatile	unsigned char button_states = PINA;
		
		// 4. Send the data to your logic analyzer / PC
		trans_data(button_states);
	
	
	}
	
	return 0;
}
 
