#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - the main entry point
 * @d: - the integer to be evaluated
 * Return:  returns an int
 */
int print_last_digit(int d)
{
	int last;

	if (d < 0)
	{
		last = ((d % 10) * (-1));
		return (last);
		putchar('0' + last);

	} else
	{
		last = (d % 10);
		return (last);
		putchar('0' + last);
	}
}
