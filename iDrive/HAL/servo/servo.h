/*
 * servo.h
 *
 * Created: 12/9/2021 4:49:29 AM
 *  Author: evram
 */ 


#ifndef SERVO_H_
#define SERVO_H_

#include "Std_types.h"
#include "Atmega_Cnfg.h"
#include "Dio.h"

void Servo_Init(uint8* port ,DioPinEnum_t pin);
void Servo_Rotate(uint8*  port ,DioPinEnum_t pin,sint8 degree);



#endif /* SERVO_H_ */