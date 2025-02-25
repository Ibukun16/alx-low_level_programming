#include "main.h"
#include <stdio.h>

/**
 * _memset - A function that fills memory with a constant byte
 * @s: pointer to the string variable
 * @b: The byte to fill the memory area
 * @n: The memory area pointed by n that is filled by b
 *
 * Return: pointer to the memory filled by b
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
