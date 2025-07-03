#include "main.h"

/**
 *reverse_array - is the main function
 *@a: is an int
 *@n: is an int
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (j = 0; j < ((n - 1) / 2); j++)
	{
		i = a[j];
		a[j] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
