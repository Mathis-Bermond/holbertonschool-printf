#include "main.h"
#include <unistd.h>

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
#include "main.h"

/**
* print_integer - Print a number in base 10
* @list: Number to print in base 10
*
* Return: Length of th numbers in decimal
**/
int print_integer(va_list list)
{
	char *p_i;

	int size;

	p_i = itoa(va_arg(list, int), 10);

	size = print((p_i != NULL) ? p_i : "NULL");

	return (size);
}
#include "main.h"

/**
* print_string - Print string
* @list: list.
*
* Return: String length.
*/

int print_string(va_list list)
{
	char *p;

	int p_len;

	p = va_arg(list, char*);
	p_len = print((p != NULL) ? p : "(null)");

	return (p_len);
}

/**
* print_percent - Print a percent sign
* @list: list.
*
* Return: Always 1.
*/

int print_percent(va_list list)
{
		(void)list;
		_putchar('%');
		return (1);
}
