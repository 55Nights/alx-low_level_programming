#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - converts string to integer
 * @s:  string to convert
 * Return: 0
 */
int _atoi(char *s)
{
	int cache = 1, r = 0;

	while (s[0] != '\0')
	{
		if (s[0] == '-')
		{
			cache *= -1;
		}
		else if (s[0] > '0' && s[0] <= '9')
		{
			r = (r * 10) + (s[0] - '0') * cache;
		}
		else if (r)
		{
			break;
		}
		s++;
	}
	return (r);
}
