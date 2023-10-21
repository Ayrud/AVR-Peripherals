#include "STD_Types.h"
#include "BIT_Math.h"
#include <util/delay.h>
#include "DIO_interface.h"
#include "HAL/SEVEN_SEG/SEVEN_SEG_interface.h"

void Initialize_System(void);

int main(void)
{
	Initialize_System();

	while(1)
	{

		HAL_SEVEN_SEG_voidDisplay(COM1,0);
		HAL_SEVEN_SEG_voidDisplay(COM2,0);
		for(u8 i = 0; i < 10; i++)
		{

			HAL_SEVEN_SEG_voidDisplay(COM1,i);
			MCAL_DIO_voidWritePin(DIOA, PIN6, GET_BIT(i,0));
			MCAL_DIO_voidWritePin(DIOA, PIN5, GET_BIT(i,1));
			MCAL_DIO_voidWritePin(DIOA, PIN4, GET_BIT(i,2));
			MCAL_DIO_voidWritePin(DIOB, PIN7, GET_BIT(i,3));
			_delay_ms(1000);

		}

		MCAL_DIO_voidWritePin(DIOA,PIN3,High);


	}
}


void Initialize_System(void)
{
	MCAL_DIO_voidSetPinMode(DIOA, PIN6,Output);
	MCAL_DIO_voidSetPinMode(DIOA, PIN5,Output);
	MCAL_DIO_voidSetPinMode(DIOA, PIN4,Output);
	MCAL_DIO_voidSetPinMode(DIOB,PIN7,Output);

	MCAL_DIO_voidSetPinMode(DIOA,PIN3,Output);
	MCAL_DIO_voidSetPinMode(DIOA,PIN2,Output);
	MCAL_DIO_voidSetPinMode(DIOB,PIN5,Output);
	MCAL_DIO_voidSetPinMode(DIOB,PIN6,Output);

	MCAL_DIO_voidWritePin(DIOA,PIN3,High);
	MCAL_DIO_voidWritePin(DIOA,PIN2,High);
	MCAL_DIO_voidWritePin(DIOB,PIN5,High);
	MCAL_DIO_voidWritePin(DIOB,PIN6,High);


	MCAL_DIO_voidSetPinMode(DIOB, PIN0, Output);
	MCAL_DIO_voidSetPinMode(DIOB, PIN1, Output);
	MCAL_DIO_voidSetPinMode(DIOB, PIN2, Output);
	MCAL_DIO_voidSetPinMode(DIOB, PIN4, Output);
}


