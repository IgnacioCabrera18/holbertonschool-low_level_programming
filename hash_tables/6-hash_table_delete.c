#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *hash_table_delete - eliminar la ht
 *@ht: es la ht
 *Return: nada
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *actual, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		actual = ht->array[i];
		while (actual != NULL)
		{
			temp = actual->next;
			free(actual->key);
			free(actual->value);
			free(actual);
			actual = temp;
		}
	}
	free(ht->array);
	free(ht);
}
