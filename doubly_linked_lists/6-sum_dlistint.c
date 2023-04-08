#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data.
 * @head: head node.
 * Return: sum.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *new = head;
	int sum = 0;

	if (new == NULL)
	{
		return (0);
	}
	while (new)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
