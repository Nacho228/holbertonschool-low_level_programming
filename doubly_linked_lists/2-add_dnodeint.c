#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dll.
 * @head: head node of the list.
 * @n: data that is going to be added.
 * Return: adress of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	new->next = *head;
	*head = new;

return (new);
}
