#include "main.h"
/**
 * print_triangle - outputs the result
 * @size:  the number to control the output
 * Return: void
 */
void print_triangle(int size)
{
	int a = 1, b, c;

	while (a <= size && size > 0)
	{
		b = 0;
		while (b < size - a)
		{
			_putchar(' ');
			b++;
		}

		c = 0;
		while (c < a)
		{
			_putchar('#');
			c++;
		}
		_putchar('\n');
		a++;
	}
		if (a == 1)
		{
			_putchar('\n');
		}
}
