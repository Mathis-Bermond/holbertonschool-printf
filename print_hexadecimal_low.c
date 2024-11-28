#include "main.h"

/**
* print_hexadecimal_low - Print a number in hexadecimal format
* @args: Number to print
*
* Return: Length of the number
**/
int print_hexadecimal_low(va_list args)
{
	char *p_buff;

	int size;

	unsigned int num = va_arg(args, unsigned int);

	char buffer[20];

	sprintf(buffer, "%x", num);
	p_buff = buffer;

	size = printf((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
