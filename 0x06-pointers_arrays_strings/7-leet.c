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

	char *lower = "aeotl";
	char *upper = "AEOTL";
	char *leet = "43071";

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == lower[j] || *(s + i) == upper[j])
			{
				*(s + i) = leet[j];
			}
		}
		i++;
	}
	return (s);
}
