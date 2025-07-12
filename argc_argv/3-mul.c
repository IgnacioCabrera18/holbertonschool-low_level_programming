#include <stdio.h>
#include <stdlib.h>

/**
 *main - is the main function
 *@argc: contiene el numero total de argumentos
 *@argv: array de punteros de caracteres
 *Return: main
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
