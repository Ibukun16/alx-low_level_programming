#include "main.h"
#include <stdio.h>

/**
 * swap_int - A function that swaps the value of two integers
 * @a: The first of the 2 integers for the swap.
 * @b: The second integer for the swap.
 *
 * Return: void;
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
