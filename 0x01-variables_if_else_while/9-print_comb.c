#include <stdio.h>
/**
 * main - the main entry point
 * Return:0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 9)

		putchar((i + '0')),
			putchar(','),
			putchar(' ');

		else
			putchar((i + '0')),
				putchar(' ');
	}

	return (0);
}

