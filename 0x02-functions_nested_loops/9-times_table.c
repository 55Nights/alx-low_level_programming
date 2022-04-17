#include "main.h"
#include <stdio.h>
/**
 * times_table - main entry point
 * Return: -  is void
 */
void times_table(void)
{
	int product;
	int i;
	int j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			product = i * j;
			if (j == 0)
			{
				_putchar('0' + product);
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}

}
