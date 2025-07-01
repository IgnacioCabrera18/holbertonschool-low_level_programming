#include "main.h"
#include <stdio.h>

/**
 *print_array - is the main function
 *@a: is an aray
 *@n: is [n]
 */

void print_array(int *a, int n)
{
	n = 0;
	while (n <= 5000)
	{
		if (n < 4)
		{
			printf("%d, ", a[n]);
		}
		else if (n == 4)
		{
			printf("%d\n", a[n]);
		}
		n++;
	}
}
