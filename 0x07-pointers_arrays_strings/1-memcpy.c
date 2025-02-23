#include "main.h"
#include <stdio.h>

/**
 * _memcpy - A function that copies memory area
 * @dest: The pointer to the destination variable
 * @src: The pointer to the copy source variable
 * @n: The size of the area to copy
 *
 * Return: The pointer to the copied area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

