/*Device used--STM32F411RE*/
/*Program to read temperature sensor value, PA1 as Analog input pin and display on USART terminal*/

#include "stm32f4xx.h"
#include "usart.h"
void delay(unsigned int a);
unsigned int read;

int main()
{
   uart_config();

   RCC->AHB1ENR|=(1U<<0);        //enable clock to portA
   RCC->APB2ENR|=(1U<<8);        //enable clock to ADC1

   /*Configure PA1 as analog mode*/
   GPIOA->MODER|=(1U<<2)|(1U<<3);

   /*ADC1 Configuration*/
   ADC1->SQR3=(1U<<0);                //channel 1 in regular sequence
   ADC1->SQR1=0x00;                   //one conversion
   ADC1->CR2|=(1U<<0);                 //enable ADC1
   ADC1->CR2|=(1U<<1);                 //enable continuous conversion mode
   ADC1->CR2|=(1U<<30);                //start of conversion

	while(1)
	{
	   while(!(ADC1->SR&(1U<<1)));        //check for EoC of signal using polling method
	   read=ADC1->DR;                     //read value from data register and load to a variable read

	   uart_num(read);                    //value stored in read will be displayed on UART terminal
	   delay(100);
	}
}


void delay(unsigned int a)
{
  unsigned int i,j;
  for(i=0;i<a;i++)
	  for(j=0;j<5000;j++);

}
