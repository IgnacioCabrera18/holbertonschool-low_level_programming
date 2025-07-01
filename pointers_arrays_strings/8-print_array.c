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

	for (i = 0; i < n; i++)
	{
		/*n -1 quiere decir el ultimo numero*/
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
