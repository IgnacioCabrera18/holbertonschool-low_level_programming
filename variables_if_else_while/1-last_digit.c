#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - is the main function
 *Return: returns to zero
 */
int main(void)
{
	int n, ultimoN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ultimoN = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ultimoN);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, ultimoN);
	else if (n < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultimoN);

	return (0);
}
