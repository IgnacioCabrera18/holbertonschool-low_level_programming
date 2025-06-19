#include <stdio.h>

/**
 *main - is the main function
 *Return: returns to zero
 */

int main(void)
{
	char alphabet;
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	putchar(numbers);

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	putchar(alphabet);

	putchar('\n');
	return (0);
}
