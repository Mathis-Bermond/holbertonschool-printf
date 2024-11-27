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
		{NULL, NULL}
};
	while (dif[j].dif)
	{
		if (format[*i + 1] == dif[j].dif[0])
		{
			dif[j].f(args);
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

}
