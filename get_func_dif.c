#include "main.h"

int _printf(const char *format, ...);

int main(void)
{
	_printf("Hello, %s!\n", "world");
	_printf("Number: %d\n", 42);
	return (0);
}

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	char *str;

	int num;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 's':
					str = va_arg(args, char *);
					while (*str)
					{
						write(1, str++, 1);
						count++;
					}
					break;
				case 'd':
					num = va_arg(args, int);
					char buffer[50];

					int len = snprintf(buffer, 50, "%d", num);

					write(1, buffer, len);
					count += len;
					break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
				default:
					write(1, &format[i], 1);
					count++;
					break;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}

	va_end(args);
	return (count);
}
