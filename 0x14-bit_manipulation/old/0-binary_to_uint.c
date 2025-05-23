#include "main.h"
/**
 * binary_to_uint - A function that convert a binary number to
 * an unsigned integer.
 * @b: A pointer to the string of 0 and 1.
 *
 * Return: The converted number or 0 if the string contain
 * at least one none 0 or 1 character, or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;

	if (!b)
		return (0);
	for (uint = 0; *b; b++)
	{
		uint = uint << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			uint = uint | 1;
	}
	return (uint);
}
