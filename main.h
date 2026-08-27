#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

typedef struct print_format{
	        char sp;
		int (*f)(va_list args);
} print_t;

int _printf(const char *format, ...);
int (*parser(char c))(va_list);
int print_string(va_list args);
int print_int(va_list args);
int print_float(va_list args);
int print_binary(va_list args);
int print_unsigned(va_list args);
int print_p(va_list args);
int print_hex(va_list args);
int print_char(va_list args);
int print_HEX(va_list args);
int putnbr_base(unsigned int nb, char *base);
int _putchar(char c);

#endif
