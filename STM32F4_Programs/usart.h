/*Device used--STM32F411RE*/

void uart_config(void);
void uart_data(unsigned char b);
void uart_str(unsigned char *ptr);
void uart_num(unsigned int num);

void uart_config(void)
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

}


void uart_data(unsigned char b)
{
   while(!(USART2->SR&(1<<7)));
   USART2->DR=b;
}


void uart_str(unsigned char *ptr)
{
    while(*ptr!='\0')""
{
  uart_data(*ptr);
  ptr++;
}
}

void uart_num(unsigned int num)
{
   if(num)
{
  uart_num(num/10);
uart_data(num%10+0x30);
}
}
