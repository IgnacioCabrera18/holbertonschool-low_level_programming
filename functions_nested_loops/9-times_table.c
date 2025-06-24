#include "main.h"
#include <stdio.h>

/**
 *times_table - is the main function
 *Return: void
 */

void times_table(void)
{
	int x, y, multiplicar;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			multiplicar = x * y;

			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (multiplicar < 10)
					_putchar(' ');
			}
			if (multiplicar >= 10)
			{
				_putchar((multiplicar / 10) + '0');
				_putchar((multiplicar % 10) + '0');
			}
			else
			{
				_putchar(multiplicar + '0');
			}
		}
		_putchar('\n');
	}
}
