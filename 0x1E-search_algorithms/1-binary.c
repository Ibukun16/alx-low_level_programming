 #include "search_algos.h"

/**
 * binary_search - A fucntion that searches for a value in a sorted array
 * using Binary search algorithm.
 *
 * @array: Pointer to the first element of the array to search
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: index to the array where value is located, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int c, n, l = 0, t = size - 1;

	if (array == NULL)
		return (-1);
	while (l <= t)
	{
		c = (l + t) / 2;
		printf("Searching in array: ");
		for (n = l; n <= t; n++)
			printf("%i%s", array[n], n == t ? "\n" : ", ");

		if (array[c] < value)
			l = c + 1;
		else if (array[c] > value)
			t = c - 1;
		else
			return (c);
	}
	return (-1);
}
