#include <stdio.h>

/**
 *main - is the main function
 *Return: returns to zero
 */

int main(void)
{
	int num = 0;
	/*bucle se repite hasta que num sea menor que diez*/
	while (num < 10)
	{
	/**
	 *imprime num +cero lo cual da cero por eso se empieza por el cero
	 *se imprime segun el resultado de su caracter ASCII equivalente
	 *num+'cero' quiere decir cero+cuarentaiocho que da como resultado cero
	 *ya que cuarentaiocho es cero
	 *si num fuera uno seria uno*cuarentaiocho que da como resultado uno
	 *poque uno en su caracter ASCII es cuarentainueve
	 *y asi sucesibamente, si no se aplicara no serian visibles o utiles
	 */
	putchar(num + '0');
	/*si num es menor a nueve imprime coma y espacio para separar los numeros*/
	if (num < 9)
	{
	putchar(',');
	putchar(' ');
	}
	/*suma uno a num para seguir con el bucle*/
	num++;
	}
	putchar('\n');

	return (0);
}
