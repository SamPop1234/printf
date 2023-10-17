#include "main.h"
/**
 * printf_ch - prints character
 * @val: arguments
 * Return: 1
 */

int printf_ch(va_list val)
{
	char str;

	str = va_arg(val, int);
	c_putch(str);
	return (1);
}
