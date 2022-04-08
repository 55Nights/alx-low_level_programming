#include <stdio.h>
/**
 * main - is the Entry point
 * Return: 0  if successful
 */
int main(void)
{
	char c = 'a';
	char A = 'A';

	while (c <= 'z')
	{
		putchar(c);
	}
	while (A <= 'Z')
	{
		putchar(A);
	}
	putchar('\n');

	return (0);
}
