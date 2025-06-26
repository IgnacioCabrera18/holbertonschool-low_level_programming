#include "main.h"

/**
 *more_numbers - is the main function
 *Return: nothing
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				/**
					*imprime 1 asi se pueden imprimir numeros del 10 al 14
					ya que la tabala ascii no lo permite como tal
					*/
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}
	_putchar('\n');
	}
}
