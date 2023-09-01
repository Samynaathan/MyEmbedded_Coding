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
void ctask3(void *);
TaskHandle_t pt,ct1,ct2,ct3;
SemaphoreHandle_t sem;

int main()
{
IODIR1 &= ~(1<<25);
uart_config();

sem=xSemaphoreCreateCounting(3,0);

xTaskCreate(ptask,"PT",100,NULL,1,&pt);
xTaskCreate(ctask1,"CT1",100,NULL,2,&ct1);
xTaskCreate(ctask2,"CT2",100,NULL,3,&ct2);
xTaskCreate(ctask3,"CT3",100,NULL,4,&ct3);

vTaskStartScheduler();

}

void ptask(void *p)
{
while(1)
{
uart_str("	ptask....");
if(IOPIN1 & (1<<25))
{
uart_str("ptask giving a semaphore....");
xSemaphoreGive(sem);
xSemaphoreGive(sem);
xSemaphoreGive(sem);
}
}
}

void ctask1(void *p)
{
while(1)
{
if(xSemaphoreTake(sem,100000))
{
uart_str("	ctask1 got semaphore....");
vTaskDelay(500);
}

}
}

void ctask2(void *p)
{

while(1)
{
if(xSemaphoreTake(sem,100000))
{
uart_str("	ctask2 got semaphore");
vTaskDelay(500);
}

}
}

void ctask3(void *p)
{

while(1)
{
if(xSemaphoreTake(sem,100000))
{
uart_str("	ctask3 got semaphore....");
vTaskDelay(500);
}

}
}

