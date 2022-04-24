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
	n = n - 1;
	while (n >= 0)
	{
		if (n > 0)
		{
			printf("%d, ", a[n]);
		}
		else
		{
			printf("%d", a[n]);
		}
		n--;
	}
}
