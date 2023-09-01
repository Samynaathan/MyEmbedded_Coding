/*Free RTOS
Device used-LPC2129*/

#ifndef UART_H

#define UART_H

void uart_config(void);
void uart_data( char c);
void uart_str(char *ptr);
void delay(unsigned int ms);

#endif
