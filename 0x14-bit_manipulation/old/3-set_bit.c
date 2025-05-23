#include "main.h"
/**
 * set_bit - A function that set the value of bit to 1 at a given index
 * @n: Pointer to the value of bit.
 * @index: The specified index
 *
 * Return: 1 for success, -1 for error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int sum_up;

	if (index > 63)
		return (-1);
	sum_up = 1 << index;
	*n = *n | sum_up;
	return (1);
}

