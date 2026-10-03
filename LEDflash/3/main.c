#include "stm32f10x.h"                  // Device header
#include "Delay.h"   
#include "LED.h"   
#include "Key.h" 
uint8_t KeyNum;
int main(void)
{	
		LED_Init();
		Key_Init();
		while (1)
		{		
			KeyNum = Key_GetNum();
			if (KeyNum == 1)
  			{
				LED_ON();
			}
			if (KeyNum == 2)
			{
				LED_OFF();
			}

			
//			LED_ON();
//			Delay_ms(500);
//			LED_OFF();
//			Delay_ms(500);
			

		}

}
