#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

int main (void){
	DDRA = 0XFF;
	DDRB = 0xFF;
	DDRC = 0xFF;
	DDRD = 0xFF;
	
	while (1) {
		for (uint8_t i=0 ;i<8 ; i++){
			PORTA =(1<<i);
			_delay_ms(100);
		}
		PORTA = 0X00;
		
		for (uint8_t i = 0; i < 8; i++) {
			PORTB = (1 << i);
			_delay_ms(100);
		}
		PORTB = 0x00;

		for (uint8_t i = 0; i < 8; i++) {
			PORTC = (1 << i);
			_delay_ms(100);
		}
		PORTC = 0x00;

		for (uint8_t i = 0; i < 8; i++) {
			PORTD = (1 << i);
			_delay_ms(100);
		}
		PORTD = 0x00;
		
		_delay_ms(500);
	}
}
