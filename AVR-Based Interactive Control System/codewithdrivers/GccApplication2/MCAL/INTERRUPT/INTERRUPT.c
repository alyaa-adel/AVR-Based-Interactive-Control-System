

#include "INTERRUPT.h"

void INTERRUPT_INIT(void)
{  
	SET_BIT(PCMSK2,PCINT18);
	SET_BIT(PCMSK2,PCINT19);
	SET_BIT(PCICR,PCIE2);	
	sei();
}



