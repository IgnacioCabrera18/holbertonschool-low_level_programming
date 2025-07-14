#include <stdio.h>
#include <stdlib.h>

/**
 *main - is the main function
 *@argc: contiene el numero total de argumentos
 *@argv: array de punteros de caracteres
 *Return: return main
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 47 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (0);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
