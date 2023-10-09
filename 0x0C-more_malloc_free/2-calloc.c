#include "main.h"
#include <stdlib.h>
/**
 *_calloc - A funtion that assign memory for an array
 * @nmemb: The array to allocate memory for
 * @size: The size of the array
 *
 * Return:pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (x = 0; x < nmemb * size; x++)
		p[x] = 0;

	return (p);
}

