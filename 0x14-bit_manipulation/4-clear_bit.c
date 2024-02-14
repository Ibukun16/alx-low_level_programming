#include "main.h"
/**
 * clear_bit - A function that set the value of bit to 0 at a given index
 * @n: Pointer to the value of bit at the specified index.
 * @index: The specified index
 *
 * Return: 1 for success, -1 for error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int sum;

	if (index > 63)
		return (-1);
	sum = 1 << index;
	*n = *n & (~sum);
	return (1);
}
