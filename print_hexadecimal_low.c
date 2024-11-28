#include "main.h"

/**
* print_hex - Print a number in hexadecimal format
* @args: Number to print
*
* Return: Length of the number
**/
int print_hex(va_list args)
{
	char buffer[20];
	int i = 0;
	int j = 0;
	unsigned int num = va_arg(args, unsigned int);
	char hex_digits[] = "0123456789abcdef";

	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (num > 0)
		{
			buffer[i++] = hex_digits[num % 16];
			num /= 16;
		}
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(buffer[j]);

	return (i);
}
