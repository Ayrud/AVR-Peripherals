#include "STD_Types.h"
#include "BIT_Math.h"
#include <util/delay.h>
#include "DIO_interface.h"
#include "HAL/SEVEN_SEG/SEVEN_SEG_interface.h"

void Initialize_System(void);

int main(void)
{
	Initialize_System();

	u8 n1=0,n2=0;
	s8 m1=9,m2=1;
	u16 counter=0;
	while(1)
	{


		HAL_SEVEN_SEG_voidDisplay(COM3,m1);
		_delay_ms(5);
		MCAL_DIO_voidWritePin(DIOB,PIN5,High);
		HAL_SEVEN_SEG_voidDisplay(COM4,m2);
		_delay_ms(5);
		MCAL_DIO_voidWritePin(DIOB,PIN6,High);
		counter++;
		if(counter==50)
		{
			m1--;
			if(m1<0 && m2==0)
			{
				m2=1;
				m1=9;
				MCAL_DIO_voidWritePin(DIOA,PIN6,Low);
				MCAL_DIO_voidTogglePin(DIOA,PIN4);
				MCAL_DIO_voidTogglePin(DIOB,PIN7);

			}
			if(m1<0)
			{
				m1=9;
				m2--;
			}
			if(m1==5 && m2==0)
			{
				MCAL_DIO_voidWritePin(DIOA,PIN6,High);
			}


			counter=0;
		}
		/*HAL_SEVEN_SEG_voidDisplay(COM1,n1);
		_delay_ms(5);
		MCAL_DIO_voidWritePin(DIOA,PIN3,High);
		HAL_SEVEN_SEG_voidDisplay(COM2,n2);
		_delay_ms(5);
		MCAL_DIO_voidWritePin(DIOA,PIN2,High);
		HAL_SEVEN_SEG_voidDisplay(COM3,m1);
		_delay_ms(5);
		MCAL_DIO_voidWritePin(DIOB,PIN5,High);
		HAL_SEVEN_SEG_voidDisplay(COM4,m2);
		_delay_ms(5);
		MCAL_DIO_voidWritePin(DIOB,PIN6,High);
		counter++;
		if(counter==50)
		{
			n1++;
			m1--;
			if(n1==10)
			{
				n1=0;
				n2++;
			}
			if(n2==10)
				{n2--;}
			if(n2==10 && n2==10)
			{n2=0; n1=0;}
			if(m1<0)
			{
				m1=9;
				m2--;
			}
			if(m2<0)
				{m2--;}
			if(m1==0 && m2==0)
			{m1=0; m2=0;}
			counter=0;

		}*/


		/*for(u8 i = 0; i < 10; i++)
		{

			HAL_SEVEN_SEG_voidDisplay(COM1,i);
			MCAL_DIO_voidWritePin(DIOA, PIN6, GET_BIT(i,0));
			MCAL_DIO_voidWritePin(DIOA, PIN5, GET_BIT(i,1));
			MCAL_DIO_voidWritePin(DIOA, PIN4, GET_BIT(i,2));
			MCAL_DIO_voidWritePin(DIOB, PIN7, GET_BIT(i,3));
			_delay_ms(1000);

		}*/
	}
}


void Initialize_System(void)
{
	MCAL_DIO_voidSetPinMode(DIOA, PIN6,Output);
	MCAL_DIO_voidSetPinMode(DIOA, PIN5,Output);
	MCAL_DIO_voidSetPinMode(DIOB, PIN4,Output);
	MCAL_DIO_voidSetPinMode(DIOB, PIN7,Output);
	MCAL_DIO_voidSetPinMode(DIOA, PIN4,Output);

	MCAL_DIO_voidSetPinMode(DIOA,PIN3,Output);
	MCAL_DIO_voidSetPinMode(DIOA,PIN2,Output);
	MCAL_DIO_voidSetPinMode(DIOB,PIN5,Output);
	MCAL_DIO_voidSetPinMode(DIOB,PIN6,Output);

	MCAL_DIO_voidWritePin(DIOA,PIN3,High);
	MCAL_DIO_voidWritePin(DIOA,PIN2,High);
	MCAL_DIO_voidWritePin(DIOB,PIN5,High);
	MCAL_DIO_voidWritePin(DIOB,PIN6,High);
	MCAL_DIO_voidWritePin(DIOB,PIN7,High);
	MCAL_DIO_voidWritePin(DIOA,PIN4,Low);

	MCAL_DIO_voidSetPinMode(DIOB, PIN0, Output);
	MCAL_DIO_voidSetPinMode(DIOB, PIN1, Output);
	MCAL_DIO_voidSetPinMode(DIOB, PIN2, Output);
	MCAL_DIO_voidSetPinMode(DIOB, PIN4, Output);

}


