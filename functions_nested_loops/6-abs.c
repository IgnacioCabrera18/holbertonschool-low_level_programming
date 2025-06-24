#include "main.h"
#include <stdio.h>

/**
 *_abs - is the main function
 *@r: is a int
 *Return: r
 */

int _abs(int r)
{
	if (r < 0)
	{
	/**
	 * escribir -r significa que
	 * se devuelve lo contrario a r, es decir
	 * si es negativo devuelve positivo
	 */
	return (-r);
	}
	else
	{
	return (r);
	}
}
