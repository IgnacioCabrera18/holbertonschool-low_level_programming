#include "main.h"

/**
 *_puts - is the main function
 *@str: Calculates the string length.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
