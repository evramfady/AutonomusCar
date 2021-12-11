/*
 * Motor_Driver.h
 *
 * Created: 12/9/2021 4:39:21 AM
 *  Author: evram
 */ 


#ifndef MOTOR_DRIVER_H_
#define MOTOR_DRIVER_H_

#include "Atmega_Cnfg.h"
#include "Macros.h"
#include "Dio.h"

#define MOTORS_DIR      PORTB_DIR_REG
#define MOTORS_OUT      PORTB_OUT_REG

#define IN1 DIO_PIN0
#define IN2 DIO_PIN1
#define IN3 DIO_PIN2
#define IN4 DIO_PIN3

void motor_init();
void motor_forward();
void motor_break();
void motor_right();
void motor_left();


#endif /* MOTOR_DRIVER_H_ */