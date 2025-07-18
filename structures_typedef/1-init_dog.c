#include "dog.h"
#include <stddef.h>

/**
 *init_dog - inicia la estructura de dog
 *@d: estrudctura de dog
 *@name: es el nombre del perro
 *@age: es la edad del perro
 *@owner: es el propietario del perro
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
