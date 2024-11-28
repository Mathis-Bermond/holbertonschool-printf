#include "main.h"

int is_lowercase(char);
char *string_to_upper(char *);

/**
* print_HEX - Print a number in hexadecimal format
* @args: Number to print
*
* Return: Length of the number
**/

int print_HEX(va_list args)
{
	char buffer[20];

	int i = 0;

	int len = i;

	unsigned int num = va_arg(args, unsigned int);

	unsigned int temp = num;

	const char hex_digits[] = "0123456789ABCDEF";

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (temp > 0)
	{
		buffer[i] = hex_digits[temp % 16];
		temp = temp / 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(buffer[i]);
	}
	return (len);
}

/**
* is_lowercase - Check if the character are in lowercase
* @c: Character
* Return: 1 or 0
**/

int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
* string_to_upper - Change the string to uppercase
* @s: String
* Return: String uppercase
**/

char *string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
