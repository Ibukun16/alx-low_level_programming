#include "search_algos.h"

/**
 * advanced_binary - a function that searches for a value in a
 * sorted array of integers.
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 *
 * Return: the index where value is located else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	idx = recursion_search(array, size, value);

	if ((idx >= 0 && array[idx] != value) || !array)
		return (-1);
	return (idx);
}

/**
 * recursion_search - a function that searches for a value in an array
 * of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for
 *
 * Return: the index where value is located else -1
 */
int recursion_search(int *array, size_t size, int value)
{
	size_t n, avg = size / 2;

	if (!array || size == 0)
		return (-1);
	printf("Searching in array");
	for (n = 0; n < size; n++)
		printf("%s %d", (n == 0) ? ":" : ",", array[n]);
	printf("\n");
	if (avg && size % 2 == 0)
		avg--;
	if (value == array[avg])
	{
		if (avg > 0)
			return (recursion_search(array, avg + 1, value));
		return ((int)avg);
	}
	if (value < array[avg])
		return (recursion_search(array, avg + 1, value));
	avg++;
	return (recursion_search(array + avg, size - avg,  value) + avg);
}
