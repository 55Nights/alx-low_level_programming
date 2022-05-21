#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees space allocated
 * @grid: the ponter to free
 * @height: the height of the array
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
