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
	j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (j != 9)
			{
				printf("%d", product);
				_putchar(',');
				_putchar(' ');
			} else
			{
				printf("%d", product);
			}
		}
		_putchar('\n');
	}
}
