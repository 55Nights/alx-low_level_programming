#include <stdio.h>
/**
 * main - the entry point
 * Return: 0
 */
int main(void)
{
	unsigned long int c, p, num;
	int n;

	c = 1;
	p = 0;
	n = 0;
	while (n < 99)
	{
		num = c + p;
		if (n == 98)
		{
			printf("%lu", num);
		} else
		{
			printf("%lu, ", num);
		}
		p = c;
		c = num;
		n++;
	}
	putchar('\n');
	return (0);
}
