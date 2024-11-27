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

	p_buff = itoa(va_arg(list, unsigned int), 16);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
