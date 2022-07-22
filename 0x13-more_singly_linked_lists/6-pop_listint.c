#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: points the head of the node
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i = 0;

	if ((*head) == NULL || head == NULL)
	{
		return (0);
	}
	else
	{
		i = (*head)->n;
		while (head != NULL && *head != NULL)
		{
			temp  = *head;
			(*head) = (*head)->next;
			free(temp);
		}
	}
	return (i);
}

