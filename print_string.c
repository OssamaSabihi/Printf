#include "main.h"

/*
 * print_string - prints a string.
 * @args: arguments list.
 *
 * Returns: how many charachters it printed.
 */

int print_string(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);
	
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
