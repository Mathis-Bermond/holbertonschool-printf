#include "main.h"
#include <unistd.h>

int print(const char *str);

/**
* print_integer - Print a number in base 10
* @args: Number to print in base 10
*
* Return: Length of th numbers in decimal
**/

int print_integer(va_list args)
{
	char *p_i;

	int size;

	int num = va_arg(args, int);
	char buffer[12];

	sprintf(buffer, "%d", num);
	p_i = buffer;

	size = strlen(p_i);
	write(1, p_i, size);

	return (size);
}

/**
* print_string - Print string
* @args: list of arguments.
*
* Return: String length.
*/

int print_string(va_list args)
{
	char *p;
	int p_len;

	p = va_arg(args, char*);
	if (p == NULL)
		p = "(null)";
	p_len = strlen(p);
	write(1, p, p_len);

	return (p_len);
}

/**
* print_percent - Print a percent sign
* @args: list.
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
 * print_char - print char.
 * @args: va_list.
 *
 * Return: 1
 */

int print_char(va_list args)
{
	int aux;

	aux = va_arg(args, int);
	_putchar(aux);

	return (1);
}
