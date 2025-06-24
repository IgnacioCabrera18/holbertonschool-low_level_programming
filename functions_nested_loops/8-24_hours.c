#include "main.h"

/**
 *jack_bauer - is the main function
 *Return: void
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/**
			 * /10 divide entre 10
			 * y imprime el resultado
			 * 1/10 seria 0, 10/10 seria 1
			 * +0 por la tabla ASCII
			 * para que imprima numero y no letra
			 */
			_putchar ((hour / 10) + '0');
			_putchar ((hour % 10) + '0');
			_putchar (':');
			_putchar ((minute / 10) + '0');
			_putchar ((minute % 10) + '0');
			_putchar ('\n');
		}
	}
}
