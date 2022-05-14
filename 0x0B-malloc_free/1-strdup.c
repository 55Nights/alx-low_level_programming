#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer
 * @str: the string that is to be allocated
 * Return: char
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int i = 0, size = 10;

	p = malloc(strlen(str) * 2);
	if (str == NULL)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	if (strlen(str) > size)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			p[i] = str[i];
			i++;
		}
	}
	return (p);
}
