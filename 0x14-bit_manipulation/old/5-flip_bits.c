#include "main.h"
/**
 * flip_bits - A function that specified the number of bits to flip
 * to move from one number to another.
 * @n: The current number
 * @m: The destination number
 *
 * Return: The number of flips to do to get to destination number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int src, dest, count = 0;

	while (!(n == 0 && m == 0))
	{
		src = n & 1;
		dest = m & 1;
		n = n >> 1;
		m = m >> 1;
		if (src != dest)
			count += 1;
	}
	return (count);
}
