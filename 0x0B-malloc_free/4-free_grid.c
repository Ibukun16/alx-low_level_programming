#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A function that fee memory space created for
 * 2 dimensional grid
 * @height: The height of the array
 * @grid: grid of the array
 *
 * Return: The freed memory space
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == 0 || height == 0)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
