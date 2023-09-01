/*Device Used-- ARM7TDMI-LPC2129*/
/*Program to beep the buzzer P0.11*/

#include<lpc21xx.h>
void delay(unsigned int a);

int main()
{
  IODIR0=(1<<11);             //Configure buzzer P0.11 as output port

  while(1)
  {
	IOSET0=(1<<11);           //Set P0.11
	delay(500);
	IOCLR0=(1<<11);           //clear P0.11
	delay(500);    
  }
}

void delay(unsigned int a)
{
  unsigned int i,j;
  for(i=0;i<a;i++)
  for(j=0;j<6000;j++);
}