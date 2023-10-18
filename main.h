#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - custom structure
 * @id: holds specifiers
 * @f: holds aruments
 */

typedef struct format
{
	char *id;

	int (*f)();
} match;


int _printf(const char *format, ...);
int c_putch(char c);
int puttss(char *s);
int print_str(va_list val);
int printf_ch(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_deci(va_list args);
int print_int(va_list args);
int print_b(va_list val);








#endif
