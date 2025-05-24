#include "main.h"
#include <stdio.h>

/**
 * flip_bits - A function that determines the number of bits to
 * flip to get from one number to another
 * @n: The integer variable that stores the number to move from
 * @m: The integer variable that stores the number to get to
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
