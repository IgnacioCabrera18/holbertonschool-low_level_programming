#include "main.h"
#include <stdio.h>

/**
 *main - is the main function
 *Return: nothing
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		/**
		 * % 15 si es multiplo de 3 y 5
		 * se podria poner tambien:
		 * i % 3 == 0 && i % 5 == 0
		 */
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i != 100 && i % 5 == 0)
			printf("Buzz ");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
