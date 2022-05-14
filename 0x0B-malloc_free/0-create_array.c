#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char
 * @size: the size of array
 * @c: the char to initialize the array
 * Return: a char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
	{
		return (0);
	}

	p = malloc(sizeof(char) * size);
	while (i < size)
	{
		p[i] = c;
		i++;
	}

	return (p);
}

