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
	int i, l, mid;
	char temp;

	i = 0;
	l = 0;

	while (s[l])
		l++;
		mid = l / 2;
		while (mid--)
		{
		temp = s[l - 1 - i];
		s[l - 1 - i] = s[i];
		s[i] = temp;

		i++;
	}
}
