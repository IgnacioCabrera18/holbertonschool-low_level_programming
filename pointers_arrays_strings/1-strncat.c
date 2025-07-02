#include "main.h"

/**
 *_strncat - is the main function
 *@dest: is the dest
 *@src: is indicate the origin
 *@n: is an int
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
