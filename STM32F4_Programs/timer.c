/*Device used--STM32F411RE*/
/*Program to toggle LED PA 5 for every 5secs using TIM2*/

#include "stm32f4xx.h"
void delay(unsigned int a);

int main()
{
	RCC->AHB1ENR|=(1<<0);            //enable clock to port A
	RCC->APB1ENR|=(1<<0);            //enable clock to TIM2

	/*Configure PA 5 as output port*/
	GPIOA->MODER|=(1<<10);               //10=1
	GPIOA->MODER&=~(1<<11);              //11=0

	/*TIM2 Configuration for 5secs*/
	TIM2->PSC=(1600);
	TIM2->ARR=(50000);
	TIM2->CNT=(0);
	TIM2->CR1=(1<<0);

	while(1)
	{
	    while(!(TIM2->SR&(1<<0)));          //check TIM flag bit
		 TIM2->SR=~(1<<0);                  //clear interrupt flag
			       GPIOA->BSRR=(1<<5);        //5=1 set PA5 LED on
			       delay(100);
			       GPIOA->BSRR=(1<<21);       //21=1 clear PA5 or LED off
			       delay(100);

	}
}

void delay(unsigned int a)
{
  unsigned int i,j;
  for(i=0;i<a;i++)
	  for(j=0;j<5000;j++);

}
