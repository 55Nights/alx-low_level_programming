#include "lists.h"

/**
 * add_nodeint - adds a new node at the beggining of a list
 * @head: a stores the address of the first element
 * @n: a integer
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(head));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *(head);
	*(head) = new_node;

	return (new_node);
}
