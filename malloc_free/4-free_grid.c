#include "main.h"
#include <stdlib.h>

/**
 *free_grid - liberar memoria
 *@grid: malloc a liberar
 *@height: es el alto
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
