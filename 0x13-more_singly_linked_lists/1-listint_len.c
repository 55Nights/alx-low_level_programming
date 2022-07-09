#include "lists.h"

/**
 * listint_len - returns a number of elements
 * @h: points to the first not
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
