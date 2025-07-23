#include "lists.h"
#include <stdlib.h>

/**
 *free_list - liberar memoria
 *@head: puntero
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_list(head->next);
		}
		free(head->str);
		free(head);
	}
}
