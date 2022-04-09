#include <stdio.h>
#include <stdlib.h>

/**
 *  main - The entry point
 *  Return: will return 0 if successfull
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i + '0'));
	}
	putchar('\n');

	return (0);
}
