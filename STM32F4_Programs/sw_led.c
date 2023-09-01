/*Device used--STM32F411RE*/
/*Program to toggle LED PA 5 when switch PC 13 is pressed*/

#include "stm32f4xx.h"
void delay(unsigned int a);

int main()
{
	RCC->AHB1ENR|=(1<<0);            //enable clock to port A
	RCC->AHB1ENR|=(1<<2);            //enable clock to port C

	/*Configure PA 5 as output port*/
	GPIOA->MODER|=(1<<10);               //10=1
	GPIOA->MODER&=~(1<<11);              //11=0

	/*Configure PC 13 as input port*/
	GPIOC->MODER&=~((1<<26)|(1<<27));     //27,26=0

	while(1)
	{
		if(!(GPIOC->IDR&(1<<13)))
				{
			       GPIOA->BSRR=(1<<5);        //5=1 set PA5 LED on
			       delay(100);
			       GPIOA->BSRR=(1<<21);       //21=1 clear PA5 or LED off
			       delay(100);
				}
	}
}

void delay(unsigned int a)
{
  unsigned int i,j;
  for(i=0;i<a;i++)
	  for(j=0;j<5000;j++);

}
