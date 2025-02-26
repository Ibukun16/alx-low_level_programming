#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - A function create a 2 dimensional array of integers
 * @width: The width of the matrix array
 * @height: The height of the matrix array
 *
 * Return: A pointer to the 2 dimensional array (success) or NULL (failure)
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int l, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	matrix = (int **) malloc(sizeof(int *) * height);

	if (matrix == NULL)
		return (NULL);

	for (l = 0; l < height; l++)
	{
		matrix[l] = (int *) malloc(sizeof(int) * width);
		if (matrix[l] == NULL)
		{
			free(matrix);
			for (b = 0; b <= l; b++)
				free(matrix[b]);
			return (NULL);
		}
	}

	for (l = 0; l < height; l++)
		for (b = 0; b < width; b++)
			matrix[l][b] = 0;
	return (matrix);
}

