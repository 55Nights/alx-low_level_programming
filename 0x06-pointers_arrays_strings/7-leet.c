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

	char *_low = "aeotl";
	char *_upper = "AEOTL";
	char *lt = "43071";

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == _low[j] || *(s + i) == _upper[j])
				*(s + i) == _upper[j];
		}
		i++;
	}
	return (s);
}
