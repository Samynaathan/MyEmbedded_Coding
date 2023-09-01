/*Free RTOS
Device used-LPC2129*/

#include <lpc21xx.h>
#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"

#include "uart.h"

void task1(void *);
void task2(void *);
void task3(void *);


TaskHandle_t t1,t2,t3;


int main()
{

IODIR1 |= (1<<17)|(1<<20)|(1<<24);

uart_config();

xTaskCreate(task1,"T1",100,NULL,3,&t1);
xTaskCreate(task2,"T2",100,NULL,2,&t2);
xTaskCreate(task3,"T3",100,NULL,1,&t3);
vTaskStartScheduler();

}

void task1(void *p)
{
int i;
while(1)
{
for(i=0;i<10;i++)
{
uart_str("	task1....");

}

//vTaskDelay(3000);
//vTaskDelete(NULL);
vTaskSuspend(t1);

}
}


void task2(void *p)
{
int i;
while(1)
{
for(i=0;i<10;i++)
{
uart_str("	task2....");

}
//vTaskDelay(3000);
//vTaskDelete(t1);
vTaskSuspend(t2);

}
}

void task3(void *p)
{
int i;
while(1)
{
for(i=0;i<10;i++)
{
uart_str("	task3....");

}
//vTaskDelay(3000);
//vTaskDelete(t2);
vTaskResume(t1);
vTaskResume(t2);
}
}
