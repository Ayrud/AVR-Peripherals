#ifndef DIO_CONFIG_H
#define DIO_CONFIG_H

#define CONC(b7,b6,b5,b4,b3,b2,b1,b0) CONC_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_HELPER(b7,b6,b5,b4,b3,b2,b1,b0) 0b##b7##b6##b5##b4##b3##b2##b1##b0
/****************** 					DDRA						****************************/
/******************           Input->0         Output->1            ***************************/
#define PORTA_PIN0_DIR			0
#define PORTA_PIN1_DIR			0
#define PORTA_PIN2_DIR			0
#define PORTA_PIN3_DIR			0
#define PORTA_PIN4_DIR			0
#define PORTA_PIN5_DIR			0
#define PORTA_PIN6_DIR			0
#define PORTA_PIN7_DIR			0

#define PORTB_PIN0_DIR			0
#define PORTB_PIN1_DIR			0
#define PORTB_PIN2_DIR			0
#define PORTB_PIN3_DIR			0
#define PORTB_PIN4_DIR			0
#define PORTB_PIN5_DIR			0
#define PORTB_PIN6_DIR			0
#define PORTB_PIN7_DIR			0

#define PORTC_PIN0_DIR			0
#define PORTC_PIN1_DIR			0
#define PORTC_PIN2_DIR			0
#define PORTC_PIN3_DIR			0
#define PORTC_PIN4_DIR			0
#define PORTC_PIN5_DIR			0
#define PORTC_PIN6_DIR			0
#define PORTC_PIN7_DIR			0

#define PORTD_PIN0_DIR			1
#define PORTD_PIN1_DIR			1
#define PORTD_PIN2_DIR			1
#define PORTD_PIN3_DIR			1
#define PORTD_PIN4_DIR			1
#define PORTD_PIN5_DIR			1
#define PORTD_PIN6_DIR			1
#define PORTD_PIN7_DIR			1
/*******************************	INITIAL VALUES    *******************************************/
/******************************		LOW->0 HIGH->1	  *******************************************/
#define PORTA_PIN0_INITIAL VALUE			0
#define PORTA_PIN1_INITIAL VALUE			0
#define PORTA_PIN2_INITIAL VALUE			0
#define PORTA_PIN3_INITIAL VALUE			0
#define PORTA_PIN4_INITIAL VALUE			0
#define PORTA_PIN5_INITIAL VALUE			0
#define PORTA_PIN6_INITIAL VALUE			0
#define PORTA_PIN7_INITIAL_VALUE			0

#define PORTB_PIN0_INITIAL VALUE			0
#define PORTB_PIN1_INITIAL VALUE			0
#define PORTB_PIN2_INITIAL VALUE			0
#define PORTB_PIN3_INITIAL VALUE			0
#define PORTB_PIN4_INITIAL VALUE			0
#define PORTB_PIN5_INITIAL VALUE			0
#define PORTB_PIN6_INITIAL VALUE			0
#define PORTB_PIN7_INITIAL VALUE			0

#define PORTC_PIN0_INITIAL VALUE			0
#define PORTC_PIN1_INITIAL VALUE			0
#define PORTC_PIN2_INITIAL VALUE			0
#define PORTC_PIN3_INITIAL VALUE			0
#define PORTC_PIN4_INITIAL VALUE			0
#define PORTC_PIN5_INITIAL VALUE			0
#define PORTC_PIN6_INITIAL VALUE			0
#define PORTC_PIN7_INITIAL VALUE			0

#define PORTB_PIN0_INITIAL VALUE			0
#define PORTB_PIN1_INITIAL VALUE			0
#define PORTB_PIN2_INITIAL VALUE			0
#define PORTB_PIN3_INITIAL VALUE			0
#define PORTB_PIN4_INITIAL VALUE			0
#define PORTB_PIN5_INITIAL VALUE			0
#define PORTB_PIN6_INITIAL VALUE			0
#define PORTB_PIN7_INITIAL VALUE			0
#endif
