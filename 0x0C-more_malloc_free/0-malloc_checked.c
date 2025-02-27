#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: The integer variable to allocate memory for
 *
 * Return: pointer to allocated memory, else status value 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
