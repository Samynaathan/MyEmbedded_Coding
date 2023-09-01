/*Device Used-- ARM7TDMI-LPC2129*/
/*Transmit and receive data through UART*/

#include<lpc21xx.h>
#include"lcd_fun.c"

int main()
{
 unsigned char val;
 PINSEL0|=(1<<0)|(1<<2);
 PINSEL0&=~((1<<1)|(1<<3));

 lcd_config();

 U0LCR=(1<<7);
 U0DLL=97;
 U0DLM=0;
 U0LCR=~(1<<7);

 U0LCR=(1<<0)|(1<<1);

 while(1)
 {
  while(!(U0LSR&(1<<0)));
  val=U0RBR;
  lcd_data(val);
  while(!(U0LSR&(1<<5)));
  U0THR=val;
 }
}