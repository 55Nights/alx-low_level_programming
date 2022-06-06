#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strchr - locates a character
 * @s: the string  to search
 * @c: the char to search
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int n = 0, l = strlen(s);


	while (n <= l)
	{
		if (*(s + n) == c)
		{
			return (s + n);
		}
		n++;
	}
	return (NULL);
}
