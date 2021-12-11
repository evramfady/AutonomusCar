/*
 * Wdt.c
 *
 * Created: 12/5/2021 3:25:27 PM
 * Author : evram 
 */ 

#include "ATmega32_Cfg.h"
#include "Dio.h"
#include "Ultrasonic.h"
#include "Sw.h"
#include "motor_driver.h"
#include <avr/interrupt.h>
#include "Ext_Interrupts.h"
#include "Servo.h"

int main(void)
{
	//Sw_init(PORTD_DIR_REG,SW1);
   // ServoMotor_Init();
	//Ultrasonic_Init();
	motor_init();
	/*uint8 flag =0;
	uint16 left=0;
	uint16 right=0;
	
	Sw_StateEnum_t  Sw_State = Sw_StateGet(PORTD_INP_REG,SW1);

	switch (Sw_State)
	{
		case SW_PRESSED:
		flag=1;
		break;
		case SW_RELEASED:
		flag=0;
		break;
		default:
		break;
	}*/
	
	
	
	while(1)
	{
		
	/*if (flag==1)
     {
		 ServoMotor_Rotate90();
		 
		 left=Measure_Distance();
		 
		 ServoMotor_Rotateneg90();
		 
		 right=Measure_Distance();
		 
		 ServoMotor_Rotate0();
		 
		 
		if (left>=right)
		{
			motor_left();
		}
	  else 
	  {
		motor_right();
	  }
		
		motor_forward();
	    } else {
		motor_brake();
	} */
	
	motor_forward();
	
  }
}


