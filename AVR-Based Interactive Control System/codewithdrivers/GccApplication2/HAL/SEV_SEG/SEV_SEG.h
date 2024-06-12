
#ifndef SEV_SEG_H_
#define SEV_SEG_H_

 #include "../../LIB/STD_TYPES.h"
 
void SEV_SEG_INIT(void);
void SEV_SEG_DISPLAY(void);
//define them again by macros to be easy to remember and understand the code 
#define SEV_SEG_PORT	PORT_B
#define SEV_SEG_DDR		PORT_B

#endif /* SEV_SEG_H_ */