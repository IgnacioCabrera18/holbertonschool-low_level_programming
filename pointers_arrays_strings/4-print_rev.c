#include "main.h"

/**
 *print_rev - is the main function
 *@s: Calculates the string length.
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		continue;
	/*-= es lo mismo que decir i - 1*/
	i -= 1;
	/*inicia otro bucle que lee al revez y imprime*/
	for (; s[i]; i--)
		_putchar(s[i]);

	_putchar ('\n');
}
