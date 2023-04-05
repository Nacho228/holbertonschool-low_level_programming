#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: elements in the linked list_t.
 * Return: number of elements of *h.
 */
size_t list_len(const list_t *h)
{
	const list_t *node = h;
	unsigned int count = 0;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}
return (count);
}
