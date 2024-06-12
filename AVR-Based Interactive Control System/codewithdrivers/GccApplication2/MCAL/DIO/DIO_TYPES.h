

#ifndef DIO_TYPES_H_
#define DIO_TYPES_H_



typedef enum
{
	Input , //0
	Output, //1
}DIO_Direction;

typedef enum
{
	PORT_B,
	PORT_C,
	PORT_D,
}DIO_PORT_ID;

typedef enum
{
	Pin0,
	Pin1,
	Pin2,
	Pin3,
	Pin4,
	Pin5,
	Pin6,
	Pin7,
}DIO_PIN_ID;



#endif /* DIO_TYPES_H_ */