

#include "../../MCAL/DIO/DIO.h"
#include "P_B.h"

void PUSH_BUTTON_INIT(void)
{
	DIO_SetPinDirection(BUTTON_DDR,BUTTON1_PIN,Input);
	DIO_SetPinDirection(BUTTON_DDR,BUTTON2_PIN,Input);
	DIO_SetPinValue(BUTTON_PORT,BUTTON1_PIN,HIGH);
	DIO_SetPinValue(BUTTON_PORT,BUTTON1_PIN,HIGH);
}



