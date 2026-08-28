#include "main.h"

/**
 * _printf - Custom recreation of the standard printf function
 * @format: Format string containing characters and conversion specifiers
 *
 * Return: Number of characters printed (excluding the null byte),
 *         or -1 if format is NULL or an invalid trailing '%' is encountered.
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int count = 0;
	va_list args;
	int (*func)(va_list );

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);
			}
			if (format[i + 1] == '%')
			{
				count += _putchar('%');
			}
			else
			{
				func = parser(format[i + 1]);
				if (func == NULL)
				{
					_putchar('%');
					_putchar(format[i + 1]);
					count += 2;
				}
				else
				{
					count += func(args);
				}
			}
				i += 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
