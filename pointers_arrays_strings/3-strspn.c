#include "main.h"

/**
 *_strspn - is the main function
 *@s: is a pointer
 *@accept: is a pointer
 *Return: return leng
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, leng = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				leng++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (leng);
		}
	}
	return (leng);
}
