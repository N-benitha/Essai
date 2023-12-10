#include "main.h"
/**
 * _printf - printf-like function
 * @format: character string
 *
 * Return: integer
 */
int _printf(const char *format, ...)
{
	sp_frm a[] = { {"%c", printf_char}, {"%s", printf_string}, {"%%", print_37},
		{"%d", printf_dec}, {"%i", printf_int}, {"%r", print_reverse},
		{"%R", print_rot13}, {"%b", print_bin}, {"%u", printf_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_other_string}, {"%p", print_pointer} };
	va_list args;
	int i = 0, len = 0, j = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[i] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (a[j].s[0] == format[i] && a[j].s[1] == format[i + 1])
			{
				len = len + a[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
