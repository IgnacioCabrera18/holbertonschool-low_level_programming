#include "main.h"

/**
 *print_most_numbers - is the main function
 *Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		else
		{
		}
	}
	_putchar('\n');
}
