#include "main.h"

/**
 *_memcpy - is the main function
 *@dest: is the dest
 *@src: is a string
 *@n: bytes of the memory
 *Return: return des
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
