#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * print_octal - Print an unsigned integer in octal base
 * @args: List containing the number to print
 *
 * Return: Length of the printed number
 **/
int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[12]; /* Buffer large enough to hold octal representation */
	int i = 0, size = 0;

	if (num == 0)
	{
	write(1, "0", 1);
	return (1);
	}
	while (num > 0)
	{
	buffer[i++] = (num % 8) + '0'; /* Get the last octal digit */
	num /= 8; /* Remove the last octal digit */
	}
	while (i--)
	{
	write(1, &buffer[i], 1);
	size++;
	}

	return (size);
}
