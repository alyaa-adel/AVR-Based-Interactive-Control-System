
#include "LED.h"
#include "../../MCAL/DIO/DIO.h"
#include "../../LIB/STD_TYPES.h"
#include <util/delay.h>

const uint8 LEDS[]=
{
	0b00000001,
	0b00000010,
	0b00000100,
	0b00001000,
};

void LED_Init(void)
{	
	DIO_SetPortDirection(LED_DDR,Output);
}

void ROTATE_LEDS(void)
{
	static uint8 led_index = 0;
	DIO_SetPortValue(LED_PORT,LEDS[led_index]);
	_delay_ms(100);
	led_index++;
	if(led_index==4)
	{
		led_index=0;
	}
}