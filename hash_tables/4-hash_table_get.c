#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: is the hash table you want to look into.
 * @key: is the key you are looking for.
 * Return: NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *new;

	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];

	while (new != NULL)
	{
		if (strcmp(new->key, key) == 0)
		{
			return (new->value);
		}
		new = new->next;
	}
	return (NULL);
}
