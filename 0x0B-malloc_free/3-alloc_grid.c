#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional array
 * @width: The integer variable representing the width of the array
 * @height: The integer variable representing the height of the array
 *
 * Return: NULL for failure, else pointer to the 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		*(arr + h) = (int *) malloc(sizeof(int) * width);
		if (*(arr + h) == NULL)
		{
			for (w = 0; w < h; w++)
				free(*(arr + w));
			free(arr);
			return (NULL);
		}
		for (w = 0; w < width; w++)
			arr[h][w] = 0;
	}
	return (arr);
}
