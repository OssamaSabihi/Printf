#include "main.h"
#include <stdio.h>

/**
 * f_len - calculate the lenght of intrger part of a float
 * @n: input number
 *
 * Return: the lenght.
 */

float f_len(float n)
{
        float i = 1;
        while(n >= 10)
        {
                n /= 10;
                i *= 10;
        }
        return (i);
}

/**
 * print_float - prints a float
 * @args: input
 *
 * Return: the number of characters printed
 */

int print_float(va_list args)
{
	float n = va_arg(args, double);
	int i = 0;
	if( n < 0)
	{
		_putchar('-');
		n = -n;
		i++;
	}
	long div = f_len(n);
	long j = n;
	n -= j;
	if ( j < 1)
	{
		_putchar('0');
		i++;
	}
	while(j >= 1)
	{
		_putchar("0123456789"[j / div]);
		j = j % div;
		div /= 10;
		i++;
	}
	_putchar('.');
	i++;
	n = (1000000 * n) + 0.5;
	div = 100000;
	long a = (long)n;
	while(div > 0)
	{
		_putchar("0123456789"[a / div]);
		a = a % div;
		div /= 10;
		i++;
	}
	return (i);
}
