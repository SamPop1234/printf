#include "main.h"
/**
 * print_int - function that prints integers
 * @args: holds arguments
 * Return: number of character printed
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, ex = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		c_putch('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			ex = ex * 10;
			num = num / 10;
		}
		num = n;
		while (ex > 0)
		{
			digit = num / ex;
			c_putch(digit + '0');
			num = num - (digit * ex);
			ex = ex / 10;
			i++;
		}
	}
	c_putch(last + '0');

	return (i);
}
#include "main.h"
/**
 * print_deci - pritns decimal
 * @args: holds the arguments
 * Return: number of characters printed
 */

int print_deci(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, ex = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		c_putch('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			ex = ex * 10;
			num = num / 10;
		}
		num = n;
		while (ex > 0)
		{
			digit = num / ex;
			c_putch(digit + '0');
			num = num - (digit * ex);
			ex = ex / 10;
			i++;
		}
	}
	c_putch(last + '0');
	
	return (i);
}
