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
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
	{
		;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
