/*Free RTOS
Device used-LPC2129*/

#include <lpc21xx.h>

#include "FreeRTOS.h"
#include "task.h"

#include "uart.h"

void task1(void *p);
void task2(void *p);

void Timer0_Config(void);
void VIC_Config(void);
void timer0_isr(void);

TaskHandle_t t1,t2;

int main()
{
uart_config();
Timer0_Config();
VIC_Config();

xTaskCreate(task1,"T1",100,NULL,tskIDLE_PRIORITY,&t1);
xTaskCreate(task2,"T2",100,NULL,tskIDLE_PRIORITY,&t2);

vTaskStartScheduler();

}

void Timer0_Config(void )
{
T0PR = 14;
T0MR0 = 5000000;
T0MCR = (1<<1)|(1<<0);
T0TCR = (1<<1);
T0TCR = (1<<0);
}

void VIC_Config(void)
{
VICIntSelect &= ~(1<<4);
VICVectCntl2 =  (1<<5)|(4<<0);
VICVectAddr2 = (long) timer0_isr;
VICIntEnable = (1<<4);
}


void task1(void *p)
{
while(1)
{
uart_str("In task1 ....");
}
}


void task2(void *p)
{
while(1)
{
vTaskSuspend(t2);
uart_str("timer interrupt occured....");
T0IR = (1<<0);
VICVectAddr = 0;
}
}

void timer0_isr(void)
{
 BaseType_t checkIfYieldRequired;
 checkIfYieldRequired = xTaskResumeFromISR(t2);
 if(checkIfYieldRequired == 1)
 taskYIELD();
}
