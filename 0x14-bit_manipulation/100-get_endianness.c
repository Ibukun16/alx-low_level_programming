#include "main.h"
/**
 * get_endianness - A funtion that check the endianness of a stored data.
 *
 * Return: 0 for big endianness, and 1 for small endianness.
 */
int get_endianness(void)
{
	int i = 1;
	char *v;

	v = (char *)&i;
	return (*v);
}
