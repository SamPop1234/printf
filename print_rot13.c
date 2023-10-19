#include "main.h"

/**
 * print_rot13 - main function
 * @val: arguments
 * Return: counter
 */
int print_rot13(va_list val)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(val, char *)
	char a[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char b[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		i = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == s[j])
			{
				c_putch(b[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			c_putch(s[i]);
			counter++;
		}

	}
	return (counter);
}
