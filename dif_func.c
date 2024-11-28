#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
* print - Helper function to print a string
* @str: The string to print
* Return: The number of characters printed
*/

int print(const char *str)
{
	int size = 0;

	{
		while (*str)
		{
			_putchar(*str++);
			size++;
		}
	}
	return (size + 1);
}

/**
* print_integer - Print a number in base 10
*@args: Variadic argument list containing the number to print
*
*Return: Length of the number in decimal
*/

int print_integer(va_list args)
{
	int num = va_arg(args, int);

	int size = 0;

	char buffer[10];

	int i = 0;

	if (num < 0)
	{
		_putchar ('-');
		size++;
		num = (unsigned int)(-(unsigned int)num);
	}
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (i-- > 0)
	{
		_putchar(buffer[i]);
		size++;
	}
	return (size);
}

/**
* print_string - Print a string
* @args: Variadic argument list containing the string to print
*
* Return: Length of the string printed
*/

int print_string(va_list args)
{
	int count = 0;
	char *p = va_arg(args, char *);
	int i = 0;

	if (p == NULL)
	{
		p = "(null)";
	}
	while (p[i])
	{
		_putchar(p[i]);
		i++;
		count++;
	}
	return (count);
}

/**
* print_percent - Print a percent sign
* @args: Variadic argument list (unused)
*
* Return: Always 1.
*/

int print_percent(va_list args)
{
		(void)args;
		_putchar('%');
	return (1);
}

/**
 * print_unsigned - Print a unsigned int
 * @args: Number to print
 *
 * Return: Length of the number
 **/

int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int size = 0;
	char buffer[12];
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	while (i-- > 0)
	{
		_putchar(buffer[i]);
		size++;
	}

	return (size);
}
