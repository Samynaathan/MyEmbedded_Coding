/*Device Used-- ARM7TDMI-LPC2129*/

#include<lpc21xx.h>
#include "can_project1_fun.c"

void can_config(void);
void can_tx(unsigned int d1);
unsigned int can_rx(void);
void GPIO_config(void);
void data_config(void);
void test_fun(void);


int main()

{
   lcd_config();
  can_config();
  data_config();
  test_fun();
 }
