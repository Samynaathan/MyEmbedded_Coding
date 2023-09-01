/*Device used--STM32F411RE*/
/*Program to transmit a character through USART*/

#include "stm32f4xx.h"
void delay(unsigned int a);
unsigned char read;

int main()
{
	RCC->AHB1ENR|=(1<<0);           //enable clock to port A
	RCC->APB1ENR|=(1<<17);          //enable clock to USART2

	/*PA2-->TX,  PA3-->RX*/
	/*Configure PA2 and PA3 as TX and RX respectively-->Configuring MODER in alternate function mode*/
	GPIOA->MODER|=(1<<5)|(1<<7);
	GPIOA->MODER&=~((1<<4)|(1<<6));

	GPIOA->AFR[0]=(7<<8)|(7<<12);         //Configure PA2 and PA3 as USART alternate function

	/*USART Configuration*/
	USART2->CR1|=(1<<13)|(1<<3)|(1<<2);   //enable USART--13, TX--3, RX--2
	USART2->BRR=139;

	while(1)
	{
	    /*while(!(USART2->SR&(1<<7)));      //monitor TX data reg empty or not using polling method
	    USART2->DR='A';                  //load data to DATA register
	    delay(100);*/

		while(!(USART2->SR&(1<<5)));       //monitor RX data reg empty or not using polling method
		read=USART2->DR;                 //data stored in DATA reg should be copied to variable read
	}
}

void delay(unsigned int a)
{
  unsigned int i,j;
  for(i=0;i<a;i++)
	  for(j=0;j<5000;j++);
}
