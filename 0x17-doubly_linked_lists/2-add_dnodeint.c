#include "lists.h"
/**
  * add_dnodeint - Adds a node to the beginning of a doubly linked list
  * @head: head of the linked list
  * @n: value to add to the list
  * Return: pointer to the element added
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *temp, *node = malloc(sizeof(dlistint_t));


	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (*head);
	}
	temp = *head;
	node->next = temp;
	temp->prev = node;
	*head = node;
	return (node);
}
