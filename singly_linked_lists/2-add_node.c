#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *add_node - agrega nuevo nodo al comienzo de la lista
 *@head: puntero al encabezado de la lista
 *@str: es el str
 *Return: NULL o new
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;

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
	new->next = *head;
	*head = new;
	return (new);
}
