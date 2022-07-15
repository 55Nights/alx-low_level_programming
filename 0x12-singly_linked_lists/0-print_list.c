#include "lists.h"

/**
 * print_list - prits an all the elements of a list
 *
 * @h: head of the list
 *
 * Return: number of number
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h->str == NULL ? printf("[0] (nil)\n") :
			printf("[%lu] %s\n", strlen(h->str), h->str);
		h = h->next;
		num++;
	}
	return (num);
}
