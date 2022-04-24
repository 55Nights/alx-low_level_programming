#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses an array
 * @a: is the array
 * @n: size of the array
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int i, temp, j;

	j = n / 2;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
