#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */

int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
	{
		return (NULL);
	}
	/**
	 *max-min limitan el rango de valores
	 *+1 para que haya espacio suficiente para todos
	 *los elementos de [min, max]
	 */
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
	{
		return (NULL);
	}
	/*ordena a desde min hasta max*/
	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}
	return (a);
}
