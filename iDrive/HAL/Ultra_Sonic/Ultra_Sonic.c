/*
 * Ultra_Sonic.c
 *
 * Created: 12/9/2021 3:47:00 AM
 *  Author: evram
 */ 

#include "Ultra_Sonic.h"
#include "Macros.h"
#include "Dio.h"
#include "Gpt.h"
#include <avr/interrupt.h>
#include "Ext_Interrupts.h"


static volatile int pulse = 0;           //The variable �pulse� is used to store the count value from the TCNT register.
static volatile int i = 0;              //The variable �i� is used as a flag to indicate the current status of the Echo pin.
uint16 Distance_cm = 0;                //storing the final output value after processing


void Ultrasonic_Init(void)
{
	// enabling interrupts to any logical change 
	Ext_Interrupts_Enable(EXT_INT0,EXT_INT_BOTH_EDGES); 
    Global_Interrupts_StateSet(GLOBAL_INT_ENABLE);

    Gpt_Init(&gaStrGpt_Configuration[GPT_TIMER0]);
	
	// Setting Trig and Echo Low to initialize module	
	Dio_ChannelDirectionSet(Ultra_Sonic_DIR_REG, TRIGGER, DIO_OUTPUT);
	Dio_ChannelDirectionSet(Ultra_Sonic_DIR_REG, ECHO, DIO_OUTPUT);
    Dio_ChannelWrite(Ultra_Sonic_OUT_REG,TRIGGER,DIO_LOW);
    Dio_ChannelWrite(Ultra_Sonic_OUT_REG,ECHO,DIO_LOW);
	
	// setting directions 
	Dio_ChannelDirectionSet(Ultra_Sonic_DIR_REG, TRIGGER, DIO_OUTPUT);
	Dio_ChannelDirectionSet(Ultra_Sonic_DIR_REG, ECHO, DIO_INPUT);
	
	
}
uint32 Measure_Distance(void)
{
	while(1)
	{
		
	//Placing a minimum 10us High level pulse to "Trigger"
    SET_BIT(Ultra_Sonic_OUT_REG,TRIGGER);           //The PIN is set high (5V)
    _delay_us(12U);                                //A delay of 12 Microseconds is given
    CLEAR_BIT(Ultra_Sonic_OUT_REG,TRIGGER);       //The PIN D0 is again set to Low (0v)
    _delay_us(12U);
	
	    Distance_cm = pulse/58;
	
	}	
	
    return Distance_cm;
}

ISR(INT0_vect)
{
	if(i == 0)
	{
		TCCR1B |= 1<<CS10;
		i = 1;
	}
	else
	{
		TCCR1B = 0;
		pulse = TCNT1;
		TCNT1 = 0;
		i = 0;
	}
}