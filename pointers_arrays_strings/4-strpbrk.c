#include "main.h"

/**
 *_strpbrk - is the main function
 *@s: is a pointer
 *@accept: is a pointer
 *Return: return s or '\0'
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
