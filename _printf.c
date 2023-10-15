#include "main.h"
/**
 *
 *
 *
 *
 *
 *
 */

int _printf(const char *format, ...)
{
	unsigned int i, byte = 0;

	va_list a;

	va_start(a, format);

	for (i = 0, format[i] != '\0', i++)
	{
		if (format[i] != '%')
		{
			c_putch(format[i]);
		}
		if (format[i] ==  '%' && format[i + 1] == 'c')
		{
			c_putch(va_arg(a, int));
			i++;
		}
		byte += 1;
	}
	va_end(a);
	return (byte)

}
