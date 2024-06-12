

#ifndef LED_H_
#define LED_H_

#include "../../LIB/STD_TYPES.h"

void LED_Init(void);
void ROTATE_LEDS(void);

#define LED_PORT PORT_C
#define LED_DDR  PORT_C



#endif /* LED_H_ */