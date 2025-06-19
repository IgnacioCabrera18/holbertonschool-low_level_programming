#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - is the main function
 *Return: returns to zero
 */
int main(void)
{
	/*se agrerga el ultimoN como numero*/
	int n, ultimoN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * el %diez inidica que sera el ultimo digito
	 * en caso de ser %cien serian los ultimos dos digitos
	 */
	ultimoN = n % 10;
	if (ultimoN > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ultimoN);
	else if (ultimoN == 0)
		printf("Last digit of %d is %d and is 0\n", n, ultimoN);
	/**
	 * el && significa and,sirve para asignarle dos resultados a ultimoN
	 * el ! significa diferente a, como decir no es igual =
	 */
	else if (ultimoN < 6 && ultimoN != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultimoN);

	return (0);
}
