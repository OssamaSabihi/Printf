#include "main.h"

int putnbr_base(unsigned int nb, char *base)
{
        unsigned int i = 0;
	while(base[i])
	{
		i++;
	}	
        if (nb >= i)
        {
                return(putnbr_base(nb / i, base) + _putchar(base[nb % i]));
        }
        _putchar(base[nb % i]);
        return (1);
}
