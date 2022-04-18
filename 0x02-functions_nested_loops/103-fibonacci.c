#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long c,n,p,num;
	long long sum = 0;

	while (n < 4000000)
	{
		num = c + p;
		if (num % 2 == 0)
		{
			sum = sum + num;
		}
		p = c;
		c = num;
		n++;
	}
	printf("%lld", sum);
	putchar('\n');
}
