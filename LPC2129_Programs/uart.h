/*Device Used-- ARM7TDMI-LPC2129*/

void uart_config(void);
void uart_str(unsigned char *ptr);
void uart_data(unsigned char d);
void uart_num(unsigned int num);
//void delay(unsigned int a);

 void uart_config(void)	
 {
 /*Config P0.0, P0.1 as Tx & Rx*/
 PINSEL0|=(1<<0)|(1<<2);
 PINSEL0&=~((1<<1)|(1<<3));

 /*Set the Baudrate @ 9600 bps*/
 U0LCR=(1<<7);		//Enable Baudrate Regs
 U0DLL=97;
 U0DLM=0;
 U0LCR=~(1<<7);		//Lock Baudrate Regs

 /*8bit mode[1 0], 1 stop bit [2], no parity[3], no Break Control[6]*/
 U0LCR=(1<<0)|(1<<1);
 }

 void uart_str(unsigned char *ptr)
 {
 while(*ptr != '\0')
 {
		while(!(U0LSR&(1<<5)));		// Check THR empty or not (Bit 5)
		U0THR=*ptr;					//Load the data on THR
		ptr++;
	
	}


  }
  
void uart_data(unsigned char d)
{
while(!(U0LSR&(1<<5)));		// Check THR empty or not (Bit 5)
		U0THR=d;
}

//void delay(unsigned int a)
//{
//unsigned int i,j;
//for(i=0;i<a;i++)
//for(j=0;j<6000;j++);
//}

void uart_num(unsigned int num)
{
	if(num)				// Check num is non zero
	{
	uart_num(num/10);
	uart_data(num%10+0x30);
	}
}
