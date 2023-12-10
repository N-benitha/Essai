#include "main.h"
/**
 * _strlen - finds the length of the string
 * @str: string to find length for
 *
 * Return: length of string.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _strlenc - finds the length of constant char pointer str
 * @str: string to find length for
 *
 * Return: length of string.
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * printf_string - print a string
 * @val: argument
 *
 * Return: the length of the string.
 */
int printf_string(va_list val)
{
	char *str;
	int i;
	int len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
