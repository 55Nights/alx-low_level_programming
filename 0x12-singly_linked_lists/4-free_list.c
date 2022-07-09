#include "lists.h"

/**
 * free_list - frees a list
 * @head: start of list
 * Return: void
 */
void free_list(list_t *head)
{
	free(head);
}
