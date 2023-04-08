#include "lists.h"
/**
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *new = h;
	size_t count = 0;

	while (new != NULL)
	{
		printf("%u\n", new->n);
		new = new->next;
		count++;
	}
	new = h;
	while (new != NULL)
	{
		new = new->next;
	}
return (count);
}

