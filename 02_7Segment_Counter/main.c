#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {

	DDRA = 0x03; 
	DDRC = 0xFF; 
	uint8_t numbers[10] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x6F};
	uint8_t counter = 0;



	while (1) {

		uint8_t tens = counter / 10;
		uint8_t units = counter % 10;

	
		for(uint8_t i = 0; i < 50; i++) {

			PORTC = numbers[units];
			PORTA = (1 << 0); // Turn on unit digit

			_delay_ms(5);
						
			PORTC = numbers[tens];
			PORTA = (1 << 1); // Turn on tens digit

			_delay_ms(5);

		}

		counter++;

		if(counter > 99) {

			counter = 0;

		}}}
