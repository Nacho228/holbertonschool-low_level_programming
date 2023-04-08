#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: elements of the list.
 * Return: number of the elements on the list.
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

