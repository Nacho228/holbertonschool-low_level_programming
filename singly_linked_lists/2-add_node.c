#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: head node of the list.
 * @str: string.
 * Return: adress of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

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

	new->next = *head;
	*head = new;

return (new);
}
