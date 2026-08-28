#include "main.h"

/**
 * print_octal - converts an unsigned int to octal and prints it
 * @args: the value to convert.
 *
 * Return: the number of charachters printed.
 */

int print_octal(va_list args)
{
	return (putnbr_base(va_arg(args, unsigned int), "01234567"));
}
