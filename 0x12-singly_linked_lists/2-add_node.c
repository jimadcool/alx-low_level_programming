#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	unsigned int i;
	list_t *new;

	duplicate = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	i = 0;

	while (str[i] != '\0')
		i++;

	new->str = duplicate;
	new->len = i;
	new->next = *head;

	*head = new;

	return (new);
}
