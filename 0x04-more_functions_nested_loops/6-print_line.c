#include "main.h"
/**
 * print_line - prints _
 * @n : is the number to determine the number to print
 * Return : void
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
