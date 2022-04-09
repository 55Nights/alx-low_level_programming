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
		putchar((i + '0')),
			putchar(','),
			putchar(' ');
	}

	return (0);
}

