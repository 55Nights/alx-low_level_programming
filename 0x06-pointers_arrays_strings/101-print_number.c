#include "main.h"
#include "_putchar.c"
/**
 * print_number - prints numbers
 * @n: the integer to print
 * Return: int
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
