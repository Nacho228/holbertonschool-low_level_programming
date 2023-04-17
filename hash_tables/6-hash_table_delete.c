#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table.
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *aux, *new;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		new = ht->array[i];
		while (new != NULL)
		{
			aux = new->next;
			free(new->key);
			free(new->value);
			free(new);
			new = aux;
		}
	}
	free(ht->array);
	free(ht);
}
