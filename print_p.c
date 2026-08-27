#include <stdio.h>
#include "main.h"
int putnbr_base1(unsigned long nb, char *base)
{
        unsigned long i = 0;
        while(base[i])
        {
                i++;
        }
        if (nb >= i)
        {
                return(putnbr_base1(nb / i, base) + _putchar(base[nb % i]));
        }
        _putchar(base[nb % i]);
        return (1);
}

int print_p(va_list args)
{
	void *p = va_arg(args, void *);
	char *str = "(nil)";
	int i = 0;
	if (p == NULL)
	{
		while(str[i])
			_putchar(str[i++]);
		return (5);
	}
	_putchar('0');
	_putchar('x');
	return (putnbr_base1((unsigned long)p, "0123456789abcdef") + 2);
}
