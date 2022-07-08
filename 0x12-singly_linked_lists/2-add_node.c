
#include "lists.h"

/**
 * add_node - adds a new node
 *
 * @head: double pointer
 *
 * @str: string
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_l;
	char *s = strdup(str);

	if (head != NULL)
	{
		new_l = (list_t *) malloc(sizeof(list_t));
		if (new_l == NULL || s == NULL)
		{
			free(new);
		new_l->next = *(head);
		new_l->str = s;
		*(head) = new_l;
		return (new_l);
	}
	else
	{
		return (NULL);
	}
}
