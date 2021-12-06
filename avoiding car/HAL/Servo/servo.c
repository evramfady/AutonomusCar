/*
 * servo.c
 *
 * Created: 12/5/2021 7:47:18 PM
 *  Author: Joseph Maged
 */ 
#include "servo.h"
#include "Dio.h"
#include "ATmega32_Cfg.h"
#include <util/delay.h>
#define F_CPU 16000000UL;

servo_Init(uint8 * port ,DioPinEnum_t pin){
	
	 Dio_ChannelDirectionSet(port,pin,DIO_OUTPUT);
}
servo_Rotate(uint8 * portout ,DioPinEnum_t pin,uint8 degree){
	 Dio_ChannelWrite(portout,pin,DIO_HIGH);
	 switch (degree){
	 case 0:
	 _delay_us(1500);
	 break;
	  case 90:
	  _delay_us(2000);
	  break;
	  case -90:
	  _delay_us(1000);
	  break;
	  default:
	  	 _delay_us(1500);

	 Dio_ChannelWrite(portout,pin,DIO_LOW);
	 _delay_ms(25);}
}