#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int c_putch(char c);
int puttss(char *s);
int print_str(va_list val);
int printf_ch(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);








#endif
