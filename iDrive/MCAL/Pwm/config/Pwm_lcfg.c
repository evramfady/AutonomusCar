/*
 * Pwm_lcfg.c
 *
 * Created: 12/10/2021 3:30:17 PM
 *  Author: evram
 */ 
#include "Pwm.h"

Pwm_ConfigType gStrPwm_Configuration[PWM_CHANNELS_NUM] =
{
	{
		PWM_CHANNEL_0,
		PWM_MODE_FAST,
		PWM_HIGH,
		PWM_PRESCALE_256,
		1U,
		256,
		50U
	},
	{
		PWM_CHANNEL_1,
		PWM_MODE_FAST,
		PWM_HIGH,
		PWM_PRESCALE_64,
		1U,
		64U,
		50U
	},
	{
		PWM_CHANNEL_2,
		PWM_MODE_FAST,
		PWM_HIGH,
		PWM_PRESCALE_1024,
		1U,
		1024U,
		80U
	}
};