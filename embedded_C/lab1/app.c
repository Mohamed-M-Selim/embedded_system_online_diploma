#include "uart.h"
unsigned char string_buffer[100] = "learn-in-depth: Selim";
unsigned char const string_buffer2[100] = ".rodata";


void main(void)
{
	Uart_send_string(string_buffer);
}