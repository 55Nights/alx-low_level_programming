#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sums diagonals
 *
 * @a: multidimesinal array
 * @size: of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
	{
		sum1 += *(a + i);
	}
	for (i = (size - 1); i < (size * size); i += (size - 1))
	{
		j++;

		if (j > size)
		{
			break;
		}
		sum2 += *(a + i);
	}
	printf("%d, %d\n", sum1, sum2);
}
