

//Libraries include
#include "STD_Types.h"
#include "BIT_Math.h"
#include <util/delay.h>
#include "HAL/SEVEN_SEG/SEVEN_SEG_interface.h"
#include "DIO_interface.h"
#include "LCD_interface.h"

// Functions prototypes
void Initialize_System(void);

//main function
int main(void)
{
	Initialize_System();
	while(1)
	{
		//HAL_LCD_WriteString("Hello",2,0);
		s8 i=0,j=0;
		u8 MOVING_UP=1,MOVINGDOWN=0;
		while(j<20)
		{
			HAL_LCD_ChangePos(i,j);
			HAL_LCD_WriteData('O');
			_delay_ms(500);
			HAL_LCD_SendCommand(0x01);
			j++;
			if(MOVING_UP)
			{i--;}
			if(MOVINGDOWN)
			{i++;}
			if(i<0)
			{	MOVING_UP=0;
				MOVINGDOWN=1;
				i=1;}
			if(i>3)
			{	MOVING_UP=1;
				MOVINGDOWN=0;
				i=2;}
		}}}




// SYSTEM INITIALIZATION
void Initialize_System(void)
{
	HAL_LCD_Init();
}

