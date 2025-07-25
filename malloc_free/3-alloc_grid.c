#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: is the width
 *@height: is the height
 *Return: NULL o a
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(a + i) = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i = width; i >= 0; i--)
			{
				free(a[i]);
			}
			free(a);
			a = NULL;
			return (a);
		}
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
