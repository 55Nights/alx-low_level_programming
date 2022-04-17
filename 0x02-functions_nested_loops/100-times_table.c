#include "main.h"
/**
 * print_times_table - prints times table
 * @n : number to control the table
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int product;

	if (n < 0 || n > 15)
		return;
	while (i <= n)
	{
		for (j = 0; j <= n; j++;)
		{
			product = i * j;
		if (j == 0)
		{
			_putchar('0' + product);
		} else if (product < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + product);
		} else if (product < 100)
		{
			_putchar(' ');
			_putchar('0' + product / 10);
			_putchar('0' + product % 10);
		} else
		{
			_putchar('0' + product / 100);
			_putchar('0' + (product - 100) / 10);
			_putchar('0' + product % 10);
		}
		if (j < n)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
	_putchar('\n');
	i++;
	}
}
