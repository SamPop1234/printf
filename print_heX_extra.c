#include "main.h"
/**
 * print_heX_extra - print hex
 * @val: arguments
 * Return: counter j
 */

int print_heX_extra(unsigned int num)
{
	int i, j = 0;
	int *array;
	unsigned int  tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		j++;
	}
	j++;
	array = malloc(sizeof(int) * j);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
	{
		array[i] = tem % 16;
		tem = tem / 16;
	}
	for (i = j - 1; 1 >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		c_putch(array[i] + '0');
	}
	free(array);
	return (j);
}