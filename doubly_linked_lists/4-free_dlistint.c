#include "lists.h"
#include <stdlib.h>

/**
 *free_dlistint - libera memoria
 *@head: puntero
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_dlistint(head->next);
		if (head->prev == NULL)
			free_dlistint(head->prev);
		free(head);
	}
}
