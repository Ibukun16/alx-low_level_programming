#include "main.h"
/**
 * swap_int - This function swap the values of two integers
 * @a: The first integer in consideration
 * @b: The second integer in consideration
 *
 * Return: Always success (0).
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
