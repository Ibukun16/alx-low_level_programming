#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - creates an array of integers
 * @min: The minimum range of value
 * @max: The maximum range of value
 *
 * Return:pointer to the array of integer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, n;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	ptr = malloc(sizeof(int) * n);
	if (ptr == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		ptr[a] = min++;
	return (ptr);
}
