#include "main.h"

/**
 * rot13 - the function
 * @s: char
 * Return: pointer char
 */
char *rot13(char *s)
{
	int i, c = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		while ((*s + i) >= 65 && *(s + i) <= 77) ||
			(*(s + i) >= 97&& *(s + i) <= 109))
		{
			*(s + i) = (*(s +i) + 13);
			changed = 1;

			break;
		}
		if (((*(s + i) >= 110 && *(s + i) <= 122) || (*(s + i) >= 78 && *(s + i) <= 90))
				&& !c)
			*(s + i) = (*(s + i) - 13);
		c = 0;
	}
	return (s);
}
