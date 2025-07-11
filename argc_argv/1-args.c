#include <stdio.h>

/**
 *main- isthe main function
 *@argc: contiene el numero total de argumentos
 *@argv: array de punteros de caracteres
 *Return: main
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
