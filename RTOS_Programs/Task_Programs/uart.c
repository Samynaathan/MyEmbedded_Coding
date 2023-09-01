/*Free RTOS
Device used-LPC2129*/

#include <lpc21xx.h>
#include "uart.h"

void uart_config(void)
{
PINSEL0 |= (1<<0)|(1<<2);
PINSEL0 &= ~((1<<1)|(1<<3));

U0LCR |= (1<<7);
U0DLL = 97;
U0DLM = 0;
U0LCR &= ~(1<<7);
U0LCR |= (1<<1)|(1<<0);
U0LCR &= ~((1<<2)|(1<<3));
}

void uart_data( char c)
{
while(!(U0LSR & (1<<5))){}
U0THR = c ;
delay(50);
}

void uart_str(char *ptr)
{
while(*ptr !='\0')
{
 uart_data(*ptr);
 ptr++;
}
uart_data(0x0D);
uart_data(0x0A);
delay(50);
}


void delay(unsigned int ms)
{
unsigned int i,j;
for(i=0;i<ms;i++)
{
for(j=0;j<6000;j++){}
}

}
