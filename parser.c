#include "main.h"

/*
 * parser - matches the specifier char to the required
 * printing function.
 * @c: specifier char.
 *
 * Return: a pointer to the required function, NULL on failure.
 */

int (*parser(char c))(va_list)
{
	int i = 0;
	static const print_t p[] =
       	{
		{'c', print_char},
		{'i', print_int},
		{'d', print_int},
		{'s', print_string},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_HEX},
		{'p', print_p},
		{'b', print_binary},
		{'f', print_float},
		{'o', print_octal},
		{'\0', NULL},
	};
	while (p[i].sp)
	{
		if (p[i].sp == c)
			return (p[i].f);
		i++;
	}
	return (NULL);
}
