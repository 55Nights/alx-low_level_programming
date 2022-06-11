#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: an array
 * @size: size of an array
 * @cmp: function pointer
 * Return: int
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i = 0, k;

	if (size > 0 && cmp != NULL && array != NULL)
	{
		while (i < size)
		{
			k = cmp(array[i]);
			if (k != 0)
			{
				return (i);
			}
			i++;
		}
	}

	return (-1);
}
