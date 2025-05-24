#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @n: Pointer to the integer variable that stores the value
 * @index: The index where the value to be set is stored
 *
 * Return: 1 function is successful else -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
