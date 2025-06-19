#include <stdio.h>

/**
 *main - is the main function
 *Return: returns to zero
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
	putchar(num + '0');
	if (num < 9)
	{
	putchar(',');
	putchar(' ');
	}
	num++;
	}
	putchar('\n');

	return (0);
}
