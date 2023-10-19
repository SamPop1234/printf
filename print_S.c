#include "main.h"
/**
 * print_S - prints Special strings
 * @val: value
 * Return: number of char printed
 */

int print_S(va_list val)
{
	char *s;
	int i, l = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			c_putch('\\');
			c_putch('x');
			l = l + 2;
			value = s[i];
			if (value < 16)
			{
				c_putch('0');
				l++;
			}
			l = l + print_heX_extra(value);
		}
		else
		{
			c_putch(s[i]);
			l++
		}
	}
	return (l);
}
