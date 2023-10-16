#include "main.h"
/**
 * _printf - custom printf function
 * @format : format
 * Return: number of bytes
 */

int _printf(const char *format, ...)
{
	unsigned int i, count, byte = 0;

	va_list a;
	
	if (!format || (format[0] == '%' && format[1] == '\0'))
		
		return (-1);

	va_start(a, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			c_putch(format[i]);
		}
		else if (format[i + 1] == 'c')
		
			c_putch(va_arg(a, int));

			i++;
		}
		else if (format[i + 1] == 's')
		{
			count = puttss(va_arg(a, char *));
			i++;
			byte += (count - 1);
		}
		else if (format[i + 1] == '%')
		{
			c_putch('%');
		}
		else if (format[i + 1] == 'd')
		{
            		int value = va_arg(a, int);

            		printf("%d", value);
            		i++;
		}
		else if (format[i + 1] == 'i')
		{
			int value = va_arg(a, int);
			printf("%d", value);
			i++;
		}
		else
		{
			c_putch(format[i]);
			i++;
		}
		byte += 1
	}
	va_end(a);
	return (byte);

}
