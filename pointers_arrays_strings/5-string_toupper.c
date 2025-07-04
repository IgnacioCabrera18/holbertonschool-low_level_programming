#include "main.h"
#include <ctype.h>

/**
 *string_toupper - is the main function
 *@str: is an pointer of the string
 *Return: str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/**
			 *-32 por la tabla ascii para que devuelva mayuscula
			 *a=97 - 32 = A=65
			 *b=98 - 32 = A=66 y asi
			 */
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
