#include "lists.h"

/**
 * free_listint2 - frees a list
 *
 * @head: points to first node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL && *head != NULL)
	{
		temp  = *head;
		*head = (*head)->next;
		free(temp);
	}
}
