#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter.
 * @array: an array passed
 * @size: size of the array
 * @action: pointer to a function
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
