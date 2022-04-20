#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s : string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int i, l;

	l = strlen(s) - 1;
	for (i = l; i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
