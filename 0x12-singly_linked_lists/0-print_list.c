#include "lists.h"
/**
 * print_list - prints all elements of list_t
 *
 * @h: points to a list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", strlen(h->str), h->str);

		}

		h = h->next;
		count++;
	}

	return (count);
}
