/*Device Used-- ARM7TDMI-LPC2129*/

#include<lpc21xx.h>
#include"lcd_fun.c"
void i2c_config(void);
void i2c_start(void);
void i2c_data(unsigned char d);
unsigned char i2c_read(void);
void i2c_stop(void);

int main()
{
  unsigned char b;
  lcd_config();
  i2c_config();
  
  /*DUMMY WRITE cycle*/
  /*start|SLA|RW|DATA|ACK|.....stop*/
  i2c_start();
  i2c_data(0xA0);                 //SKA -0xA0-1010 0000 ,RW=0 for write operation
  i2c_data(0x00);                 //send the memory location of the EEPROM--0x00
  
  /*i2c read config*/
  i2c_start();                     //start bit
  i2c_data(0xA1);                      //send SLA+RW=1 --> 0xA1 --1010 0001
  
  /*i2c read operation*/
  b=i2c_read();
  lcd_data(b);
  
  i2c_stop();  
}
void i2c_config(void)
{
 /*Config P0.2, P0.3 as SCL and SDA*/
 PINSEL0|=(1<<4)|(1<<6);
 PINSEL0&=~((1<<5)|(1<<7));

 /*Config I2C Clk @100khz*/
 I2SCLL=75;
 I2SCLH=75;
 I2CONSET=(1<<6)|(1<<2);           //enable I2C peripheral, assert ACK from MC
}
void i2c_start(void)
{
 /*Clear I2C interrupt flag*/
 I2CONCLR=(1<<3);				    
 I2CONSET=(1<<5);	               //generate I2C start bit
 while(!(I2CONSET&(1<<3)));        //check I2C interrupt flag using polling method
 I2CONCLR=(1<<3);                   //clear i2c interrupt flag
 I2CONCLR=(1<<5);                   //clear start bit
}

void i2c_data(unsigned char d)
{
  I2DAT=d;                          //load the data in i2c data register
  while(!(I2CONSET&(1<<3)));        //check i2c interrupt flag using polling method
  I2CONCLR=(1<<3);                  //clear the i2c interrupt flag
}

unsigned char i2c_read(void)
{
  unsigned char a;					
  while(!(I2CONSET&(1<<3)));		//check i2c interrupt flag using polling method
  I2CONCLR=(1<<3);                  //clear i2c interrupt flag
  a=I2DAT;							//load read data to a
  return a;
}

void i2c_stop(void)
{
  I2CONSET=(1<<4);                   //stop bit geneartion
}