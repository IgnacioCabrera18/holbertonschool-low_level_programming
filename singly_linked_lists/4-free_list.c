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
		free(head->str);
		free(head->next);
		free(head);
	}
}
