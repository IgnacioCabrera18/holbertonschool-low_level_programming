#include "main.h"
#include <ctype.h>
/**
 *_islower - is the main function
 *@c: returns 1 if c is lowercase
 *Return: 1 if 'c' is a lowercase letter, 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
