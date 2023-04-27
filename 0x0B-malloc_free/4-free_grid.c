#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees memory allocation
 *@grid: the pointer to two dimensional array
 *@height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
