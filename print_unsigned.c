#include "main.h"

/*
 * print_int - prints an integer 
 * @args: arguments list
 *
 * Returns: how many charachters it printed.
 */

int putnbru(unsigned long nb)
{
	if (nb > 9)
	{
		return(putnbru(nb / 10) + _putchar((nb % 10) + '0'));
	}
	_putchar((nb % 10) + '0');
	return (1);
}

int print_unsigned(va_list args)
{
	unsigned long n = (unsigned long)va_arg(args, unsigned int);
	return (putnbru(n));
}
