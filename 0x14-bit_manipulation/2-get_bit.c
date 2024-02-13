#include "main.h"
/**
 * get_bit - A function that get the value of a bit at a given index
 * @n: The bit value at the specified index
 * @index: The specified index to get the bit value.
 *
 * Return: The value of the bit at that index of -1 for error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (index == 0)
		return (n & 1);
	return (get_bit(n >> 1, --index));
}
