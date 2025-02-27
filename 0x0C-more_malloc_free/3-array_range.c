#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers
 * @min: The minimum value of integer variable
 * @max: The maximum value of integer variable
 *
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, count;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);

	for (count = 0; min <= max; count++)
		arr[count] = min++;
	return (arr);
}
