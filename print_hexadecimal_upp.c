#include "main.h"

int is_lowercase(char);
char *string_to_upper(char *);

/**
* print_hexadecimal_upp - Print a number in hexadecimal format
* @args: Number to print
*
* Return: Length of the number
**/

int print_hexadecimal_upp(va_list args)
{
	char *p_buff;

	int size;

	unsigned int num = va_arg(args, unsigned int);

	p_buff = malloc(33);
	if (p_buff != NULL)
		itoa(num, p_buff, 16);
	char buffer[20];

	sprintf(buffer, "%X", num);
	p_buff = buffer;
	p_buff = string_to_upper(p_buff);
}

/**
* print - Print a string
* @str: String to print
*
* Return: Length of the string
**/

int print(const char *str)
{
	int len = 0;

	while (*str)
	{
		_putchar(*str++);
		len++;
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
