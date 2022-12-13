#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a list_t list
 * @head: input header pointer
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
