#include "lists.h"

/**
 *dlistint_len - retornar el largo de la lista
 *@h: puntero al encabezado de la lista
 *Return: elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
