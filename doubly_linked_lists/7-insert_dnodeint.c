#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node on a selected place.
 * @h: head.
 * @idx: index.
 * @n: data.
 * Return: new.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (new == NULL)
		return (NULL);
	
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
		{
			(*h)->prev = new;
		}
		new->next = *h;
		*h = new;
		return (new);
	}

	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;
	if (i != idx - 1 || current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->prev = current;
	new->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new;
	}
	current->next = new;
return (new);
}

