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
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	a = malloc(sizeof(char));
	for (i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
