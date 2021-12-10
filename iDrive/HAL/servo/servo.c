/*
 * servo.c
 *
 * Created: 12/5/2021 7:47:18 PM
 *  Author: Joseph Maged
 */ 


#include "servo.h"
#include "Pwm.h"


/*void Servo_Init( uint8* port ,DioPinEnum_t pin)
{
	
	 Dio_ChannelDirectionSet(port,pin,DIO_OUTPUT);
}

void Servo_Rotate( uint8* port ,DioPinEnum_t pin,sint8 degree)
{
	 Dio_ChannelWrite(port,pin,DIO_HIGH);
	 
	 switch (degree)
   {
	 case 0:
	 _delay_us(1500U);
	 break;
	  case 90:
	  _delay_us(2000U);
	  break;
	  case -90:
	  _delay_us(1000U);
	  break;
	  default:
	  _delay_us(2000U);
	  break;

	 Dio_ChannelWrite(port,pin,DIO_LOW);
	 _delay_ms(20U);
   }*/


void ServoMotor_Init()
{
	Dio_ChannelDirectionSet(PORTD_DIR_REG,DIO_PIN7,DIO_OUTPUT);
	Pwm_Init(&gStrPwm_Configuration[PWM_CHANNEL_1]);
	*TIMER1_INP_CAP_REG = 2499;
}

void ServoMotor_Rotate90()
{
	*TIMER1_CMP_A_Reg = 400;
	_delay_ms(1500);
}

void ServoMotor_Rotate0()
{
	*TIMER1_CMP_A_Reg = 175;	
	_delay_ms(1500);
}

void ServoMotor_Rotateneg90()
{
	*TIMER1_CMP_A_Reg = 65;	
	_delay_ms(1500);
}