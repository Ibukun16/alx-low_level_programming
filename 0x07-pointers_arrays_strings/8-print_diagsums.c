#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - A function that prints the two diagonals of
 * a square matrix of integers
 * @a: The matrix in focus
 * @size: size of the matrix
 * Return: sum of the 2 diagonals of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int d = 0;
	unsigned int sd1, sd2;

	sd1 = 0;
	sd2 = 0;
	while (d < size)
	{
		sd1 += *(a + (size * d + d));
		sd2 += *(a + (size * d + size - (d + 1)));
		d++;
	}
	printf("%d, %d\n", sd1, sd2);
}
