#include "hash_tables.h"
/**
 * hash_table_create -  function that creates a hash table.
 * @size: size is the size of the array.
 * Return: Returns a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->size = size;
	if (size == 0)
	{
		return (NULL);
	}

	new->array = malloc(sizeof(hash_node_t) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		new->array[i] = NULL;
	}
return (new);
}
