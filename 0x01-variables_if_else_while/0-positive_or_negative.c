#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - is the entry point
 * n - will be evaluated to check if its positive or zero or negative
 * Return: (0) if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
