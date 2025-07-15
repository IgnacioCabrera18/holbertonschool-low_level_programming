#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - exit si falla
 *@b: memoria a asignarle a a
 *Return: a
 */

void *malloc_checked(unsigned int b)
{
	char *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
