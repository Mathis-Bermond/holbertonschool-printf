#include "main.h"
#include <unistd.h>

int print(const char *str);

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
		return (write(1, &c, 1));
}

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
	write(buffer, "%d", num);
	p_i = buffer;

	size = print((p_i != NULL) ? p_i : "NULL");

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
	p_len = print((p != NULL) ? p : "(null)");

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
