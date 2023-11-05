#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_calloc - A function that allocate an array
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 *
 * Return: Pointer to the allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (n = 0; n < nmemb * size; n++)
	{
		p[n] = '\0';
	}
	return (p);
}
