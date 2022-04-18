#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - checks if a character is uppercase
 * @c : character to be evaluated
 * Return: 0
 */
int _isupper(int c)
{
	int r;

	r = isupper(c);
	if (r > 0)
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
