#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a void function to allocate memory
 * @b: int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(int));

	if (p == NULL)
	{
		exit(98);
	}
	p[0] = b;
}
