#include "lists.h"

/**
 *get_dnodeint_at_index - retornar el nodo
 *@head: encabezado de la lista
 *@index:indice del nodo
 *Return: head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
