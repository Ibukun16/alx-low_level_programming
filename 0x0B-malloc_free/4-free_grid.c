#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - A function that frees 2 dimensional grid previously created
 * @grid: The 2 dimentional grid previously created
 * @height: The integer variable repesenting the height of the grid
 *
 * Return: The freed 2 dimensional array
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL || height == 0)
		return;

	for (h = 0; h < height; h++)
		free(*(grid + h));
	free(grid);
}
