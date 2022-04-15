#include <stdio.h>

/**
 * main - Entry point
 * Return: (0) if succesfull
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'p')
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');

	return (0);
}
