#include "main.h"
#include <stdio.h>

/**
 * get_endianness - A function that checks the endianness
 *
 * Return: 0 if big endian, else 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c;

	c = (char *)&i;
	return (*c);
}
