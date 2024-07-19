#include "search_algos.h"

/**
 * jump_search - a function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value:  the value to search for
 *
 * Return:  the first index where value is located else -1
 */
int jump_search(int *array, size_t size, int value)
{
	int n, m, c, prv;

	if (array == NULL || size == 0)
		return (-1);
	m = (int)sqrt((double)size);
	c = 0;
	prv = n = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", n, array[n]);

		if (array[n] == value)
			return (n);
		c++;
		prv = n;
		n = c * m;
	} while (n < (int)size && array[n] < value);
	printf("Value found between indexes [%d] and [%d]\n", prv, n);
	for (; prv <= n && prv < (int)size; prv++)
	{
		printf("Value checked array[%d] = [%d]\n", prv, array[prv]);
		if (array[prv] == value)
			return (prv);
	}
	return (-1);
}
