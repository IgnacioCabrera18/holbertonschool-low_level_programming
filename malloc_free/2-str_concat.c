#include "main.h"
#include <stdlib.h>

/**
 *str_concat - conectar dos string
 *@s1: primer str
 *@s2: segundo str
 *Return: NULL o s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, j, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
		{
			continue;
		}
	}
	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
		{
			continue;
		}
	}
	/* largo de ambos string mas NULL*/
	a = malloc(sizeof(char) * (len1 + len2 + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		a[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j] = '\0';
	return (a);
}
