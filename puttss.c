#include "main.h"
/**
 * puttss - function to print character
 * @s:  character
 * Return: printed chars
 */
int puttss(char *s)
{
	int count = 0;

	if (s)
	{

		for (count = 0; s[count] != '\0'; count++)
		{
			c_putch(s[count]);
		}
	}
	return (count);
}
