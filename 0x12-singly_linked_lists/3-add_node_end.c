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
	list_t *new_node;
	char *s;

	new_node = (list_t *) malloc(sizeof(list_t));
	s = (char *) malloc(sizeof(str));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	s = strdup(str);
	new_node->str = s;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		add_node_end(&((*head)->next), str);
	}
	return (new_node);
}


