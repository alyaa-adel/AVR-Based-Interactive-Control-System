


#ifndef DIO_REG_H_
#define DIO_REG_H_

//addresses we get from data sheet 

#define PORTB_REG        *((volatile uint8 *)0x25)
#define DDRB_REG	     *((volatile uint8 *)0x24)
#define PINB_REG	     *((volatile uint8 *)0x23)


#define PORTC_REG        *((volatile uint8 *)0x28)
#define DDRC_REG        *((volatile uint8 *)0x27)
#define PINC_REG         *((volatile uint8 *)0x26)


#define PORTD_REG        *((volatile uint8 *)0x2B)
#define DDRD_REG         *((volatile uint8 *)0x2A)
#define PIND_REG         *((volatile uint8 *)0x29)





#endif /* DIO_REG_H_ */