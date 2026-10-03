#include "stm32f10x.h"                  // Device header
#include "Delay.h" 

#define LED_PINS  (GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_2 |GPIO_Pin_3 | GPIO_Pin_4 | GPIO_Pin_5)
void LED_Init(void)
	{
	GPIO_InitTypeDef GPIO_InitStruct;
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStruct.GPIO_Pin = LED_PINS;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStruct);
	GPIO_SetBits(GPIOA, LED_PINS);
}
	void LED_OFF(void)
{
	GPIO_SetBits(GPIOA, LED_PINS);
}
	void LED_ON(void)
	{	GPIO_SetBits(GPIOA, LED_PINS);
		GPIO_ResetBits(GPIOA, GPIO_Pin_0);
		Delay_ms(500);
				GPIO_SetBits(GPIOA, GPIO_Pin_0);
				GPIO_ResetBits(GPIOA, GPIO_Pin_1);
		Delay_ms(500);
				GPIO_SetBits(GPIOA, GPIO_Pin_1);
				GPIO_ResetBits(GPIOA, GPIO_Pin_2);
		Delay_ms(500);
				GPIO_SetBits(GPIOA, GPIO_Pin_2);
				GPIO_ResetBits(GPIOA, GPIO_Pin_3);
		Delay_ms(500);
				GPIO_SetBits(GPIOA, GPIO_Pin_3);
				GPIO_ResetBits(GPIOA, GPIO_Pin_4);
		Delay_ms(500);
				GPIO_SetBits(GPIOA, GPIO_Pin_4);
				GPIO_ResetBits(GPIOA, GPIO_Pin_5);
		Delay_ms(500);
				GPIO_SetBits(GPIOA, GPIO_Pin_5);
		 	GPIO_ResetBits(GPIOA, LED_PINS);
}

