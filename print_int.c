#include "main.h"

/*
 * print_int - prints an integer 
 * @args: arguments list
 *
 * Returns: how many charachters it printed.
 */

int putnbr(long nb)
{
	if (nb < 0)
	{
		_putchar('-');
		nb = -nb;
		return (1 + putnbr(nb));
	}
	if (nb > 9)
	{
		return(putnbr(nb / 10) + _putchar((nb % 10) + '0'));
	}
	_putchar((nb % 10) + '0');
	return (1);
}

int print_int(va_list args)
{
	long n = (long)va_arg(args, int);
	return (putnbr(n));
}
