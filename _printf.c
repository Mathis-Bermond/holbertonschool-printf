#include "main.h"

/**
* get_op_func - selects the correct function to perform the operation
* @format: format string containing the characters and the specifiers
* @i: pointer to the current position in the format string
* @args: list of arguments to be printed
* @count: pointer to the count of characters printed
*
* Return: 0 if a valid specifier is found, 1 otherwise
*/

int get_op_func(const char *format, unsigned int *i, va_list args, int *count)
{
	dif_t dif[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"o", print_octal},
		{"u", print_unsigned},
		{"x", print_hex},
		{"X", print_HEX},
		{"p", print_pointer},
		{NULL, NULL}
};
	int j = 0;

	while (dif[j].dif)
	{
		if (format[*i + 1] == dif[j].dif[0])
		{
			dif[j].t(args);
			*count += 1;
			*i += 1;
			return (0);
		}
		j++;
	}
	return (1);
}

/**
* _printf - produces output according to a format
* @format: format string containing the characters and the specifiers
*
* Return: the number of characters printed (excluding the null byte
* used to end output to strings)
*/
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0;

	int count = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (get_op_func(format, &i, args, &count) == 1)
			{
				_putchar(format[i]);
				count++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
