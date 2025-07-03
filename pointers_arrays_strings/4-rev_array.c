#include "main.h"

/**
 *reverse_array - is the main function
 *@a: is an int
 *@n: is an int
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < ((n - 1) / 2); i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
