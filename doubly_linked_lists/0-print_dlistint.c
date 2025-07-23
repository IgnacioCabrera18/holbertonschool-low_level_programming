#include "lists.h"
#include <stdio.h>

/**
 *print_dlistint - imprime ints de la lista
 *@h: puntero al encabezado de la lista
 *Return: i
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
