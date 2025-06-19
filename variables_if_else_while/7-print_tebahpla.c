#include <stdio.h>

/**
 *main - is the main function
 *Return: returns to zero
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	putchar(alphabet);

	putchar('\n');
	return (0);
}
