#include "main.h"
/**
 * swap_int - swaps to integers
 * @a: the pointer to first int
 * @b: the pointer to the second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
