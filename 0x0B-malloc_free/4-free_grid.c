#include "main.h"
#include <stdlib.h>
/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: expected to be freed
 * @height: height of grid
 *
 * Return: Always (0)
 */
void free_grid(int **grid, int height)
{
	int f = 0;

	while (f < height)
	{
		free(grid[f]);
		f++;
	}

	free(grid);
}
