#include "main.h"

int print_binary(va_list args)
{
	return(putnbr_base(va_arg(args, unsigned int), "01"));
}
