#include <stdio.h>

/**
 *main - is the main function
 *@argc: contiene el numero total de argumentos
 *@argv: array de punteros de caracteres
 *Return: main
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
