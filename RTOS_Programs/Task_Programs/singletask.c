/*Free RTOS
Device used-LPC2129*/

//#include <lpc21xx.h>
#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"

#include "uart.h"

void task1(void *);

TaskHandle_t t1;


int main()
{
int count = 10;
IODIR1 |= (1<<17);

uart_config();

xTaskCreate(task1,"T1",100,&count,1,&t1);
vTaskStartScheduler();

}

void task1(void *p)
{
char scnt[20];

IOCLR1 = 0xFF<<17;
while(1)
{
IOSET1 = (1<<17);
delay(1000);
IOCLR1 = (1<<17);
delay(1000);
sprintf(scnt , "%d" ,(*(int *)p)++);
uart_str(scnt);
}
}

