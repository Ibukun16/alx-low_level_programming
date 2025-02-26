#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that free memory space already created.
 * @grid: Pointer to the grid space
 * @height: The height of the array
 *
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL || height == 0)
		return;
	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
