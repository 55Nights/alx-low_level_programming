#include <stdio.h>

/**
 * main - Entry point
 * Return: (0) if succesfull
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
