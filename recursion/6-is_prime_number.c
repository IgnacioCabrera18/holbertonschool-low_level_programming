#include "main.h"

/**
 *
 *
 */

int _primo(int test, int primo)
{
	if (primo == test)
	{
		return (1);
	}
	else if (primo % test == 0 || primo < 2)
	{
		return (0);
	}
	return (_primo(test + 1, primo));
}

int is_prime_number(int n)
{
	return (_primo(2,n));
}
