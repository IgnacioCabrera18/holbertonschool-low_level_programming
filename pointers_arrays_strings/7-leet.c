#include "main.h"

/**
 *leet - is the main function
 *@s: is an pointer of the string
 *Return: return s
 */

char *leet(char *s)
{
	int i, j;
	char array1[] = "aAeEoOtTlL";
	char array2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; array1[j] != '\0'; j++)
		{
			if (s[i] == array1[j])
			{
				s[i] = array2[j];
			}
		}
	}
	return (s);
}
