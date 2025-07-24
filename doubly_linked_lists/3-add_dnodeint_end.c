#include "lists.h"
#include <stdlib.h>

/**
 *add_dnodeint_end - agrega un nuevo nodo al final de la lista
 *@head: puntero a puntero de head
 *@n: es un const int
 *Return: NULL o new
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	h = *head;
	while (h->next != NULL)
		h = h->next;
	h->next = new;
	new->prev = h;

	return (new);
}
