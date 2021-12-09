/*
 * Ultrasonic.h
 *
 *  Created on: 12/5/2021 7:29:28 PM
 *      Author: evram
 */

#ifndef ULTRASONIC_H_
#define ULTRASONIC_H_

#include"Gpt.h"
#include<util/delay.h>


#include "ATmega32_Cfg.h"


#define ECHO       (DIO_PIN3)             
#define TRIGGER    (DIO_PIN2)            



#define Ultra_Sonic_DIR_REG        (PORTC_DIR_REG)
#define Ultra_Sonic_OUT_REG        (PORTC_OUT_REG)
#define Ultra_Sonic_INP_REG        (PORTC_INP_REG)

  
  void Ultrasonic_Init(void);
  uint32 Measure_Distance(void);

#endif /* ULTRASONIC_H_ */
