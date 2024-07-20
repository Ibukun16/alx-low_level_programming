#include "search_algos.h"

/**
 * exponential_search - a function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm
 *
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value:  the value to search for
 *
 * Return: the first index where value is located else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t n = 0, high;

	if (!array || !value)
		return (-1);
	if (array[0] != value)
	{
		for (n = 1; n < size && array[n] <= value; n = n * 2)
			printf("Value checked array[%ld] = [%d]\n", n, array[n]);
	}
	high = n < size ? n : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", n / 2, high);
	return (binary_search_helper(array, n / 2, high, value));
}

/**
 * binary_search_helper - A fucntion that searches for a value
 *			in a sorted of integers using binary search.
 * @array: A pointer to the first element of the array to search.
 * @high: The last index of the sub-array to search
 * @low: The first index of the sub-array to search
 * @value: The value to search for
 *
 * Return: index to where the value is located else -1
 */
int binary_search_helper(int *array, size_t low, size_t high, int value)
{
	size_t c;

	if (!array)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (c = low; c < high; c++)
			printf("%d, ", array[c]);
		printf("%d\n", array[c]);

		c = low + (high - low) / 2;
		if (array[c] == value)
			return (c);
		if (array[c] > value)
			high = c - 1;
		else
			low = c + 1;
	}
	return (-1);
}

