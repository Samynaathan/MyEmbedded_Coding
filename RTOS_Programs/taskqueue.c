/*Free RTOS
Device used-LPC2129*/

#include <lpc21xx.h>
#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"

#include "uart.h"

TaskHandle_t  st , rt;

QueueHandle_t  que;

void Sender(void *);
void Receiver(void *);

int main()
{

uart_config();

que=xQueueCreate(10,30);

xTaskCreate(Sender,"STASK",100,NULL,2,&st);
xTaskCreate(Receiver,"RTASK",100,NULL,1,&rt);

vTaskStartScheduler();

}

void Sender(void *p)
{
while(1)
{
 if(xQueueSendToBack(que,"Cranes Varsity",10000))
 {
  uart_str("Sender task sent new message to queue");
 }

 if(xQueueSendToBack(que,"Embedded and Automotive",10000))
 {
  uart_str("Sender task sent new message to queue");
 }

 if(xQueueSendToBack(que,"RTOS Programming",10000))
 {
  uart_str("Sender task sent new message to queue");
 }
 vTaskDelay(4000);
}

}

void Receiver(void *p)
{
char buff[30];
while(1)
{
if(xQueueReceive(que,buff,10000))
{
uart_str("Receiver task receiving new message...");
uart_str(buff);
}

}
}
