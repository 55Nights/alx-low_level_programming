#include "lists.h"

/**
 * free_list - frees a list
 * @head: start of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *c;

	while (head != NULL)
	{
		c = head->next;
		free(head);
		head = c;
	}
}

