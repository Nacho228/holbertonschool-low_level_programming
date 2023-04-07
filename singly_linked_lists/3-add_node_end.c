#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head node of the list.
 * @str: string.
 * Return: adress of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *current;

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (0);
	}
	new->len = strlen(str);

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}

	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
	}
	current->next = new;

return (new);
}
