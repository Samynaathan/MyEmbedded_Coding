/*Device Used-- ARM7TDMI-LPC2129*/
/*PROGRAM to read temperature for every 10 sec using timer*/

  #include<lpc21xx.h>
  #include"lcd_fun.c"

  

   int main()
   {
   unsigned int val;

	IODIR1=(0xFF<<17);	   //configure led as output port
	IODIR0=(1<<11);		   //configure buzzer as output port

	lcd_config();

	/*TIMER Configuration*/
	T0PR=14;
	T0MR0=10000000;

	T0MCR=(1<<1)|(1<<0);  //MR0 in INT mode,and repeat mode

	T0TCR=(1<<1);         //clear counters
	T0TCR=(1<<0);          //enable timer

	 /*configure P0.28 as analog input channel 1*/
  PINSEL1|=(1<<24);      //24=1
  PINSEL1&=~(1<<25);		//25=0

   /*configure ADC, SEL CH1, CLKDIV-4, burst mode, PDN mode*/
  ADCR=(1<<1)|(4<<8)|(1<<16)|(1<<21);

    while(1)
	{
	  if(T0IR&(1<<0))				 //check match occured or not wrt MR0
	  {
	    while(!(ADDR&(1<<31)));        //check for EoC or DONE bit using polling method
   val=(ADDR&(0x3FF<<6)); 		  //extract 10 bit digital data
   val=val>>6;                    //to get as LSB
   val=val/3.3;                   //convert data into degree celsius 
   lcd_num(val);
   delay(1000);
   lcd_cmd(0x01);
   delay(1000);

   T0IR=(1<<0);	               //clear the INT flag
   }
 }
}