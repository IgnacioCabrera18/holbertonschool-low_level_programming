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

	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
		{
			continue;
		}
	}
	else
	{

	}
	if (s2 != NULL)
	{
		/*corta antes de n bytes de memoria*/
		/*por eso no imrpime toda la str*/
		for (len2 = 0; s2[len2] != '\0' && len2 < n; len2++)
		{
			continue;
		}
	}
	a = malloc(sizeof(char) * (len1 + n + 1));
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
