#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper - main function
 * @str: the string
 * Return: char
 */
char *string_toupper(char *str)
{
	int num, i;

	for (i = 0; i < strlen(str); i++)
	{
		num = (str[i] - 0);

		if (num >= 90 && num <= 122)
		{
			str[i] = (str[i] - 32);
		}
		else
		{
			str[i] = str[i];
		}
	}
	return (str);
}
