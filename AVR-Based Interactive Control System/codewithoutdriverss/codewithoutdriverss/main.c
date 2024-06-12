/*
* GccApplication3.c
*
* Created: 5/3/2024 10:37:29 PM
* Author : Rana / alyaa
*/
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>


volatile uint8_t segment_index = 0;
const uint8_t sevensegment[] =
{
	0b00111111, // 0
	0b00000110, // 1
	0b01011011, // 2
	0b01001111, // 3
	0b01100110, // 4
	0b01101101, // 5
	0b01111101, // 6
	0b00000111, // 7
	0b01111111, // 8
	0b01101111 // 9
};
#define F_CPU 16000000UL
#define LED_PORT PORTC // Define port for LEDs
#define SEGMENT_PORT PORTB // Define port for 7-segment display
#define BUTTON_PORT PIND // Define port for buttons
#define BUTTON1_PIN PD2 // Define pin for first button
#define BUTTON2_PIN PD3 // Define pin for second button
#define LED_COUNT 4 // Number of LEDs
void init_GPIO() {
	// Set LED ports as outputs
	DDRC = 0xFF;
	// Set 7-segment display port as output
	DDRB = 0xFF;
	// Set button ports as inputs with pull-up resistors enabled
	DDRD &= ~((1 << BUTTON1_PIN) | (1 << BUTTON2_PIN));
	PORTD |= (1 << BUTTON1_PIN) | (1 << BUTTON2_PIN);
}
void rotate_LEDs() {
	static uint8_t led_position = 0;
	LED_PORT = (1 << led_position);
	_delay_ms(100);
	led_position++;
	if (led_position >= LED_COUNT) {
		led_position = 0;
	}
}
void increment_display() {
	PORTB=sevensegment[segment_index];
	segment_index++;
	if(segment_index==10 )
	{
		segment_index=0;
	}
}
void interrupt_on()
{
	PCMSK2|=(1<<PCINT18);  // mintor pd2
	PCMSK2|=(1<<PCINT19);   //mintor pd3
	PCICR |= (1<< PCIE2); //enable port d
	sei(); // global interrupt
}
int main()
{
	init_GPIO();
	interrupt_on();
	while (1)
	{
		
	}
	
}
ISR(PCINT2_vect)
{
	// Check button is pressed
	if (!(BUTTON_PORT & (1 << BUTTON1_PIN))) {
		
		rotate_LEDs();
		_delay_ms(100);
		while (!(BUTTON_PORT & (1 << BUTTON1_PIN)));
	}
	// Check second button is pressed
	if (!(BUTTON_PORT & (1 << BUTTON2_PIN))) {
		
		increment_display();
		_delay_ms(100);
		while (!(BUTTON_PORT & (1 << BUTTON2_PIN)));
	}
}