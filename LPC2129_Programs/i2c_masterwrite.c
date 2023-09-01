/*Device Used-- ARM7TDMI-LPC2129*/
/*I2C master write program*/

#include<lpc21xx.h>
void i2c_config(void);
void i2c_start(void);
void i2c_data(unsigned char d);
void i2c_stop(void);

int main()
{
  i2c_config();

  /*start|SLA|RW|DATA|ACK|DATA....stop*/
  i2c_start();
  i2c_data(0xA0);                      //SLa-0xA0--1010 000 0,RW=0 for write operation
  i2c_data(0x00);                      //send the memory location of EEPROM	--0x00

  /*I2C data transmission*/
  i2c_data('A');

  i2c_stop();

}

void i2c_config(void)
{
 /*configure P0.2,P0.3 as SCL and SDA*/
 PINSEL0|=(1<<4)|(1<<6);
 PINSEL0&=~((1<<5)|(1<<7));

 /*configure i2c @100khz*/
 I2SCLL=75;
 I2SCLH=75;

 I2CONSET=(1<<6);                       //enable I2C peripheral
  
}

void i2c_start(void)
{
  /*clear i2c interrupt flag*/
  I2CONCLR=(1<<3);
  I2CONSET=(1<<5);                      //generate i2c start bit
  while(!(I2CONSET&(1<<3)));            //check i2c flag using polling statement
  I2CONCLR=(1<<3);                      //clear i2c interrupt flag
  I2CONCLR=(1<<5);                      //clear start bit
}

void i2c_data(unsigned char d)
{
 I2DAT=d;							   //load data on i2c data register
 while(!(I2CONSET&(1<<3)));            //check i2c flag using polling statement
 I2CONCLR=(1<<3);                      //clear the interrupt flag
}

void i2c_stop(void)
{
 I2CONSET=(1<<4);                      //stop bit generation
}