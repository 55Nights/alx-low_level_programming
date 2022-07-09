#include "lists.h"

/**
 * free_list - frees a list
 * @head: start of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp, *n;

	temp = head;
	while (temp->next != NULL)
	{
		n = temp->next;
		free(temp->str);
		free(temp);
		temp = n;
	}
	free(head);
}
