#include "main.h"
#include <string.h>
/**
 * leet - encode
 * @s: string
 * Return: char
 */
char *leet(char *s)
{
	int i, j;

	i = 0;
	char *l = "aeotl";
	char *u = "AEOTL";
	char *num = "43071";

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == *(u + j) || *(s + i) == *(l + j))
				*(s + i) = *(num + j);
		}
		i++;
	}
	return (s);
}
