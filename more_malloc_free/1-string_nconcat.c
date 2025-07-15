#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - conectar dos strings
 *@s1: primer str
 *@s2: segundo str
 *@n: n bytes de memoria
 *Return: NULL o a
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; (s2[len2] != '\0' && len2 < n); len2++)
	{
		;
	}
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
	return (a);
}
