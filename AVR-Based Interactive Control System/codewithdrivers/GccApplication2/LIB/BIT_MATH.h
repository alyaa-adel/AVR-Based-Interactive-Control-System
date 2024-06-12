
#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define SET_BIT(Port_ID,Pin_ID) 	((Port_ID) |= 	(1<<(Pin_ID)))
#define CLEAR_BIT(Port_ID,Pin_ID)	((Port_ID) &= (~ (1<<(Pin_ID))))
#define TOOGLE_BIT(Port_ID,Pin_ID)	((Port_ID) ^= 	(1<<(Pin_ID)))
#define GET_BIT(Port_ID,Pin_ID)		(((Port_ID)>>(Pin_ID)) &(0x01))


#endif /* BIT_MATH_H_ */