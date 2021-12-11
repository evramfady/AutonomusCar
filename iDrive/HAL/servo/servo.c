/*
 * servo.c
 *
 * Created: 12/9/2021 4:49:43 AM
 *  Author: evram
 */ 

#include "servo.h"
#include "Dio.h"
#include "ATmega32_Cfg.h"
#include <util/delay.h>

void Servo_Init(uint8* port ,DioPinEnum_t pin)
{
	Dio_ChannelDirectionSet(port,pin,DIO_OUTPUT);
}

void Servo_Rotate(uint8* port ,DioPinEnum_t pin,sint8 degree)
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
	}
}