#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates array of chars and initializes it
 * @size: The size of the array
 * @c: The array variable
 *
 * Return: Pointer to the array, else NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int n;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		ar[n] = c;

	return (ar);
}
