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
	dlistint_t *prev = NULL;
	unsigned int count = 0;

	if (h == NULL && idx != 0)
	{
		return (NULL);
	}

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}

	while (current != NULL && count < idx)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (count < idx)
	{
		free(new);
		return (NULL);
	}
	new->next = current;
	prev->next = new;
return (new);
}

