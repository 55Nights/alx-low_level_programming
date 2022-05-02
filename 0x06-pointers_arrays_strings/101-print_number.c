#include "main.h"
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
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n > 9 && n < 100)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n > 99 && n < 1000)
	{
		_putchar(((n / 10) / 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar(n % 10 + '0');
	}
	else if (n > 999 && n < 10000)
	{
		_putchar((((n / 10) / 10) / 10) + '0');
		_putchar((((n / 10) / 10) % 10) + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
