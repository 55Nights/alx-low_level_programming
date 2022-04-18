#include <stdio.h>

/**
 * main - Entry point
 * Return: (0) if succesfull
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (!(a == 'a' || a == 'e'_))
		{
			putchar(a);
		}
	}
	putchar('\n');

	return (0);
}
