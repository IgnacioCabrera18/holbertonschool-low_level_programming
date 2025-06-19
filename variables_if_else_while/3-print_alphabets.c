#include <stdio.h>

/**
 *main - is the main function
 *Return: returns to zero
 */

int main(void)
{
	char alphabet;
	/*al ser un caracter individual se escribe con comillas simples*/
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	putchar(alphabet);
	/*una vez termine el primer for sigue con el segundo for*/
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	putchar(alphabet);

	putchar('\n');
	return (0);
}
