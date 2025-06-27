#include "main.h"
#include <string.h>

/**
 *_strlen - is the main function
 *@s: is strlen
 *Return: i
 */

int _strlen(char *s)
{
	int i;
	/*realiiza strlen que en este caso es s (ya que llama a la funcion)*/
	for (i = 0; s[i] != '\0'; i++)
		/*; para que se ejecute for*/
		;
	return (i);
}
