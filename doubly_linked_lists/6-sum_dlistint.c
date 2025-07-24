#include "lists.h"

/**
 *sum_dlistint - retornar la suma de todos los datos
 *@head: puntero a head
 *Return: 0 o sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *i;

	i = head;

	if (head == NULL)
		return (0);
	while (i != NULL)
	{
		sum = sum + i->n;
		i = i->next;
	}
	return (sum);
}
