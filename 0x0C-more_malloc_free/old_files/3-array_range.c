#include "main.h"
#include <stdlib.h>

/**
 * *array_range - A function that creates an array of integers.
 *
 * @min: The minimum value of the integer.
 * @max: The maximum value of the integer.
 *
 * Return: A pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int size = max - min + 1, *array_mem, n;


	if (min > max)
		return (NULL);

	array_mem = malloc(sizeof(int) * size);
	if (array_mem == NULL)
		return (NULL);

	for (n = 0; min <= max; n++)
		array_mem[n] = min++;

	return (array_mem);
}
