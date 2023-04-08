#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head node.
 * @index: the index of the node, starting from 0.
 * Return: the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new = head;
	unsigned int count = 0;

	while (new != NULL)
	{
		if (count == index)
		{
			return (new);
		}
		count++;
		new = new->next;
	}
return (NULL);
}
