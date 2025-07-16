#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	a = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		continue;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		continue;
	a = malloc(sizeof(char) * (len1 + len2 + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		a[i] = s1[i];
	/*corta cuando sea NULL o sea menor a n*/
	for (j = 0; s2[j] != '\0' && j < n; j++)
		a[i + j] = s2[j];

	a[i + j] = '\0';
	return (a);
}
