/*Device used--STM32F411RE*/
/*Program to generate interrupt for every 5sec using TIM2,
  Pass a string "Interrupt generated by TIM2 " in the ISR part,
  toggle LED PA5 in the main program*/

#include "stm32f4xx.h"
#include "usart.h"
void delay(unsigned int a);
void TIM2_config(void);
void TIM2_IRQHandler(void);


int main()
{
	TIM2_config();
    uart_config();

    NVIC_EnableIRQ(TIM2_IRQn);

   RCC->AHB1ENR|=(1<<0);             //enable clock to portA

   /*Configure PA5 as output port*/
   GPIOA->MODER|=(1<<10);
   GPIOA->MODER&=~(1<<11);

	while(1)
	{
       GPIOA->BSRR=(1<<5);           //set PA5
       delay(100);
       GPIOA->BSRR=(1<<21);          //reset PA5
       delay(100);
	}
}

void TIM2_config(void)
{
  RCC->APB1ENR|=(1<<0);             //enable clock to TIM2
  TIM2->PSC=(1600);
  	TIM2->ARR=(50000);
  	TIM2->CNT=(0);
  	TIM2->CR1=(1<<0);
  	TIM2->DIER=(1<<0);              //enable interrupt
}

void TIM2_IRQHandler(void)
{
	TIM2->SR&=~(1<<0);                                    //clear interrupt flag
	uart_str("Interrupt generated by TIM2...\r\n");
	delay(500);

}
void delay(unsigned int a)
{
  unsigned int i,j;
  for(i=0;i<a;i++)
	  for(j=0;j<5000;j++);

}
