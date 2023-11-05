#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *malloc_checked - A function that allocate memory using malloc
 * @b: The number of byte of memory to allocate
 *
 * Return: A pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
