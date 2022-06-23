#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - reverses a string
 * @s : string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int l = 0, mid, i = 0;

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
