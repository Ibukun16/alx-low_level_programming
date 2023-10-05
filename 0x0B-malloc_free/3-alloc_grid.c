#include "main.h"
#include <stdlib.h>
/**
 * *alloc_grid - a function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: The first set of integer
 * @height: The second set of integer
 *
 * Return: A pointer to a 2 dim array
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, l;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < height)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			l = 0;
			while (l < i)
			{
				free(array[l]);
				l++;
			}
			return (NULL);
		}
		i++;
	}

	for (i = 0; i < height; i++)
	{
		for  (l = 0; l < width; l++)
		{
			array[i][l] = 0;
		}
	}
	return (array);
}
