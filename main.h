#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct dif
{
	char *dif;
	void (*f)(va_list);

} dif_t;

int _printf(const char *format, ...);
int print_octal(va_list list);
int print_string(va_list list);
int print_integer(va_list list);
int print_binary(va_list list);
int _putchar(char c);

#endif
