
#include "DIO.h"

void DIO_SetPortDirection(DIO_PORT_ID port_ID,DIO_Direction direction)
{
	if(Output == direction)
	{
		switch(port_ID)
		{
			case PORT_B: DDRB_REG = 0xFF ; break;
			case PORT_C: DDRC_REG = 0xFF ; break;
			case PORT_D: DDRD_REG = 0xFF ; break;
		}
	}
	else if( Input == direction )
	{
		switch(port_ID)
		{
			case PORT_B:  DDRB_REG = 0x00 ; break;
			case PORT_C:  DDRC_REG = 0x00 ; break;
			case PORT_D:  DDRD_REG = 0x00 ; break;
		}
	}
}

void DIO_SetPortValue(DIO_PORT_ID port_ID,uint8 value)
{
	switch(port_ID)
	{
		case PORT_B: PORTB_REG = value ; break;
		case PORT_C: PORTC_REG = value ; break;
		case PORT_D: PORTD_REG = value ; break;

	}
}

void DIO_SetPinDirection(DIO_PORT_ID port_ID,DIO_PIN_ID pin_ID,DIO_Direction direction)
{
	if(port_ID <= PORT_D && pin_ID <= Pin7)
	{
		if( Output == direction)
		{
			switch(port_ID)
			{
				case PORT_B: SET_BIT(DDRB_REG,pin_ID) ; break;
				case PORT_C: SET_BIT(DDRC_REG,pin_ID) ; break;
				case PORT_D: SET_BIT(DDRD_REG,pin_ID) ; break;
			}
		}
		else if(Input == direction)
		{
			switch(port_ID)
			{
				case PORT_B: CLEAR_BIT(DDRB_REG,pin_ID) ; break;
				case PORT_C: CLEAR_BIT(DDRC_REG,pin_ID) ; break;
				case PORT_D: CLEAR_BIT(DDRD_REG,pin_ID) ; break;
			}
		}
	}
}

void DIO_SetPinValue(DIO_PORT_ID port_ID,DIO_PIN_ID pin_ID,STD_levelType value)
{
	if(port_ID <= PORT_D && pin_ID <= Pin7)
	{
		if(value == HIGH)
		{
			switch(port_ID)
			{
				case PORT_B: SET_BIT(PORTB_REG,pin_ID) ; break;
				case PORT_C: SET_BIT(PORTC_REG,pin_ID) ; break;
				case PORT_D: SET_BIT(PORTD_REG,pin_ID) ; break;
			}
		}
		else if(value == LOW )
		{
			switch(port_ID)
			{
				case PORT_B: CLEAR_BIT(PORTB_REG,pin_ID) ; break;
				case PORT_C: CLEAR_BIT(PORTC_REG,pin_ID) ; break;
				case PORT_D: CLEAR_BIT(PORTD_REG,pin_ID) ; break;
			}
		}
	}
}

STD_levelType DIO_GetPinValue(DIO_PORT_ID port_ID,DIO_PIN_ID pin_ID)
{
	STD_levelType PinValue;

	if(port_ID <= PORT_D && pin_ID <= Pin7)
	{
		switch(port_ID)
		{
			case PORT_B: PinValue = GET_BIT(PINB_REG,pin_ID) ; break;
			case PORT_C: PinValue = GET_BIT(PINC_REG,pin_ID) ; break;
			case PORT_D: PinValue = GET_BIT(PIND_REG,pin_ID) ; break;
		}
	}

	return PinValue ;
}