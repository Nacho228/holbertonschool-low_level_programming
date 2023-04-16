#include "hash_tables.h"
#include "0-hash_table_create.c"
/**
 * key_index - function that gives you the index of a key.
 * @key: is the key.
 * @size: is the size of the array.
 * Return: index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	hash_table_t *hash_table;
	hash_node_t *current;

	hash_table = hash_table_create(size);
	index = hash_djb2(key) % size;
	current	= hash_table->array[index];

	while (current != NULL)
	{
		if (strcmp((const char *)current->key, (const char *) key) == 0)
		{
			return (index);
		}
	current = current->next;
	}
return (index);
}
