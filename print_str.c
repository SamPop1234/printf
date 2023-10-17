#include "main.h"
/**
 * print_str - function that prints strings
 * @val: srguments
 * Return: length of string
 */
int print_str(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);

		for (i = 0; i < length; i++)
			c_putch(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			c_putch(str[i]);
		return (length);
	}
}
