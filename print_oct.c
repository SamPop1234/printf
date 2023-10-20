#include "main.h"
/**
 * print_oct - print octa
 * @val: arguments
 * Return: counter j
 */

int print_oct(va_list val)
{
	int i, j = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int  tem = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		j++;
	}
	j++;
	array = malloc(sizeof(int) * j);
	if (array == NULL)
		return (-1);
	for (i = 0; i < j; i++)
	{
		array[i] = tem % 8;
		tem = tem / 8;
	}
	for (i = j - 1; 1 >= 0; i--)
		c_putch(array[i] + '0');
	free(array);
	return (j);
}
