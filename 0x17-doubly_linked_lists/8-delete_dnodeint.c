#include "lists.h"
/**
 * delete_dnodeint_at_index - Delets the nth node of a dlistint_t linked list.
 * @head: linked list to print.
 * @index: node to look for.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ind, *before, *after;

	if (head == NULL || *head == NULL)
		return (-1);
	while ((**head).prev != NULL)
		*head = (**head).prev;
	ind = *head;
	if (index == 0)
	{
		ind = ind->next;
		if (ind != NULL)
			ind->prev = NULL;
		ind = *head;
		*head = ind->next;
	}
	else
	{
		for (i = 0; i != index && ind->next != NULL; i++)
			ind = ind->next;
		if (index > i)
			return (-1);
		before = ind->prev;
		after = ind->next;
		if (after == NULL)
			before->next = NULL;
		else
		{
			before->next = after;
			after->prev = before;
		}
	}
	free(ind);
	return (1);
}

