

#ifndef P_B_H_
#define P_B_H_

#include "../../LIB/STD_TYPES.h"
void PUSH_BUTTON_INIT(void);

#define BUTTON_PD2_IS_PRESSED		((BUTTON_PIN & (1 << BUTTON1_PIN)))

#define BUTTON_PD3_IS_PRESSED		((BUTTON_PIN & (1 << BUTTON2_PIN)))
// define as macros again to be easy to remember and understood the code 
#define BUTTON_PORT   PORT_D // Define port for buttons
#define BUTTON_PIN    PIND_REG // Define port for buttons
#define BUTTON1_PIN   Pin2  // Define pin for first button
#define BUTTON2_PIN   Pin3 // Define pin for second button
#define BUTTON_DDR	  PORT_D


#endif /* P_B_H_ */