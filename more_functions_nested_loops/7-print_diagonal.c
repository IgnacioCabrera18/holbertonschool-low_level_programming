#include "main.h"

/**
 *print_diagonal - is the main function
 *@n: is an int
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');

	_putchar('\\');
	_putchar('\n');
	}
}
