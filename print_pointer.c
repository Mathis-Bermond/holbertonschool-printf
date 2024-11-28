#include "main.h"

int _strcmp(char *, char *);

/**
 * print_pointer - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_pointer(va_list list)
{
	void *ptr;
	unsigned long int addr;
	int size = 0;
	char *hex = "0123456789abcdef";
	char buffer[20];
	int i = 0;

	ptr = va_arg(list, void *);
	if (ptr == NULL)
		return (_putchar('(') + _putchar('n') +
			_putchar('i') + _putchar('l') + _putchar(')'));

	addr = (unsigned long int)ptr;
	size = _putchar('0');
	size += _putchar('x');

	/* Convert address to hexadecimal */
	do {
		buffer[i++] = hex[addr % 16];
		addr /= 16;
	} while (addr > 0);

	/* Print in reverse order */
	while (--i >= 0)
		size += _putchar(buffer[i]);

	return (size);
}

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
