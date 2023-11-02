#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - A function that create a 2 dimmensional
 * array of integer
 * @width: width of the 2 dimensional array
 * @height: height of the 2 dimensional array
 *
 * Return: A pointer to the created array
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, l;
	

	if (height <= 0 || width <= 0)
		return (NULL);
	ar = (int **)malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);
	for (l = 0; l < height; l++)
	{
		ar[l] = (int *)malloc(sizeof(int) * width);
		if (ar[l] == NULL)
		{
			free(ar);
			for (i = 0; i <= l; i++)
				free(ar[i]);
			return (NULL);
		}
		for (i = 0; i < width; i++)
		{
			ar[l][i] = 0;
		}
	}
	return (ar);
}
