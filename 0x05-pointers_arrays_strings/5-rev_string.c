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
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		printf("%c", *(s + i));
		i--;
	}
	printf("\n");
	free(s);
}
