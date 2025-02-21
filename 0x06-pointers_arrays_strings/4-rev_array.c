#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function that reverses the content of an array of integer.
 * @a: Pointer to the array.
 * @n: The number of the integers.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, count;

	for (count = 0; count < n / 2; count++)
	{
		tmp = a[count];
		a[count] = a[n - count - 1];
		a[n - count - 1] = tmp;
	}
}
