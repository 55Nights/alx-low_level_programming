#include <stdio.h>
/**
 * main - The entry point
 * Return: will return (0) if sucessful
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
