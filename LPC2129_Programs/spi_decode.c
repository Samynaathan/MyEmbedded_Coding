/*Device Used-- ARM7TDMI-LPC2129*/
/*SPI Decode*/

#include<lpc21xx.h>
void spi_data(unsigned int d);

int main()
{
 /*config P0.4, P0.5, P0.6,P0.7 as SCLK,MISO,MOSI, SS[GPIO] respectively*/
 PINSEL0|=(1<<8)|(1<<10)|(1<<12);
 PINSEL0&=~((1<<9)|(1<<11)|(1<<13));
 IODIR0=(1<<7);                   //config P0.7 as GPIO

 /*config SPI in 16 bit mode, CPOL=1,CPHASE=1,Master, from MSB,no interrupt*/
 S0SPCR=(1<<2)|(1<<3)|(1<<4)|(1<<5);
 S0SPCCR=8;						   //generate SCLK @1.875Mhz

 /*Slave configuration by sending commands*/
 spi_data(0x090F);                  //mode register in decode mode
 spi_data(0x0A0F);					//intensity register with max intensity
 spi_data(0x0B03);                  //scan limit reg 0 1 2 3
 spi_data(0x0C01);                  //shut down register in normal mode

 /*actual SPI data transmissionb 4 5 6 7*/
 spi_data(0x0104);					//1st digit 4
 spi_data(0x0205);					//2nd digit 5
 spi_data(0x0306);					//3rd digit 6
 spi_data(0x0407);					//4th digit 7

}

void spi_data(unsigned int d)
{
 S0SPDR=d;							//load the data on spi data register
 IOCLR0=(1<<7);                      //pull SS line to low
 while(!(S0SPSR&(1<<7)));            //check SPI data transfer flag using polling method
 IOSET0=(1<<7);                      //pull SS line to high  

}