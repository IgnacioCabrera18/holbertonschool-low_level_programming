#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - is the main function
 * Return: returns to zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("n is positive%d\n", n);
	else if (n == 0)
		printf("n is zero%d\n", n);
	else
		printf("n is negative%d\n", n);
	return (0);
}
