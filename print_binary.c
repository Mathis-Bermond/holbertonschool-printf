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

	char *buffer;

	int i;

	int buffer_size = sizeof(unsigned int) * 8;

	buffer = malloc(buffer_size);
	if (!buffer)
		return (-1);
	if (num == 0)
	while (num > 0)
	{
		buffer[size++] = (num % 2) + '0';
		num /= 2;
	}
	for (i = size - 1; i >= 0; i--)
	{
		digit = buffer[i];
		write(1, &digit, 1);
	}
	free(buffer);
	return (size);
		write(1, &digit, 1);
		size++;
	return (size);
}
