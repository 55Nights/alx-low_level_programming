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
	int num, i;

	for (i = 0; i < strlen(s); i++)
	{
		num = (s[i] - 0);

		if (num >= 90 && num <= 122)
		{
			s[i] = (s[i] - 32);
		}
		else
		{
			s[i] = s[i];
		}
	}
	return (s);
}
