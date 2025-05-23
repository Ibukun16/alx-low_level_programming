#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: The variable containing the value
 * @index: The given index to find the stored value
 *
 * Return: The value of the bit stored at the given index, else -1 for error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	return ((n >> index) & 1);
}
