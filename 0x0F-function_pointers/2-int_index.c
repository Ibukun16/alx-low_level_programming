#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - A function that searches for an integer
 * @array: The array of integers
 * @size: The size of the array
 * @cmp: Pointer to the function that compare the integers
 *
 * Return: 1 for successful execution, else -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array && size > 0 && cmp)
		for (n = 0; n < size; n++)
			if (cmp(*(array + n)) > 0)
				return (n);
	return (-1);
}
