#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

typedef struct sp
{
	char *s;
	int (*f)(va_list args);
}sp_frm;

int _printf(const char * format, ...);
int _putchar(char c);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(va_list args);
int printf_int(va_list args);
int printf_dec(va_list args);
int print_bin(va_list val);
int printf_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX(va_list val);
int print_HEX_extra(unsigned int num);
int print_other_string(va_list val);
int print_pointer(va_list val);
int print_convert_pointer(unsigned long int num);
int print_reverse(va_list val);
int print_rot13(va_list val);

#endif
