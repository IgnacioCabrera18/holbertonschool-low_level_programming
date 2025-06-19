#include <stdio.h>

/**
 * main - is the main function
 * Return: returns to zero
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	/*al escribir != excluye las letras seleccionadas*/
	if (alphabet != 'q' && alphabet != 'e')
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
