#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/
int print_binary(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int size = 0;
	char digit;
	char buffer[32];
	int i = 0;
	(num == 0) && (write(1, "0", 1), size++);
	while (num > 0)
	{
	buffer[i++] = (num % 2) + '0';
	num /= 2;
	}
	while (i--)
	{
	digit = buffer[i];
	write(1, &digit, 1);
	size++;
	}
	return (size);
}
