#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplica un string
 *@str: string a duplicar
 *Return: NULL o a
 */

char *_strdup(char *str)
{
	char *a;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	/*recorre el largo de la str*/
	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}
	/*asigna el largo de la str (+1 por el caracter NULL)*/
	a = malloc(sizeof(char) * len + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
