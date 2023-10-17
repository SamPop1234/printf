#include "main.h"
/**
 *_printf - custom printf
 *@format: arguments
 *Return: number of bytes
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_ch}, {"%s", print_str}, {"%%", print_37}, {"%d", print_deci},
		{"%i", print_int}
	};

	va_list args;
	int i = 0, l = 0;
	int k;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

Here:
	while (format[i] != '\0')
	{
		k = 4;
		while (k >= 0)
		{
			if (m[k].id[0] == format[i] && m[k].id[1] == format[i + 1])
			{
				l = l + m[k].f(args);
				i = i + 2;
				goto Here;
			}
			k--;
		}
		c_putch(format[i]);
		i++;
		l++;
	}
	va_end(args);
	return (l);
}
