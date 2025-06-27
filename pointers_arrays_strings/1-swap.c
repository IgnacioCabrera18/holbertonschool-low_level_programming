#include "main.h"

/**
 *swap_int - is the main function
 *@a: is an int
 *@b: is an int
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
