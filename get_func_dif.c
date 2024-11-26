#include "main.h"

int (*get_func_dif(va_list list))
{
	dif op[] = {
		{"%c", p_char},
		{"%s", p_string},
		{"%%", p_%},
		{"%d", p_d},
		{"%i", p_i},
		{NULL, NULL}
	};
	int i = 0;

	while (op[i].op != NULL)
	{
		if (*(op[i].op) == *list)
		{
			return (op[i].a);
		}
		i++;
	}
	return (NULL);
}
