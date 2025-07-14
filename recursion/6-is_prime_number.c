#include "main.h"

/**
 *_primo - is the second main function
 *@test: is the test
 *@primo: is the num primo
 *Return: 0 or 1
 */

int _primo(int test, int primo)
{
	if (primo == test)
	{
		return (1);
	}
	else if (primo % test == 0 || primo < 2)
	{
		return (0);
	}
	return (_primo(test + 1, primo));
}
/**
 *is_prime_number - is thr main function
 *@n: is an int
 *Return: the second main function
 */
int is_prime_number(int n)
{
	return (_primo(2, n));
}
