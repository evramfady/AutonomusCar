/*
 * Ultra_Sonic.h
 *
 * Created: 12/9/2021 3:45:55 AM
 *  Author: evram
 */ 


#ifndef ULTRA_SONIC_H_
#define ULTRA_SONIC_H_


#include "Gpt.h"
#include "Atmega_Cnfg"


#define ECHO       (3U)             
#define TRIGGER    (2U)            

#define Ultra_Sonic_DIR_REG        (PORTC_DIR_REG)
#define Ultra_Sonic_OUT_REG        (PORTC_OUT_REG)
#define Ultra_Sonic_INP_REG        (PORTC_INP_REG)



void Ultrasonic_Init(void);
uint32 Measure_Distance(void);


#endif /* ULTRA_SONIC_H_ */