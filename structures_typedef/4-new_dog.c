#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *cp_name, *cp_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	/*cp_name tendra el mismo espacio de memoria que name + NULL*/
	cp_name = malloc(sizeof(name) + 1);
	if (cp_name == NULL)
	{
		free(d);
		return (NULL);
	}
	/*strcpy copia name en cp_name*/
	/*copia la string mas el caracter NULL*/
	strcpy(cp_name, name);
	/*cp_owner tendra el mismo espacio de memoria que owner + NULL*/
	cp_owner = malloc(sizeof(owner) + 1);
	if (cp_owner == NULL)
	{
		free(d);
		free(cp_name);
		return (NULL);
	}
	/*ya explique que hace strcpy*/
	strcpy(cp_owner, owner);

	d->name = cp_name;
	d->age = age;
	d->owner = cp_owner;
	
	return (d);
}
