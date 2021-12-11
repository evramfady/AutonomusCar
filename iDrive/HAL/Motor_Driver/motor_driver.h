/*
 * motor_driver.h
 *
 * Created: 12/7/2021 7:18:29 PM
 *  Author: evram
 */ 


#ifndef MOTOR_DRIVER_H_
#define MOTORSDRIVER_H_

#include "ATmega32_Cfg.h"
#include "Macros.h"
#include "Dio.h"

#define MOTORS_DIR PORTA_DIR_REG
#define MOTORS_OUT PORTA_OUT_REG

#define IN1    DIO_PIN0
#define IN2    DIO_PIN1
#define IN3    DIO_PIN2
#define IN4    DIO_PIN3

void motor_init();
void motor_forward();
void motor_brake();
void motor_right();
void motor_left();




#endif /* MOTOR_DRIVER_H_ */