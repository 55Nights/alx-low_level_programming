#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - reverses a string
 * @s : string to be reversed
 * Return : void
 */
void print_rev(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
