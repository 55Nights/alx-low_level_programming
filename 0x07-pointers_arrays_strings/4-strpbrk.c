#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches for strings
 *
 * @s: string to search
 * @accept: string to search for
 * Return: char ponter
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0, i;

	while (*(s + j) != '\0')
	{
		for (i = 0; *(accept + i) != '\0'; i++)
		{
			if (*(s + j) == *(accept + i))
			{
				return (s + j);
			}
		}
		j++;
	}
	return (NULL);
}
