#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list_t list.
 * @h: elements of the list
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)

{
	const list_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		if ((*node).str != NULL)
		{
			printf("%s\n", (*node).str);
		}

		else
		{
			printf("[0] (nil)\n");
		}
	count++;
	node  = node->next;
	}
return (count);
}
