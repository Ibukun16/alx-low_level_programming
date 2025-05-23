#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_to_uint - A function that converts a binary number to integer
 * @b: Pointer to char containing the binary string
 *
 * Return: The converted number or 0 if
 * There is one of more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		res = (res << 1) | (*b - '0');
		b++;
	}
	return (res);
}
