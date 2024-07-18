#include "search_algos.h"

/**
 * linear_search - A function that uses Linear search algorithm to
 * search for a value in an array of integers
 * @array: a pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: -1 for null array or value not found,
 * else index to location of value.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (array == NULL)
		return (-1);

	while (n < size)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
		if (value == array[n])
			return (n);
		n++;
	}
	return (-1);
}
