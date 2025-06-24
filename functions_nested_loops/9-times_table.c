#include "main.h"

/**
 *times_table - is the main function
 *Return: void
 */

void times_table(void)
{
	int nine;

	for (nine = 0; nine <= 81; nine = nine * 9)
	{
	_putchar (nine + '0');
	_putchar (',');
	_putchar (' ');
	}
	_putchar ('\n');
}
