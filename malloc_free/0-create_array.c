#include "main.h"
#include <stdlib.h>

/**
 *create_array - crear una array con un tama√o espesifico
 *@size: tama√±o de memoria a imprimir
 *@c: imprime size
 *Return: NULL o array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
