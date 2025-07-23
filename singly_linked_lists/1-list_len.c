#include "lists.h"
#include <stdio.h>

/**
 *list_len - devuelve los numeros de elementos
 *@h: puntero al head de la lista
 *Return: nodos
 */

size_t list_len(const list_t *h)
{
	int nodos = 0;

	while (h != NULL)
	{
		nodos++;
		h = h->next;
	}
	return (nodos);
}
