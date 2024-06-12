

#ifndef INTERRUPT_H_
#define INTERRUPT_H_

#include <avr/interrupt.h>
#include "../../LIB/BIT_MATH.h"

void INTERRUPT_INIT(void);

#define INTERRUPT_PD2_ON	SET_BIT(PCMSK2,PCINT18)	//PD2
#define INTERRUPT_PD3_ON	SET_BIT(PCMSK2,PCINT19)	//PD3
#define INTERRUPT_ENABLE	SET_BIT(PCICR,PCIE2)	//ENABLE PORT D PCI



#endif /* INTERRUPT_H_ */