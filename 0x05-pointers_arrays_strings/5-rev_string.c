#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * rev_string - reverses a string
 * @s : string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int i, x = 0;
	unsigned int y = 0;
	char *c;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		c = malloc(sizeof(char) * strlen(s));
		*(c + x) = *(s + i);
		x++;
		i--;
	}
	while (y < strlen(s))
	{
		*(s + y) = *(c + y);
		y++;
	}
	free(c);
}
