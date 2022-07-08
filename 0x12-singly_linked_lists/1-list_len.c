#include "lists.h"

/**
 * list_len - lists length of a linked list
 *
 * @h: poits to a node
 *
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t  count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
