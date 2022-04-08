#include <stdio.h>

/**
 * main - is the entry point
 * n will be evaluated to check if its positive or zero or negative
 * Return: (0) if successful
 */
int main(void)
{

	if (n > 0)
	{
		printf("%d is positive", n);
	} else if (n == 0)
	{
		printf("%d is zero", n);
	} else if (n < 0)
	{
		printf("%d is negative", n);
	}

	return (0);
}
