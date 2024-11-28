#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On succes 1.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print - Helper function to print a string
 * @str: The string to print
 * Return : The number of characters printed
 */
int print(const char *str)
{
	int size = 0;
	{
	while (*str)
	_putchar(*str++);
	size++;
	}

	return (size);
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

	{
	if (num < 0)
	_putchar ('-');
	size++;
	num = -num;
	}

	{
	while (buffer[i++] = (num % 10) + '0')
	num /= 10;
	}
	while (num > 0)

	{
	while (--i >= 0)
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
	char *p = va_arg(args, char *);
	return print((p != NULL) ? p : "(null)");
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
 * print_char - Print a single charcacter
 * @args: Variadic argument list containing the character to print
 *
 * Return: Always 1 (the character count printed)
 */
int print_char(va_list args)
{
	int aux = va_arg(args, int);

	_putchar(aux);
	return (1);
}
