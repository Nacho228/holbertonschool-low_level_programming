#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *new;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		new = ht->array[i];
		while (new != NULL)
		{
			printf("'%s': '%s'", new->key, new->value);
			if (new->next != NULL)
			{
				printf(", ");
			}
			new = new->next;
		}
		if (i != ht->size - 1)
		{
			printf(", ");
		}
	}
	printf("}\n");

}
