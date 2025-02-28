#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array using malloc
 * @nmemb: The size of the array of elements to allocate memory for
 * @size: The size of the of byte to allocate memory for
 *
 * Return: Pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int idx;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	for (idx = 0; idx < nmemb * size; idx++)
		mem[idx] = 0;

	return ((void *)mem);
}
