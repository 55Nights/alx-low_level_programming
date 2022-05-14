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
	char *c;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		c = malloc(sizeof(char) * strlen(str));
		if (c == NULL)
		{
			return (NULL);
		}
		else
		{
			while (str[i] != '\0')
			{
				c[i] = str[i];
				i++;
			}
		}
	}
	return (c);
}
