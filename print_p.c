#include "main.h"
/**
 * print_p - prints pointer
 * @val: value
 * Return: int
 */

int print_p(va_list val)
{
	void *p
	char *s = "(NULL)";
	int i, b;
	long int j;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			c_putch(s[i]);
		return (i);
	}
	j = (unsigned long int)p;
	c_putch('0');
	c_putch('x');
	b = print_hex_extra(j);
	return (b + 2);
}
