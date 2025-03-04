#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that executes a function given as
 * a parameter on each element of an array.
 * @array: Pointer to the array holding the elements
 * @size: The size of the array.
 * @action: Pointer to the function to be executed.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
