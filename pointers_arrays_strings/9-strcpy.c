#include "main.h"

/**
 *_strcpy - copy the contents of one string to another.
 *@dest: is the dest
 *@src: is the source string to be copied.
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
