/*Free RTOS
Device used-LPC2129*/

#include <lpc21xx.h>
#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"

#include "uart.h"

void ptask(void *);
void ctask1(void *);
void ctask2(void *);

TaskHandle_t pt,ct1;
SemaphoreHandle_t sem;

int main()
{
uart_config();

sem=xSemaphoreCreateMutex();


xTaskCreate(ptask,"PT",100,NULL,1,&pt);
xTaskCreate(ctask1,"CT1",100,NULL,2,&ct1);
//xTaskCreate(ctask2,"CT2",100,NULL,3,&ct2);
vTaskStartScheduler();

}

void ptask(void *p)
{

while(1)
{
if(xSemaphoreTake(sem,10000))
{
uart_str("ptask ...");
xSemaphoreGive(sem);
vTaskDelay(400);
}
}
}

void ctask1(void *p)
{
while(1)
{
if(xSemaphoreTake(sem,10000))
{
uart_str("ctask1...");
xSemaphoreGive(sem);
vTaskDelay(400);
}
}
}


