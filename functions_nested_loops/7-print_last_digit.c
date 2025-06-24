#include "main.h"

/**
 * print_last_digit - is the main function
 * @r: is an int
 * Return: the value of the last digit
 */

int print_last_digit(int r)
{
	int ld;
	/*imprime el ultimo digito*/
	ld = r % 10;

	if (ld < 0)
	{
	/*para que de positivo siempre*/
	ld = -ld;
	}
	/**
	 * iguala a la tabala ASCII para que devuelva un numero
	 * y no una letra, porque putchar devuelve de la tabla
	 */
	_putchar (ld + '0');
	return (ld);
}
