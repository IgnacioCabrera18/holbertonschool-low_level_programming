#include "main.h"
#include <string.h>
/**
 *_strcmp - is the main function
 *@s1: is an str
 *@s2: is an str
 *Return: *s1 - *s2
 */

int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
	{
		;
	}
	return (*s1 - *s2);
}
