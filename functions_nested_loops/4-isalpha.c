#include "main.h"
#include <ctype.h>
/**
 *_isalpha - is the main function
 *@c: returns 1 if c is a letter, lowercase or uppercase
 *Return: returns 1 if c is a letter,lowercase or uppercase,Returns 0 otherwise
 */

int _isalpha(int c)
{
	/**
	 * no es necesario especificar nada
	 * el valor de isalpha ya se especifico en 4-main.c
	 */
	if (isalpha(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
