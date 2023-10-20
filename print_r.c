#include "main.h"
/**
 * print_r - prints reverse strings
 * @val: arguments
 * Return: strings
 */
int print_r(va_list val)
{
	char *s = va_arg(val, char *);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j = 1; i >= 0; i++)
		c_putch(s[i]);
	return (j);

}
