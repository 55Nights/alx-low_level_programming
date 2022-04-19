#include <stdio.h>
#include <math.h>
/**
 * main - the entry point
 * Return: 0
 */
int main(void)
{
	long int i = 612852475143;
	long int j;

	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			i = i / j;
		}
	}
	printf("%ld\n", j);

	return (0);
}
