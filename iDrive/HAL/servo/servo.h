/*
 * servo.h
 *
 * Created: 12/5/2021 7:46:57 PM
 *  Author: Joseph Maged
 */ 


#ifndef SERVO_H_
#define SERVO_H_
/*#include "Std_Types.h"
#include "ATmega32_Cfg.h"
#include "Dio.h"
void Servo_Init(uint8 * port ,DioPinEnum_t pin);
void Servo_Rotate(uint8*  port ,DioPinEnum_t pin,sint8 degree); */

#include "Pwm.h"
#include "Dio.h"
#include <util/delay.h>

#define TIMER1_CMP_A_Reg					((volatile uint16*)0x4AU)
#define TIMER1_INP_CAP_REG					((volatile uint16*)0x46U)
#define PORTD_DIR_REG			            ((volatile uint8*)0x31U)


void ServoMotor_Init();
void ServoMotor_Rotate90();
void ServoMotor_Rotate0();
void ServoMotor_Rotateneg90();





#endif /* SERVO_H_ */