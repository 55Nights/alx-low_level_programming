#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc -  allocates memory for an array, using malloc
 * @nmemb: the elements of an array;
 * @size: size of bytes
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	c = malloc(nmemb * size);
	if (c == NULL)
	{
		return (NULL);
	}
	memset(c, 0, nmemb * size);
	return (c);
}
