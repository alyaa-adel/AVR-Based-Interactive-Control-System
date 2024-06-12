


#ifndef DIO_H_
#define DIO_H_



#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "DIO_TYPES.h"
#include "DIO_REG.h"


void DIO_SetPortDirection(DIO_PORT_ID port_ID,DIO_Direction direction);

void DIO_SetPortValue(DIO_PORT_ID port_ID,uint8 value);

void DIO_SetPinDirection(DIO_PORT_ID port_ID, DIO_PIN_ID pin_ID,DIO_Direction direction);

void DIO_SetPinValue(DIO_PORT_ID port_ID,DIO_PIN_ID pin_ID,STD_levelType value);

STD_levelType DIO_GetPinValue(DIO_PORT_ID port_ID,DIO_PIN_ID pin_ID);


#define INPUT  0
#define OUTPUT 1

#define LOW    0
#define HIGH   1

#define ENABLE  1
#define DISABLE 0

 


#endif /* DIO_H_ */