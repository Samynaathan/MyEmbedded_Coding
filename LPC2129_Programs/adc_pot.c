 /*Device Used-- ARM7TDMI-LPC2129*/
/*toggle P1.17 pin*/
 /*ADC Program using pot connected at P0.27*/
 #include<lpc21xx.h>
 #include"lcd_fun.c"

 int main()
 {
  unsigned int val;

  /*configure P0.27 as analog input channel 0*/
  PINSEL1|=(1<<22);      //22=1
  PINSEL1&=~(1<<23);		//23=0

  /*configure ADC, SEL CH0, CLKDIV-4, burst mode, PDN mode*/
  ADCR=(1<<0)|(4<<8)|(1<<16)|(1<<21);

  lcd_config();

  while(1)
  {
   while(!(ADDR&(1<<31)));        //check for EoC or DONE bit using polling method
   val=(ADDR&(0x3FF<<6)); 		  //extract 10 bit digital data
   val=val>>6;                    //to get as LSB
   //val=val/3.3;                   //convert data into degree celsius 
   lcd_num(val);
   delay(1000);
   lcd_cmd(0x01);
   delay(1000);
  }
  }		