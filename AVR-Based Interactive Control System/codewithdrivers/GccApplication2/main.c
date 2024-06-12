#include <avr/interrupt.h>

#include "MCAL/DIO/DIO.h"
#include "HAL/SEV_SEG/SEV_SEG.h"
#include "LIB/STD_TYPES.h"
#include "HAL/LED/LED.h"
#include "MCAL/INTERRUPT/INTERRUPT.h"
#include "HAL/P_B/P_B.h"
#include <util/delay.h>
// in main.c we just call the functions that we made in Hal
int main(void)
{
		LED_Init();
		SEV_SEG_INIT();
		PUSH_BUTTON_INIT();
		INTERRUPT_INIT();
		while(1)
		{
			
		}
}
//isz must be up or down the int main 
ISR(PCINT2_vect)
{
	if (!(BUTTON_PD2_IS_PRESSED))
	{
		ROTATE_LEDS();
		while(!(BUTTON_PD2_IS_PRESSED));
	}
	
	if(!(BUTTON_PD3_IS_PRESSED))
	{
		SEV_SEG_DISPLAY();
		while(!(BUTTON_PD3_IS_PRESSED));
	}
}

