#include "main.h"

/*
 * print_char - prints a character.
 * @args: arguments list.
 *
 * Return: 1
 */

int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
