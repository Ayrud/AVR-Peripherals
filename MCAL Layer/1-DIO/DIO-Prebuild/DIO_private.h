#include "STD_TYPES.h"
#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H
//PORT A
//PORTA REGISTER
#define PORTA			*((volatile u8*)0x3B) //OUTPUT REGISTER FOR PORT A
//DDRA REGISTER
#define DDRA			*((volatile u8*)0x3A) //DATA DIRECTION REGISTER FOR PORT A
//PINA REGISTER
#define PINA			*((volatile u8*)0x39) //INPUT REGISTER FOR PORT A
//PORT B
//PORTB REGISTER
#define PORTB			*((volatile u8*)0x38) //OUTPUT REGISTER FOR PORT B
//DDRB REGISTER
#define DDRB			*((volatile u8*)0x37) //DATA DIRECTION REGISTER FOR PORT B
//PINB REGISTER
#define PINB			*((volatile u8*)0x36) //INPUT REGISTER FOR PORT B
//PORT C
//PORTC REGISTER
#define PORTC			*((volatile u8*)0x35) //OUTPUT REGISTER FOR PORT B
//DDRC REGISTER
#define DDRC			*((volatile u8*)0x34) //DATA DIRECTION REGISTER FOR PORT B
//PINC REGISTER
#define PINC			*((volatile u8*)0x33) //INPUT REGISTER FOR PORT B
//PORT D
//PORTD REGISTER
#define PORTD			*((volatile u8*)0x32) //OUTPUT REGISTER FOR PORT B
//DDRC REGISTER
#define DDRD			*((volatile u8*)0x31) //DATA DIRECTION REGISTER FOR PORT B
//PINC REGISTER
#define PIND			*((volatile u8*)0x30) //INPUT REGISTER FOR PORT B


/******************************  Direction Registers  *******************************************/
#define PORTA_DIR CONC(PORTA_PIN7_DIR,PORTA_PIN6_DIR,PORTA_PIN5_DIR,PORTA_PIN4_DIR,PORTA_PIN3_DIR,PORTA_PIN2_DIR,PORTA_PIN1_DIR,PORTA_PIN0_DIR)
#define PORTB_DIR CONC(PORTB_PIN7_DIR,PORTB_PIN6_DIR,PORTB_PIN5_DIR,PORTB_PIN4_DIR,PORTB_PIN3_DIR,PORTB_PIN2_DIR,PORTB_PIN1_DIR,PORTB_PIN0_DIR)
#define PORTC_DIR CONC(PORTC_PIN7_DIR,PORTC_PIN6_DIR,PORTC_PIN5_DIR,PORTC_PIN4_DIR,PORTC_PIN3_DIR,PORTC_PIN2_DIR,PORTC_PIN1_DIR,PORTC_PIN0_DIR)
#define PORTD_DIR CONC(PORTD_PIN7_DIR,PORTD_PIN6_DIR,PORTD_PIN5_DIR,PORTD_PIN4_DIR,PORTD_PIN3_DIR,PORTD_PIN2_DIR,PORTD_PIN1_DIR,PORTD_PIN0_DIR)


/******************************  OUTPUT(PORT) Registers  ****************************************/
#define PORTA_INITIAL_VALUE CONC(PORTA_PIN7_INITIAL_VALUE,PORTA_PIN6_INITIAL_VALUE,PORTA_PIN5_INITIAL_VALUE,PORTA_PIN4_INITIAL_VALUE,PORTA_PIN3_INITIAL_VALUE,PORTA_PIN2_INITIAL_VALUE,PORTA_PIN1_INITIAL_VALUE,PORTA_PIN0_INITIAL_VALUE)
#define PORTB_INITIAL_VALUE CONC(PORTB_PIN7_INITIAL_VALUE,PORTB_PIN6_INITIAL_VALUE,PORTB_PIN5_INITIAL_VALUE,PORTB_PIN4_INITIAL_VALUE,PORTB_PIN3_INITIAL_VALUE,PORTB_PIN2_INITIAL_VALUE,PORTB_PIN1_INITIAL_VALUE,PORTB_PIN0_INITIAL_VALUE)
#define PORTC_INITIAL_VALUE CONC(PORTC_PIN7_INITIAL_VALUE,PORTC_PIN6_INITIAL_VALUE,PORTC_PIN5_INITIAL_VALUE,PORTC_PIN4_INITIAL_VALUE,PORTC_PIN3_INITIAL_VALUE,PORTC_PIN2_INITIAL_VALUE,PORTC_PIN1_INITIAL_VALUE,PORTC_PIN0_INITIAL_VALUE)
#define PORTD_INITIAL_VALUE CONC(PORTD_PIN7_INITIAL_VALUE,PORTD_PIN6_INITIAL_VALUE,PORTD_PIN5_INITIAL_VALUE,PORTD_PIN4_INITIAL_VALUE,PORTD_PIN3_INITIAL_VALUE,PORTD_PIN2_INITIAL_VALUE,PORTD_PIN1_INITIAL_VALUE,PORTD_PIN0_INITIAL_VALUE)

#endif
