#include "main.h"
/**
 * print_number - the entry point
 * @n: he number to check
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = 0;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');

}
