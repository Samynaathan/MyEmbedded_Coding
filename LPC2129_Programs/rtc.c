/*Device Used-- ARM7TDMI-LPC2129*/
/*Program to generate current time using RTC*/

#include<lpc21xx.h>
#include"lcd_fun.c"

int main()
{ 
   lcd_config();

 /*configuration of RTC*/
 CCR=(1<<0);         //clock counter register used to enable RTC
 PREINT=456;			
 PREFRAC=25024;

 SEC=1;
 MIN=30;
 HOUR=10;

 DOM=22;
 MONTH=11;
 YEAR=2021;

 while(1)
 {
  lcd_cmd(0x80);
  lcd_num(DOM);
  lcd_data('-');
  lcd_num(MONTH);
  lcd_data('-');
  lcd_num(YEAR);

  lcd_cmd(0xC0);
  lcd_num(HOUR);
  lcd_data(':');
  lcd_num(MIN);
  lcd_data(':');
  lcd_num(SEC);
 }

}