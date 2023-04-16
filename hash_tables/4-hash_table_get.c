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

	index = hash_djb2((const unsigned char *)key) % ht->size;
	new = ht->array[index];

	if (new != NULL)
	{
		if (strcmp(new->key, key) == 0)
		{
			return (new->value);
		}
	}
	return (NULL);
}
