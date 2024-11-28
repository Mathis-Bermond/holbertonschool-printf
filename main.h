#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct print_struct
{
	char *dif;
	int (*f)(va_list);

} dif_t;

int _printf(const char *format, ...);
int print_octal(va_list args);
int print_string(va_list args);
int print_integer(va_list args);
int print_binary(va_list args);
int print_percent(va_list args);
int print_char(va_list args);
int _putchar(char c);
int print_pointer(va_list args);
int print_unsigned(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);
int print_hexadecimal_upp(va_list args);
int print_rev(va_list args);
int print_rot13(va_list args);

#endif
