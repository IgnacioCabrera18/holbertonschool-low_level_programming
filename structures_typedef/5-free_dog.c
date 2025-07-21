#include "dog.h"
#include <stdlib.h>

/**
 *d: es un puntero a la estructura de dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		free(d);
}
