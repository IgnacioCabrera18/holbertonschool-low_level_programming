#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *
 *
 *
 */

char *cp_str(char *s)
{
	int i, len;
	char *a;

	for (len = 0; s[len] != '\0'; len++)
		;
	a = malloc(len + 1);
	if (a == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		a[i] = s[i];
	return (a);
}

/**
 *
 *
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = cp_str(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = cp_str(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;

	return (d);
}
/*tamien lo hice asi pero el checker no dejo :)*/
/*dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *cp_name, *cp_owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);*/
	/*cp_name tendra el mismo espacio de memoria que name + NULL*/
	/*cp_name = malloc(sizeof(name) + 1);
	if (cp_name == NULL)
	{
		free(d);
		return (NULL);
	}*/
	/*strcpy copia name en cp_name*/
	/*copia la string mas el caracter NULL*/
	/*strcpy(cp_name, name);*/
	/*cp_owner tendra el mismo espacio de memoria que owner + NULL*/
	/*cp_owner = malloc(sizeof(owner) + 1);
	if (cp_owner == NULL)
	{
		free(d);
		free(cp_name);
		return (NULL);
	}*/
	/*ya explique que hace strcpy*/
	/*strcpy(cp_owner, owner);

	d->name = cp_name;
	d->age = age;
	d->owner = cp_owner;
	
	return (d);
}*/
