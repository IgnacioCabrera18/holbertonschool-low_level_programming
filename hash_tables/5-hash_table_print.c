#include "hash_tables.h"
#include <stdio.h>

/**
 *hash_table_print - imprimir una ht.
 *@ht: Es una ht.
 *Return: nada
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, first_pair = 1;
	hash_node_t *actual;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		actual = ht->array[i];
		while (actual != NULL)
		{
			if (!first_pair)
				printf(", ");
			printf("'%s': '%s'", actual->key, actual->value);
			first_pair = 0;
			actual = actual->next;
		}
	}
	printf("}\n");
}
