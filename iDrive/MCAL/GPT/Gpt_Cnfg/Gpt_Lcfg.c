/*
 * Gpt_Lcfg.c
 *
 * Created: 12/9/2021 3:55:52 AM
 *  Author: evram
 */ 

#include "Gpt.h"

const Gpt_ConfigType gaStrGpt_Configuration[GPT_CHANNELS_NUM] =
{
	{
		GPT_TIMER0,
		GPT_NORMAL_MODE,
		GPT_NO_PRESCALE,
		GPT_INTERRUPT_ENABLE,
		0U  /* Not in CTC Mode */
	},
	{
		GPT_TIMER1,
		GPT_CTC_MODE,
		GPT_PRESCALE_1024,
		GPT_INTERRUPT_ENABLE,
		15625U  /* Not in CTC Mode */
	},
	{
		GPT_TIMER2,
		GPT_NORMAL_MODE,
		GPT_PRESCALE_256,
		GPT_INTERRUPT_ENABLE,
		0U  /* Not in CTC Mode */
	}
};