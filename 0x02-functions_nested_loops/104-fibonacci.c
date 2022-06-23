#include <stdio.h>
/**
 * main - the entry point
 * Return: 0
 */
int main(void)
{
	unsigned long int i, p, c;

	p = 1;
	c = 2;
	i = 1;
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
