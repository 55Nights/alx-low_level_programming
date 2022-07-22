#include "lists.h"

/**
 * free_list - frees a list
 * @head: start of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *t;

	t = head;
	while (head != NULL)
	{
		t = head->next;
		free(head->str);
		free(head);

	}
}

