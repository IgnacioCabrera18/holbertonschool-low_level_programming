#include "lists.h"
#include <stdio.h>

/**
 *print_dlistint - imprime ints de la lista
 *@h: puntero al encabezado de la lista
 *Return: i
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;
	const dlistint_t *elements = h;

	while (elements != NULL)
	{
		printf("%d\n", elements->n);
		elements = elements->next;
		i++;
	}
	return (i);
}
