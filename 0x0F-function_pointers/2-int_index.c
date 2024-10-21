#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - The function that searches for integer
 * @array: The array to iterate over
 * @size: The size of the array
 * @cmp: pointer to the array to compare values
 *
 * Return: Index to the first element in the array where
 * the cmp function does not return 0 where no element match,
 * else -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;
	if (array && cmp)
	{
		for (n = 0; n < size; n++)
		{
			if (cmp(array[n]) != 0)
				return (n);
		}
	}
	return (-1);
}
