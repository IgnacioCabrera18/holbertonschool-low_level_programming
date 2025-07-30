#include "hash_tables.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 *hash_table_set - Añade un elemento a la tabla hash
 *@ht: La tabla hash a la que se va a añadir o actualizar lakey/vaue.
 *@key: La key.
 *@value: El value asociado a la key.
 *Return: 0 o 1.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int index;
	char *new_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);


	new->key = strdup(key);
	new->value = strdup(value);
	if (new->value == NULL || new->key == NULL)
	{
		free(new->key);
		free(new->value);
		free(new);
		return (0);
	}

	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
