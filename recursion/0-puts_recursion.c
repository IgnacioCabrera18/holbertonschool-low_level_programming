#include "main.h"

/**
 *_puts_recursion - is the main function
 *@s: is a pointer
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
