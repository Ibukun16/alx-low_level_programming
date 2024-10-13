#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - A function that allocates memory for an array.
 *
 * @nmemb: member of elements of an array.
 * @size: size of the array.
 *
 * Return: A pointer to the  allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem, a = 0;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	for (n = 0; n < (size * nmemb); n++)
		mem[n] = a;
	return (mem);
}
