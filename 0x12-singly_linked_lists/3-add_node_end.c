#include "lists.h"

/**
 * add_node_end - adds anew ode at the end of the list
 *
 * @head: points to the start of the list
 * @str: is a string
 *
 * Return: address if successfull or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	char *s;

	s = strdup(str);
	node = (list_t *) malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = s;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
	}
	return (node);
}
