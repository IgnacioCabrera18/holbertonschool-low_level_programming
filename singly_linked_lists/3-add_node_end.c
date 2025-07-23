#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - agrega un nuevo nodo al final de la lista
 *@head: puntero al encabezado de la lista
 *@str: es un str
 *Return: NULL o new
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;

	list_t *tail = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new;
	}
	return (new);
}
