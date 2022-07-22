#include "lists.h"
#include "1-listint_len.c"
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
	size_t y = 0;

	y = listint_len(*head);
	if (y == 0)
	{
		return (0);
	}
	else
	{
		i = (*head)->n;
		free_listint2(head);
	}
	return (i);
}

