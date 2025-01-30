#include "UART.h"

unsigned char string_buffer[100]="learn in depth: AHMED";

int main(void)
{
	Uart_Send_String(&string_buffer[0]);
}