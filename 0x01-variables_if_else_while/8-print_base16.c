#include <stdio.h>
/**
 * main - The entry point
 * Return: on success it will return 0
 */

int main(void)
{
	char a = '0';
	char b = 'a';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}

