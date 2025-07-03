#include "main.h"

/**
 *_strncpy - is the main function
 *@dest: is the dest
 *@src: is indicate the origin
 *@n: is an int
 *Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
