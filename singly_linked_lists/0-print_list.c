#include "lists.h"
#include <stdio.h>

/**
 *print_list - printear lista
 *@h: puntero a un nodo de la lista list_t
 *Return: nodos
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
