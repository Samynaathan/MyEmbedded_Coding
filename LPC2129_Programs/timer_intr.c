/*Device Used-- ARM7TDMI-LPC2129*/
/*To generate an interrupt from Timer0 for 10 sec
toggle led P1.24 in the ISR part
toggle led P1.17 in the main program*/

#include<lpc21xx.h>

void timer_config(void);
void int_config(void);
void timer_isr(void)__irq;
void delay(unsigned int a);


int main()
{
 timer_config();
 int_config();

 IODIR1=(0xFF<<17);

 while(1)
 {
  IOSET1=(1<<17);
  delay(500);
  IOCLR1=(1<<17);
  delay(500);
 }
}

void timer_config(void)
{
 T0PR=14;					//PR=14
 T0MR0=10000000;			//10 sec
 T0MCR=(1<<1)|(1<<0);		//MR0 in interrupt and repeat mode
 T0TCR=(1<<1);				//clear the counters
 T0TCR=(1<<0);				//enable the timers
}
void int_config(void)
{
 VICIntSelect=~(1<<4);        //configure Timer0 as IRQ

 VICIntEnable=(1<<4);          //enable the interrupt

 VICVectCntl0=(1<<5)|(4<<0);    //GIE=1, Int source no=4  (TIMER0)
 VICVectAddr0=(long)timer_isr;   //load the ISR address
}

void timer_isr(void)__irq
{
  IOSET1=(1<<24);
  delay(500);
  IOCLR1=(1<<24);
  delay(500);

  T0IR=(1<<0);                  //clear the interuppt flag
  VICVectAddr=0;                //default return address
}

void delay(unsigned int a)
{
 unsigned int i,j;
 for(i=0;i<a;i++)
 for(j=0;j<6000;j++);
}
