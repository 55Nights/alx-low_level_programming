#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_rev_recursion - reverses a string
 * @s: the string
 * Return: is void
 */
void _print_rev_recursion(char *s)
{
	int n;

	n = strlen(s);
	while (n >= 0)
	{
		printf("%c", s[n]);
		n--;
	}
}
