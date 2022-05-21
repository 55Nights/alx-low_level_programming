#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - cancats two strings
 * @s1: first string
 * @s2: second string
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, i;
	char *c;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	sz1 = strlen(s1);
	sz2 = strlen(s2);
	c = malloc((sz1 + sz2) * sizeof(char) + 1);
	if (c == 0)
		return (0);
	for (i = 0; i <= sz1 + sz2; i++)
	{
		if (i < sz1)
			c[i] = s1[i];
		else
			c[i] = s2[i - sz1];
	}
	c[i] = '\0';
	return (c);
}
