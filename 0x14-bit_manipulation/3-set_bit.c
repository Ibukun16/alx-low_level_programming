#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * set_bit - A function that set the value of a bit to 1 at a given index
 * @n: Pointer to the variable containing the value
 * @index: The given index to find the value
 *
 * Return: 1 if it worked, else -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);
	*n |= (1UL << index);
	return (1);
}
