#include "main.h"

/**
 *_memset - is the main function
 *@s: is a pointer
 *@b: is a constant byte
 *@n: bytes of the memory
 *Return: return s,  a constant byte.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
