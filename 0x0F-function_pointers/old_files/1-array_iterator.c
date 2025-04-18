#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function
 * given as a parameter on each element of an array.
 *
 * @array: The array to iterate over
 * @size: The size of the array
 * @action: The pointer to the function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (!array || !action)
		return;

	for (n = 0; n < size; n++)
		action(array[n]);
}
