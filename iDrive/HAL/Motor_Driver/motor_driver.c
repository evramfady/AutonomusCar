/*
 * motor_driver.c
 *
 * Created: 12/7/2021 7:17:15 PM
 *  Author: evram
 */ 

#include "motor_driver.h"
#include <util/delay.h>

void motor_init()
{
	Dio_ChannelDirectionSet(MOTORS_DIR,DIO_PIN0 , DIO_OUTPUT);
	Dio_ChannelDirectionSet(MOTORS_DIR,DIO_PIN1 , DIO_OUTPUT);
	Dio_ChannelDirectionSet(MOTORS_DIR,DIO_PIN2 , DIO_OUTPUT);
	Dio_ChannelDirectionSet(MOTORS_DIR,DIO_PIN3 , DIO_OUTPUT);
}

void motor_forward()
{
	
	Dio_ChannelWrite(MOTORS_OUT,IN1,DIO_HIGH);
	Dio_ChannelWrite(MOTORS_OUT,IN2,DIO_LOW);

	Dio_ChannelWrite(MOTORS_OUT,IN3,DIO_LOW);
	Dio_ChannelWrite(MOTORS_OUT,IN4,DIO_HIGH);

}

void motor_brake()
{
		
	Dio_ChannelWrite(MOTORS_OUT,IN1,DIO_LOW);
	Dio_ChannelWrite(MOTORS_OUT,IN4,DIO_LOW);
	
	Dio_ChannelWrite(MOTORS_OUT,IN2,DIO_HIGH);
	Dio_ChannelWrite(MOTORS_OUT,IN3,DIO_HIGH);
	
	_delay_ms(500U);
	
	Dio_ChannelWrite(MOTORS_OUT,IN2,DIO_LOW);
	Dio_ChannelWrite(MOTORS_OUT,IN3,DIO_LOW);
}

void motor_right()
{	
	
	Dio_ChannelWrite(MOTORS_OUT,IN2,DIO_HIGH);
	Dio_ChannelWrite(MOTORS_OUT,IN4,DIO_HIGH);
	
	_delay_ms(2000U);

	Dio_ChannelWrite( MOTORS_OUT,IN2,DIO_LOW);
	Dio_ChannelWrite( MOTORS_OUT,IN4,DIO_LOW);
}

void motor_left()
{
		
	Dio_ChannelWrite(MOTORS_OUT,IN1,DIO_HIGH);
	Dio_ChannelWrite(MOTORS_OUT,IN3,DIO_HIGH);
	
	_delay_ms(2000);

	Dio_ChannelWrite( MOTORS_OUT,IN1,DIO_LOW);
	Dio_ChannelWrite( MOTORS_OUT,IN3,DIO_LOW);
}