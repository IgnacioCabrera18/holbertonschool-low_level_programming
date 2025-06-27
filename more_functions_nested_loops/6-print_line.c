#include "main.h"

/**
 *print_line - is the main function
 *@n: is an int
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		/*return para salir de la funcion inmediatamente y no imprima mÃs*/
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
