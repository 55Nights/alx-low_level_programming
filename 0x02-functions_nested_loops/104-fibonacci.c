#include <stdio.h>
/**
 * main - the entry point
 * Return: 0
 */
int main(void)
{
	unsigned long int i, p, c, n, p1, p2, c1, c2;

	p = 1;
	c1 = 0;
	c = 2;
	i = 1;
	n = 1000000000;
	printf("%lu", p);

	while (i < 98)
	{
		printf(", %lu", c);
		c = c + p;
		p = c - p;

		i++;
	}
	putchar('\n');
	return (0);
}
