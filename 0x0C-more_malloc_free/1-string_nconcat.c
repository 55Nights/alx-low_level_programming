#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - adds two strings
 * @s1: first string
 * @s2: second string
 * @n: integer
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size, i, j, sz1, sz2;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	sz1 = strlen(s1);
	sz2 = strlen(s2);
	size = sz1 + sz2 + 1;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < sz1; i++)
	{
		p[i] = s1[i];
	}
	if (n >= sz2)
	{
		for (j = 0; j < sz2; j++)
		{
			p[i + j] = s2[j];
		}
	}
	else if (n < sz2)
	{
		for (j = 0; j < n; j++)
		{
			p[i + j] = s2[j];
		}
	}
	p[size - 1] = '\0';
	return (p);
}
