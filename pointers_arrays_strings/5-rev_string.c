#include "main.h"

/**
 *rev_string - is the main function
 *@s: is str
 */

void rev_string(char *s)
{
	int i, j = 0;
	char a[10];
	/*imprime el primer str*/
	for (i = 0; s[i]; i++)
		;
	/*espesificamos que lo lea al revez*/
	i -= 1;

	for (; s[i]; i--)
	{
		a[j] = s[i];
		j++;
	}
	/*lo sobreescribe y imprime*/
	for (i = 0; s[i]; i++)
		s[i] = a[i];
}
