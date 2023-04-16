#include "hash_tables.h"
/**
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *new, *current;

	if (ht == NULL || ht->array == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	
	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key)== 0)
		{
			free (current);
			current->value = strdup(value);
			if (current->value == 0)
			{
				return (0);
			}
			return (1);
		}
		current = current->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		return (0);
	}

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}

	new->value = strdup(value);
	if(new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
return (1);
}
