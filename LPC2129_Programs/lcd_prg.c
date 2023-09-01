/*Device Used-- ARM7TDMI-LPC2129*/
/*program to display a character or data on lcd*/

#include<lpc21xx.h>

/*MACROs Defn*/
#define RS (1<<10)
#define RW (1<<12)
#define EN (1<<13)
#define DATA (0xFF<<15)

void lcd_config(void);
void lcd_cmd(unsigned char c);
void lcd_data(unsigned char d);
void lcd_str(unsigned char *ptr);
void lcd_num(unsigned int num);
void delay(unsigned int a);

int main()
{
  lcd_config();
  lcd_data('A');
  delay(1000);
}

void lcd_config(void)
{
 IODIR0|= RS|RW|EN|DATA;	 //configure LCD pins as output pins
 lcd_cmd(0x38);              //function set,8 bit,2 line
 lcd_cmd(0x0E);				 //Display ON,cursor ON 
 lcd_cmd(0x01);				 //clear display
 lcd_cmd(0x80);				 //force the cursor from first row
}
void lcd_cmd(unsigned char c)
{
 IOCLR0=(0xFF<<15);			  //clear the data lines
 IOSET0=(c<<15);			 //load the cmd to data pins
 IOCLR0=RS;					 //RS=0 for cmd mode
 IOCLR0=RW;					 //RW=0 for write
 IOSET0=EN;					 //EN=1
 delay(10);
 IOCLR0=EN;					 //EN=0
}  
void lcd_data(unsigned char d)
{
 IOCLR0=(0xFF<<15);			   //clear the data lines
 IOSET0=(d<<15);			   //load the data to data pins
 IOSET0=RS;					   //RS=1 for data mode
 IOCLR0=RW;						//RW=0	  
 IOSET0=EN;						//EN=1
 delay(10);
 IOCLR0=EN;						//EN=0
}
void lcd_str(unsigned char *ptr)
{ 
  while(*ptr != '\0')
  {
    lcd_data(*ptr);
	ptr++;
  }
}

void lcd_num(unsigned int num)
{
  if(num)
  {
   lcd_num(num/10);
   lcd_data(num%10+0X30);
  }
}	
void delay(unsigned int a)
{
  unsigned int i,j;
  for(i=0;i<a;i++)
  for(j=0;j<6000;j++);
}