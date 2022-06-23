#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * infinite_add - adds strings
 * @n1: first string
 * @n2: second string
 *
 * @r: storage buffer
 * @size_r: size of r
 * Return: char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, op1, op2, g = 0, result = 0;

	len1 = strlen(n1) - 1;
	len2 = strlen(n2) - 1;
	r[size_r - 1] = '\0';
	size_r -= 2;
	while (len1 >= 0 || len2 >= 0)
	{
		if (size_r < 0)
		{
			return (0);
		}
		op1 = len1 < 0 ? 0 : (n1[len1] - '0');
		op2 = len2 < 0 ? 0 : (n2[len2] - '0');

		result = (op1 + op2 + g);
		r[size_r] = ((result % 10) + '0');
		g = result / 10;

		len1--;
		len2--;
		size_r--;
	}
	if (g != 0)
	{
		if (size_r < 0)
		{
			return (0);
		}
		r[size_r] = g + '0';
		r = &r[(size_r)];
	}
	else
	{
		r = &r[(size_r + 1)];
	}
	return (r);
}
