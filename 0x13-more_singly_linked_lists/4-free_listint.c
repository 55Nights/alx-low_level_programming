#include "lists.h"

/**
 * free_listint - frees a list
 * @head: points to first node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}