#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of list
 *
 * @head: stores address of first node
 * @n: int
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;

	if (*head == NULL)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
		{
			free(new);
			return (NULL);
		}

		new->n = n;
		new->next = NULL;

		*head = new;
	}

	else
	{
		add_nodeint_end(&((*head)->next), n);
	}

	return (*head);
}
