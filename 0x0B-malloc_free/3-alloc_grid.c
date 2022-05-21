#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns  a pointer to a two dimensional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: an int pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **p, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **) malloc(sizeof(*p) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i] = (int *) malloc(sizeof(**p) * width);
			if (p[i] == 0)
			{
				while (i--)
				{
					free(p[i]);
				}
				free(p);
				return (NULL);
			}
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(p + i)) = 0;
		}
	}
	return (p);
}
