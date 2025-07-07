#include "main.h"
#include <stddef.h>

/**
 *_strchr - is the main function
 *@s: is a pointer
 *@c: is a c haha
 *Return: return c or NULL
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
