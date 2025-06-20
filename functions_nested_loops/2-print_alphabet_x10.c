#include "main.h"

/**
 *print_alphabet_x10 - is the main function
 *Return: void
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int repetir = 0;
	/**
	 *al aplicar for dentro de while se aplica un bucle dentro de otro bucle
	 *una vez se cumpla for se vuelve a repetir lo mismo
	 *hasta completar la condicion de while
	 */
	while (repetir <= 9)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');

	repetir++;
	}

}
