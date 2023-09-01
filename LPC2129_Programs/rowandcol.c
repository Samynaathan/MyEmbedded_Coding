/*Device Used-- ARM7TDMI-LPC2129*/

#include<lpc21xx.h>
 #include "lcd_fun.c"

 /*Macros Defn*/	   
 #define ROWS (0x0F<<21)
 #define COLS (0x0F<<17)

  void row_scan(void);
  void col_scan(void);

 int main()
 {
   lcd_config();
   
   while(1)
   {
	row_scan();
   }
 }

 void row_scan(void)
 {
   unsigned int val;

   IODIR1|= COLS;	      //COLS is set as output port
   IODIR1 &=~ROWS;		  //ROWS is set as input port

   val=IOPIN1&ROWS;		  //check the status of	SW and store it in val
   val=val>>21;			  //right shift to get as LSB

   switch(val)
   {
	case 0x0E: lcd_str("ROW1");
	            col_scan();
	           delay(1000);
			   break;
    
	case 0x0D: lcd_str("ROW2");
	           col_scan();
	           delay(1000);
			   break;
			   
	case 0x0B: lcd_str("ROW3");
	           col_scan();
	           delay(1000);
			   break;
			   
	case 0x07: lcd_str("ROW4");
	           col_scan();
	           delay(1000);
			   break;
			   
   default:lcd_cmd(0x01);	      //clear the display of LCD
            delay(1000);		   		    
   }
 }

void col_scan(void)
{
 unsigned int val;

 IODIR1|=ROWS;
 IODIR1&=~COLS;

 val=IOPIN1&COLS;
 val=val>>17;

 switch(val)
 {
  case 0x0E:lcd_str("COL1");
            delay(1000);
			break;

  case 0x0D:lcd_str("COL2");
            delay(1000);
			break;

  case 0x0B:lcd_str("COL3");
            delay(1000);
			break;
			
  case 0x07:lcd_str("COL4");
            delay(1000);
			break;
			
   default:lcd_cmd(0x01);
           delay(1000);						
 }
}