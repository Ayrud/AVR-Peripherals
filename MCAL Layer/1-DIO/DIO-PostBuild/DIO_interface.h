#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H
#include "STD_TYPES.h"
#define DIO_u8PIN_OUTPUT    1
#define DIO_u8PIN_INPUT     0

#define DIO_u8PIN_HIGH      1
#define DIO_u8PIN_LOW       0

#define DIO_u8PORT_OUTPUT   0XFF
#define DIO_u8PORT_INPUT    0

#define DIO_u8PORT_HIGH   0XFF
#define DIO_u8PORT_LOW    0

#define DIO_u8PORTA         0
#define DIO_u8PORTB         1
#define DIO_u8PORTC         2
#define DIO_u8PORTD         3

#define DIO_u8PIN0          0
#define DIO_u8PIN1          1
#define DIO_u8PIN2          2
#define DIO_u8PIN3          3
#define DIO_u8PIN4          4
#define DIO_u8PIN5          5
#define DIO_u8PIN6          6
#define DIO_u8PIN7          7



//DDR PIN (Port,Pin and the direction - Input or output)
u8 DIO_u8SetPinDirection(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Direction);
//DDR Port (Port and the direction)
u8 DIO_u8SetPortDirection(u8 Copy_u8Port, u8 Copy_u8Direction);
//Pin if output (Port, Pin, Value)
u8 DIO_u8SetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value);
//Port if output (Port, Value)
u8 DIO_u8SetPortValue(u8 Copy_u8Port, u8 Copy_u8Value);
//Toggle pin value
u8 DIO_u8TogglePin(u8 Copy_u8Port,u8 Copy_u8Pin);
//Get the pin Value
u8 DIO_u8GetPinValue(u8 Copy_u8Port,u8 Copy_u8Pin, u8* Copy_pu8Value);

#endif
