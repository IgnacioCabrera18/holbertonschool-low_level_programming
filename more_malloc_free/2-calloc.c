#include "main.h"
#include <stdlib.h>

/**
 *_calloc - se utiliza para alocar memoria dinámica y además inicializarla 0
 *@nmemb: El número de elementos que sequiere almacenar enelbloque dememoria
 *@size: El tamaño en bytes de cada elemento del arregl
 *Return: NULL o a
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	/*establece la memoria asignada en 0*/
	for (i = 0; i < (nmemb * size); i++)
	{
		a[i] = 0;
	}
	return (a);
}
