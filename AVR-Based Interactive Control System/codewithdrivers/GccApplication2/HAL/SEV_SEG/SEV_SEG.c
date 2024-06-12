#include "SEV_SEG.h"
#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/DIO/DIO.h"

void SEV_SEG_INIT(void)
{
	DIO_SetPortDirection(SEV_SEG_DDR,Output);		
}
void SEV_SEG_DISPLAY(void)
{	
	static uint8 digit = 0;
	const uint8 sevensegment[] =
	{
		0b00111111,  // 0
		0b00000110,  // 1
		0b01011011,  // 2
		0b01001111,  // 3
		0b01100110,  // 4
		0b01101101,  // 5
		0b01111101,  // 6
		0b00000111,  // 7
		0b01111111,  // 8
		0b01101111   // 9
	};
	
	DIO_SetPortValue(SEV_SEG_PORT,sevensegment[digit]);
	digit++;
	
	if(digit==10)
	{
		digit=0;
	}
	
}