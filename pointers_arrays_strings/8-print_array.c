#include "main.h"
#include <stdio.h>

/**
 *print_array - is the main function
 *@a: is an aray
 *@n: is [n]
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i < 4)
		{
			printf("%d, ", a[i]);
		}
		else if (i == 4)
		{
			printf("%d\n", a[i]);
		}
	}
}
