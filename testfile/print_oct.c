#include "main.h"
/**
 * print_oct - converts to octal
 * @val: variable parameter
 *
 * Return: counter
 */

int print_oct(va_list val)
{
	int i, counter = 0;
	int *arr;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;
	arr = malloc(sizeof(int) * counter);

	for (i = 0; i < counter; i++)
	{
		arr[i] = tem % 8;
		tem = tem / 8;
	}
	for (i = counter - 1; i >= 0; i--)
		_putchar(arr[i] + '0');

	free(arr);
	return (counter);
}
