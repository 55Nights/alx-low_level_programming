#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints half of string
 * @str : string to print
 * Return : void
 */
void puts_half(char *str)
{
	int i, n, len;

	len = strlen(str);
	n = len / 2;
	for (i = 0; i < len; i++)
	{
		if (len % 2 == 0)
		{
			if (i >= n)
			{
				printf("%c", str[i]);
			}
		}
		else
		{
			if (i > n)
			{
				printf("%c", str[i]);
			}
		}
	}
	printf("\n");
}
