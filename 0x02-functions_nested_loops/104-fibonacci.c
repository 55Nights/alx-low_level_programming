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

	while (i < 91)
	{
		printf(", %lu", c);
		c = c + p;
		p = c - p;

		i++;
	}
	p1 = (p / n);
	p2 = (p % n);

	c1 = (c1 / n);
	c2 = (c1 % n);

	i = 92;
	while (i < 99)
	{
		printf(", %lu", c1 + (c2 / n));
		printf("%lu", c % n);

		c1 = c1 + p1;
		p1 = c1 - p1;
		c2 = c2 + p2;
		p2 = c2 - p2;

		i++;
	}
	putchar('\n');
	return (0);
}
