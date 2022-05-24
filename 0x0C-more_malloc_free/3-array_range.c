#include "main.h"
#include <stdlib.h>
/**
 * array_range -  creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int *c, i;

	if (min > max)
	{
		return (NULL);
	}
	c = malloc(sizeof(int) * (max - min + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; (min + i) <= max; i++)
		c[i] = min + i;
	return (c);
}
