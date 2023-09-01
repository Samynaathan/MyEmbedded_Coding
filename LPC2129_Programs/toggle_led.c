/*Device Used-- ARM7TDMI-LPC2129*/
/*toggle P1.17 pin*/

#include<lpc21xx.h>
void delay (unsigned int a);

int main()
{
 IODIR1=(1<<17);    //configure P1.17 pin as output port
 while(1)           //continuous or infinite loop
 {		
  IOSET1=(1<<17);  //set P1.17 to high
  delay(500);
  IOCLR1=(1<<17);  //set P1.17 to low
  delay(500);
 }
}
void delay (unsigned int a)
{
 unsigned int i,j;
 for(i=0;i<a;i++)
 for(j=0;j<6000;j++);
}