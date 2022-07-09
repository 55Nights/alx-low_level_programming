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
	list_t *new_node, *temp;

	new_node = (list_t *) malloc(sizeof(list_t));
	if (new_node == NULL || strdup(str) == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	return (new_node);
}
