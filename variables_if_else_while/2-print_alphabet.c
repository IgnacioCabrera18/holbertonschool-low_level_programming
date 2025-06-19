#include <stdio.h>

/**
 *main - is the main function
 *Return: returns to zero
 */

int main(void)
{
	char alphabet;
/**
 * for es un bucle, en este caso repite y va sumando letras hasta la z
 * luego de que llegue a la z continua con lo siguiente que seria \n
 */
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	putchar(alphabet);
/*putchar es parecido a printf solo que no se escribe en la misma linea*/
	putchar('\n');
	return (0);
}
