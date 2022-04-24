#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper - main function
 * @s: the string
 * Return: char
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
		{
			*(s + i) -= 32;
		}

		i++;
	}

	return (s);
}
