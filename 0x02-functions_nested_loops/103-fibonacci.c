#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int p;
	int c;
	int n;
	int sum = 0;

	p = 0;
	n = 0;
	c = 1;
	while (n < 4000000)
	{
		n = c + p;
		p = c;
		c = n;
		if (n % 2 == 0)
		{
			sum = sum + n;
		}
	}
		printf("%i", sum);
		putchar('\n');
		return (0);
}
