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
	int i = 0;

	if ((*head) == NULL || head == NULL)
	{
		return (0);
	}
	else
	{
		i = (*head)->n;
		*head = NULL;
		head = NULL;
	}
	return (i);
}

