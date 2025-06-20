#include "main.h"

/**
 *main - is the main function
 *Return: returns to zero
 */

/**
 *no se escribe main porque este ejercico es escribir una funcion
 *se arega main cuando es un programa y en este caso no lo es
 *no es necesario agregar return 0
 *ya que el primer void sinifica sin retorno
 *y el ultimo que no devuelve nada
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	_putchar(alphabet);

	_putchar('\n');
}
