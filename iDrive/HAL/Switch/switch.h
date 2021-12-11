/*
 * switch.h
 *
 * Created: 12/9/2021 4:46:05 AM
 *  Author: evram
 */ 


#ifndef SWITCH_H_
#define SWITCH_H_

#include "Dio.h"

typedef enum
{
	SW_RELEASED,
	SW_PRESSED
}Sw_StateEnum_t;

typedef enum
{
	SW0 = DIO_PIN0,
	SW1 = DIO_PIN6,
	SW2 = DIO_PIN2
}SwEnumt_t;

void Sw_init(volatile uint8 *Sw_Reg, SwEnumt_t Sw_no);
Sw_StateEnum_t Sw_StateGet(volatile uint8 *Sw_Reg, SwEnumt_t Sw_no);



#endif /* SWITCH_H_ */