#include "main.h"
/**
 * print_b - prints binary
 * @val: parameter for conversion
 * Return: binary
 */
int print_b(va_list val)
{
	int flg = 0;
	int count = 0;
	int i, j = 1, k;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((j << (32 - i)) & n);
		if (p >> (31 - i))
			flg = 1;
		if (flg)
		{
			k = p >> (31 - i);
			c_putch(k + '0');
			count++;

		}
	}
	if (count == 0)
	{
		count++;
		c_putch('0');
	}
	return (count);
}

