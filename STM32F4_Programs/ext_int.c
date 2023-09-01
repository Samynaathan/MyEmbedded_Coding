/*Device used--STM32F411RE*/
/*Program to generate an external interrupt when PC13 switch is pressed,
  Pass a string "EXTERNAL INTERRUPT OCCURED" in the ISR part,
  toggle LED PA5 in the main program*/

#include "stm32f4xx.h"
#include "usart.h"
void delay(unsigned int a);

int main()
{

    uart_config();

    NVIC_EnableIRQ(EXTI15_10_IRQn);

   RCC->AHB1ENR|=(1<<0);             //enable clock to portA LED PA5
   RCC->AHB1ENR|=(1<<2);             //configure clock to portC switch PC13

   /*Configure PA5 as output port*/
   GPIOA->MODER|=(1<<10);
   GPIOA->MODER&=~(1<<11);

   /*Configure PC13 as input port*/
   GPIOC->MODER&=~((1<<26)|(1<<27));

   /*External interrupt configuration*/
   RCC->APB2ENR|=(1<<14);                //enable clock to system configuration for EXT.INTR
   SYSCFG->EXTICR[3]=(1<<5);             //Configure PC13 as ext.interrupt switch
   EXTI->IMR=(1<<13);                    //enable PC13 as non maskable
   EXTI->FTSR=(1<<13);                  //edge triggered falling edge signal to PC13

	while(1)
	{
       GPIOA->BSRR=(1<<5);           //set PA5
       delay(100);
       GPIOA->BSRR=(1<<21);          //reset PA5
       delay(100);
	}
}

void EXTI15_10_IRQHandler(void)
{
	EXTI->PR=(1<<13);
	uart_str("EXTERNAL INTERRUPT OCCURED...\r\n");

}
void delay(unsigned int a)
{
  unsigned int i,j;
  for(i=0;i<a;i++)
	  for(j=0;j<5000;j++);

}
