#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - A function that searches for integer
 * @array: Array to search through
 * @size: Size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: Index of the first element for which the function
 * does not return 0. return -1 if invalid size or no match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
