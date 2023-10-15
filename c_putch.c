#include "main.h"

/**
 * c_putch  - outputs character
 * @c: character to be considered 
 * Return: 1 on success
 */

int c_putch(char c)
{
	return (write(1, &c, 1));
}
