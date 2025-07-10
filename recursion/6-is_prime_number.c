#include "main.h"

/**
 *
 *
 */

int is_prime_number(int n)
{
	if (n % n == 0 && n % 1 == 0)
	{
		return (1);
	}
	else if (n != 1)
	{
		return (0);
	}
}
