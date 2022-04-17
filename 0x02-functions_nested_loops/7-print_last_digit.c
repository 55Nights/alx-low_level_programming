#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - the main entry point
 * @d: - the integer to be evaluated
 * Return:  returns an int
 */
int print_last_digit(int d)
{
	if (d < 0)
	{
		return ((d % 10) * (-1));

	} else
	{
		return (d % 10);
	}
}
