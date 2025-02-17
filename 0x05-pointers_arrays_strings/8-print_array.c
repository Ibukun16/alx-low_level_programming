#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array
 * @a: The pointer variable of the array
 * @n: The index of the array element
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);
		if (count < n)
			printf(", ");
	}
	printf("\n");
}
