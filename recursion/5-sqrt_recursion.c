#include "main.h"

/**
 *square - is the secundari main function
 *@n: is an int
 *@i: is an int
 *Return: square
 */

int square(int n, int i)
{
	if (n * n == i)
	{
		return (n);
	}
	if (n * n > i)
	{
		return (-1);
	}
	return (square(n + 1, i));
}
/**
 *_sqrt_recursion - is the main function
 *@n: is an int
 *Return: square
 */
int _sqrt_recursion(int n)
{
	return (square(1, n));
}
