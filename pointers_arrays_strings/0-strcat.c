#include "main.h"

/**
 *_strcat - is the main function
 *@dest: is the dest
 *@src: is indicate the origin
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	/*encuentra el final de dest*/
	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	/*copia src al final de dest*/
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
