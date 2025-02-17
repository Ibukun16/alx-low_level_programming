#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * and terminate on a new line
 * @n: number of elements
 * @a: pointer
 *
 * Return: Always a success.
 */
void print_array(int *a, int n)
{
	int l = 0;

	while (l < n)
	{
		printf("%d", a[l]);
		l++;
		if (l < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
