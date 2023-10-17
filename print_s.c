#include "main.h"
/**
 * _strlen - gets the length of a string
 * @str: string pointer
 * Return: i
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; (str[i] != 0); i++)
		;

	return (i);
}

/**
 * _strlenc - function for constant character
 * @str: parameter
 * Return: i
 */

int _strlenc(const char *str)
{
	int i;

	for (i = 0; (str[i] != 0); i++)
		;

	return (i);
}
