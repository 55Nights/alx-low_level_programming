#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 *
 * @b: buffer
 *
 * @size: size
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int m = 0, j, i, d;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (m < size)
	{
		j = size - m < 10 ? size - m : 10;
		printf("%08x: ", m);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
			{
				printf("%2x", *(b + m + i));
			}
			else
			{
				printf(" ");
			}
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			d = *(b + m + i);
			if (d < 32 || d > 132)
			{
				d = '.';
			}
			printf("%c", d);
		}
		printf("\n");
		m += 10;
	}
}
