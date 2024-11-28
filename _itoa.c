#include "main.h"

/**
* itoa - Converts an integer to a string
* @num: Number to convert
* @str: Buffer to store the result
* @base: Base for conversion (2-36)
* Return: Pointer to the resulting string
*/

char *itoa(long int num, char *str, int base)
{
	int i = 0;

	int is_negative = 0;

	char *digit = "0123456789ABCDEF";

	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	if (num < 0 && base == 10)
	{
		is_negative = 1;
		num = -num;
	}
	while (num != 0)
	{
		str[i++] = digit[num % base];
		num /= base;
	}
	if (is_negative)
		str[i++] = '-';
	str[i] = '\0';
	return (str);
}
