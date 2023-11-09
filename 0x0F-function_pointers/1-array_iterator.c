#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator - A programme that executes a function
 * given as a parameter on each element of an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size <= 0)
		return;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
