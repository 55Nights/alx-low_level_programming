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
	char *c;
	unsigned int size, i = 0, j = 0, k = 0;

	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	size = strlen(s1) + strlen(s2) + 1;
	c = malloc(sizeof(char) * size);
	if (c == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	if (strlen(s1) == 0)
	{
		j = i;
	}
	else
	{
		j += strlen(s1);
	}
	while (k <= size)
	{
		c[j + k] = s2[k];
		k++;
	}
	return (c);
}
