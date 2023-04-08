#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements.
 * @h: elements in the linked dlistint_t.
 * Return: number of elements of *h.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *new;
	size_t count = 0;

	new = h;
	while (new != NULL)
	{
		count++;
		new = new->next;
	}
	while (new != NULL)
	{
		count++;
		new = new->prev;
	}
return (count);
}
