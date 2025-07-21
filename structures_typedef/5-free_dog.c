#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - liberar memoria
 *@d: es un puntero a la estructura de dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
