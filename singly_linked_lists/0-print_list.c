#include "lists.h"
#include <stdio.h>

/**
 *
 *
 *
 */

size_t print_list(const list_t *h)
{
	size_t nodos = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		/*avanza al siguiente nodo*/
		h = h->next;
		/*aumenta el contador de nodos*/
		nodos++;
	}
	return (nodos);
}
