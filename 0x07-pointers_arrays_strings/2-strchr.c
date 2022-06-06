#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character
 * @s: the string  to search
 * @c: the char to search
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int n = 0;
	char *p;

	while (*(s + n) != '\0')
	{
		if (*(s + n) == c)
		{
			p = (s + n);
			break;
		}
		n++;
	}
	return (p);
}
