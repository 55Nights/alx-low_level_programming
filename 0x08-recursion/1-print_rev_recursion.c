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
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	printf("%c", *s);
}
