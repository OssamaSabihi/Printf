#include "main.h"

int print_hex(va_list args)
{
	return (putnbr_base(va_arg(args, unsigned int), "0123456789abcdef"));
}
