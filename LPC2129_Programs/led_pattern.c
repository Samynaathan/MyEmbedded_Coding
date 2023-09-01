/*Device Used-- ARM7TDMI-LPC2129*/
/*Program to toggle LEDs in the given pattern*/

#include<lpc21xx.h>
void delay(unsigned int a);

int main()
{
  unsigned int i,a[9]={0x81,0x42,0x24,0x18,0x24,0x42,0x81};
  IODIR1=(0xFF<<17);              //Configure LEDs as output port

  while(1)
  {
  	for(i=0;i<7;i++)
	{ 
	IOSET1=(a[i]<<17);			  //set LEDs
	delay(500);
	IOCLR1=(a[i]<<17);			  //clear LEDs
	delay(500);
	}
  }
}

void delay(unsigned int a)
{
  unsigned int i,j;
  for(i=0;i<a;i++)
  for(j=0;j<6000;j++);
}