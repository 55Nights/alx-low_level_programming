#ifndef _VARIADIC_FUNCTION
#define _VARIADIC_FUNCTION
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);

#endif
