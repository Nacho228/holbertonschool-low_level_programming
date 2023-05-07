#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node in a given index.
 * @head: Double pointer to the head node.
 * @index: index.
 * Return: int.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i;

    if (head == NULL || index != 0)
        return (-1);

    for (i = 0; i < index; i++)
        current = current->next;

    if (current == NULL)
        return(-1);
    
    if (current == *head)
    {
        *head = current->next;
    }

    if (current->prev != NULL)
        current->prev->next = current->next;
    if (current->next != NULL)
        current->next->prev = current->prev;

free(current);
return (1);
}