#include "lists.h"
#include <stdlib.h>

/**
 *add_dnodeint - agrega nuevoo nodo alfinal de la lista
 *@head: puntero a puntero de head
 *@n: es un const int
 *Return: NULL o new
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	h = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->prev = NULL;
	new->n = n;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new->next = h;
	if (h != NULL)
		h->prev = new;

	*head = new;

	return (new);
}
