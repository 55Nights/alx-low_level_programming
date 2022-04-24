#include "main.h"
#include <string.h>
/**
 * cap_string - a function that capitalizes
 * @s: - string
 * Return: char
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	if (*s >= 97 && *s <= 122)
	{
		*s -= 32;
	}
	while (*(s + i) != '\0')
	{
		if (*(s + i) == '\n' || *(s + i) == ' ' || *(s + i) == '\t' ||
				*(s + i) == ';' || *(s + i) == '.' || *(s + i) == '!' ||
				*(s + i) == '?' || *(s + i) == '"' || *(s + i) == '(' ||
				*(s + i) == ')' || *(s + i) == '{' || *(s + i) == '}')
		{
			if (*(s + i + 1) >= 97 && *(s + i + 1) <= 122)
			{
				*(s + i + 1) -= 32;
			}
		}
		i++;

	}
	return (s);
}
