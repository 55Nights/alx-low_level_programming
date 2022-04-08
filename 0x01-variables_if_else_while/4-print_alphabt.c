#include <stdio.h>

/**
 * main - Entry point
 * Return: (0) if succesfull
 */
int main(void)
{
	char c = 'a';
	char A = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}

	putchar('\n');

	return (0);
}
