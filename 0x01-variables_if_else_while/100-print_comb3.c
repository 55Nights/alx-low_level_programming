#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	k = '0';
	for (i = '0'; i <= '9'; i++)
	{
		for (j = k; j <= '9'; j++)
		{
			if (j != i)
			{
				putchar(i);
				putchar(j);

				if (!(i == '8' && j == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		k++;
	}
	putchar('\n');

	return (0);
}
