
#include "STD_Types.h"
#include "BIT_Math.h"
#include "SEVEN_SEG_interface.h"
#include "DIO_interface.h"

void HAL_SEVEN_SEG_voidDisplay(COM_t Copy_COM_tCOMn, u8 Copy_u8BCDNumber)
{
	switch(Copy_COM_tCOMn)
	{
		case COM1:
			MCAL_DIO_voidWritePin(DIOA,PIN3,Low);
			break;
		case COM2:
			MCAL_DIO_voidWritePin(DIOA,PIN2,Low);
			break;
		case COM3:
			MCAL_DIO_voidWritePin(DIOB,PIN5,Low);
			break;
		case COM4:
			MCAL_DIO_voidWritePin(DIOB,PIN6,Low);
			break;
		default:
			break;
	}

	//BCD
	MCAL_DIO_voidWritePin(DIOB, PIN0, GET_BIT(Copy_u8BCDNumber,0)); // A
	MCAL_DIO_voidWritePin(DIOB, PIN1, GET_BIT(Copy_u8BCDNumber,1)); // B
	MCAL_DIO_voidWritePin(DIOB, PIN2, GET_BIT(Copy_u8BCDNumber,2)); // C
	MCAL_DIO_voidWritePin(DIOB, PIN4, GET_BIT(Copy_u8BCDNumber,3)); // D
}
