#include "main.h"

/**
 *_strcpy - copy the contents of one string to another.
 *@dest: is the dest
 *@src: is the source string to be copied.
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, n = 98;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
