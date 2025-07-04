#include "main.h"
#include <stdio.h>

/**
 *cap_string - is the main function
 *@s: is an pointer of the string
 *Return: return s
 */

char *cap_string(char *s)
{
	int i, j;
	char array[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		/*si la primera letra fuera minusucula la cambia a mayuscula*/
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		if (s[i - 1] >= 'a' && s[i - 1] <= 'z')
			/*continue skipea lo siguiente si se cumple if*/
			continue;
		/*recorre la array*/
		for (j = 0; array[j] != '\0'; j++)
		{
			/**
			 *si antes de la letra hay un separador y esa letra es minuscula
			 *la cambia a mayuscula
			 */
			if (s[i - 1] == array[j] && s[i] <= 'z' && s[i] >= 'a')
			{
				s[i] = s[i] - 32;
			}
		}
	}
	return (s);
}
