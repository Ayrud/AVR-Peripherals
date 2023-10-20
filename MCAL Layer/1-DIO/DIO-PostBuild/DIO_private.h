#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H
//PORT A
//PORTA REGISTER
#define PORTA			*((volatile u8*)0x3B) //OUTPUT REGISTER FOR PORT A
/*#define DIO_PORTA_PIN0		1
#define DIO_PORTA_PIN1		2
#define DIO_PORTA_PIN2		3
#define DIO_PORTA_PIN3		4
#define DIO_PORTA_PIN4		5
#define DIO_PORTA_PIN5		6
#define DIO_PORTA_PIN6		7
#define DIO_PORTA_PIN7		8*/
//DDRA REGISTER
#define DDRA			*((volatile u8*)0x3A) //DATA DIRECTION REGISTER FOR PORT A
/*#define DIO_DDRA_PIN0		1
#define DIO_DDRA_PIN1		2
#define DIO_DDRA_PIN2		3
#define DIO_DDRA_PIN3		4
#define DIO_DDRA_PIN4		5
#define DIO_DDRA_PIN5		6
#define DIO_DDRA_PIN6		7
#define DIO_DDRA_PIN7		8*/
//PINA REGISTER
#define PINA			*((volatile u8*)0x39) //INPUT REGISTER FOR PORT A
/*#define DIO_PINA_PIN0		1
#define DIO_PINA_PIN1		2
#define DIO_PINA_PIN2		3
#define DIO_PINA_PIN3		4
#define DIO_PINA_PIN4		5
#define DIO_PINA_PIN5		6
#define DIO_PINA_PIN6		7
#define DIO_PINA_PIN7		8*/
//PORT B
//PORTB REGISTER
#define PORTB			*((volatile u8*)0x38) //OUTPUT REGISTER FOR PORT B
/*#define DIO_PORTB_PIN0		1
#define DIO_PORTB_PIN1		2
#define DIO_PORTB_PIN2		3
#define DIO_PORTB_PIN3		4
#define DIO_PORTB_PIN4		5
#define DIO_PORTB_PIN5		6
#define DIO_PORTB_PIN6		7
#define DIO_PORTB_PIN7		8*/
//DDRB REGISTER
#define DDRB			*((volatile u8*)0x37) //DATA DIRECTION REGISTER FOR PORT B
/*#define DIO_DDRB_PIN0		1
#define DIO_DDRB_PIN1		2
#define DIO_DDRB_PIN2		3
#define DIO_DDRB_PIN3		4
#define DIO_DDRB_PIN4		5
#define DIO_DDRB_PIN5		6
#define DIO_DDRB_PIN6		7
#define DIO_DDRB_PIN7		8*/
//PINB REGISTER
#define PINB			*((volatile u8*)0x36) //INPUT REGISTER FOR PORT B
/*#define DIO_PINB_PIN0		1
#define DIO_PINB_PIN1		2
#define DIO_PINB_PIN2		3
#define DIO_PINB_PIN3		4
#define DIO_PINB_PIN4		5
#define DIO_PINB_PIN5		6
#define DIO_PINB_PIN6		7
#define DIO_PINB_PIN7		8*/
//PORT c
//PORTC REGISTER
#define PORTC			*((volatile u8*)0x35) //OUTPUT REGISTER FOR PORT B
/*#define DIO_PORTC_PIN0		1
#define DIO_PORTC_PIN1		2
#define DIO_PORTC_PIN2		3
#define DIO_PORTC_PIN3		4
#define DIO_PORTC_PIN4		5
#define DIO_PORTC_PIN5		6
#define DIO_PORTC_PIN6		7
#define DIO_PORTC_PIN7		8*/
//DDRC REGISTER
#define DDRC			*((volatile u8*)0x34) //DATA DIRECTION REGISTER FOR PORT B
/*#define DIO_DDRC_PIN0		1
#define DIO_DDRC_PIN1		2
#define DIO_DDRC_PIN2		3
#define DIO_DDRC_PIN3		4
#define DIO_DDRC_PIN4		5
#define DIO_DDRC_PIN5		6
#define DIO_DDRC_PIN6		7
#define DIO_DDRC_PIN7		8*/
//PINC REGISTER
#define PINC			*((volatile u8*)0x33) //INPUT REGISTER FOR PORT B
/*#define DIO_PINC_PIN0		1
#define DIO_PINC_PIN1		2
#define DIO_PINC_PIN2		3
#define DIO_PINC_PIN3		4
#define DIO_PINC_PIN4		5
#define DIO_PINC_PIN5		6
#define DIO_PINC_PIN6		7
#define DIO_PINC_PIN7		8*/

//PORT D
//PORTD REGISTER
#define PORTD			*((volatile u8*)0x32) //OUTPUT REGISTER FOR PORT B
/*#define DIO_PORTD_PIN0		1
#define DIO_PORTD_PIN1		2
#define DIO_PORTD_PIN2		3
#define DIO_PORTD_PIN3		4
#define DIO_PORTD_PIN4		5
#define DIO_PORTD_PIN5		6
#define DIO_PORTD_PIN6		7
#define DIO_PORTD_PIN7		8*/
//DDRC REGISTER
#define DDRD			*((volatile u8*)0x31) //DATA DIRECTION REGISTER FOR PORT B
/*#define DIO_DDRD_PIN0		1
#define DIO_DDRD_PIN1		2
#define DIO_DDRD_PIN2		3
#define DIO_DDRD_PIN3		4
#define DIO_DDRD_PIN4		5
#define DIO_DDRD_PIN5		6
#define DIO_DDRD_PIN6		7
#define DIO_DDRD_PIN7		8*/
//PINC REGISTER
#define PIND			*((volatile u8*)0x30) //INPUT REGISTER FOR PORT B
/*#define DIO_PIND_PIN0		1
#define DIO_PIND_PIN1		2
#define DIO_PIND_PIN2		3
#define DIO_PIND_PIN3		4
#define DIO_PIND_PIN4		5
#define DIO_PIND_PIN5		6
#define DIO_PIND_PIN6		7
#define DIO_PIND_PIN7		8*/




#endif
