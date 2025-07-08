#include "main.h"

/**
 *_strstr - is the main function
 *@haystack: is a pointer
 *@needle: is a pointer
 *Return: return haystack / '\0'
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
