#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *cp_str - funcion encargada de copiar un str
 *@s: es un str
 *Return: a
 */

char *cp_str(char *s)
{
	int i, len;
	char *a;
	/*largo del str hasta NULL*/
	for (len = 0; s[len] != '\0'; len++)
		;
	/*el espacio de memoria de a sera igual al largo del str + NULL*/
	a = malloc(len + 1);
	if (a == NULL)
		return (NULL);
	/*copia cada caracter*/
	for (i = 0; i <= len; i++)
		a[i] = s[i];
	return (a);
}

/**
 *new_dog - es la funcion principal
 *@name: es el nombre del perro
 *@age: es la edad del perro
 *@owner: es el propietario del perro
 *Return: NULL o d
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	/*funciona similar a strcpy*/
	/*copia la str de name en una nueva incluyendo NULL*/
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
