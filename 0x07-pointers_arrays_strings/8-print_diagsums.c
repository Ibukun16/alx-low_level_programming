#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: Pointer to the integer variable
 * @size: The size of the matrix
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int idx;
	unsigned int sum1 = 0, sum2 = 0;

	for (idx = 0; idx < size; idx++)
	{
		sum1 += *(a + idx * size + idx);
		sum2 += *(a + idx * size + (size - idx - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
