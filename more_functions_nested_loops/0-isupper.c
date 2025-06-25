#include "main.h"
#include <ctype.h>

/**
 *_isupper - is the main function
 *@c: is an char
 *Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
