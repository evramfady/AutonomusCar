/*
 * servo.h
 *
 * Created: 12/5/2021 7:46:57 PM
 *  Author: Joseph Maged
 */ 


#ifndef SERVO_H_
#define SERVO_H_
#include "Std_Types.h"
#include "ATmega32_Cfg.h"
#include "Dio.h"
servo_Init(uint8 * port ,DioPinEnum_t pin);
servo_Rotate(uint8 * port ,DioPinEnum_t pin);



#endif /* SERVO_H_ */