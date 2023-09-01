/*Device used--STM32F411RE*/
/*Program to toggle LED PA 5*/

#include "stm32f4xx.h"
void delay(unsigned int a);

int main()
{
	RCC->AHB1ENR=(1<<0);                 //enable clock to GPIO port A

	/*Configure PA5 pin as output port */
	GPIOA->MODER|=(1<<10);
	GPIOA->MODER&=~(1<<11);

	while(1)
	{
		GPIOA->ODR^=(1<<5);               //toggle LED PA5
		delay(100);
		/*GPIOA->BSRR=(1<<5);             //set PA5 or LED on
		delay(100);
		GPIOA->BSRR=(1<<21);            //clear PA5 or LED off
		delay(100);*/
	}
}

void delay(unsigned int a)
{
  unsigned int i,j;
  for(i=0;i<a;i++)
	  for(j=0;j<5000;j++);

}
