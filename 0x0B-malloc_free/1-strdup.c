#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly
 * allocated memory space, which contains copy of a given string.
 * @str: The string variable to be copied
 *
 * Return: Pointer to the newly allocated memory space.
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int size, count;

	if (str == NULL)
		return (NULL);

	while (*(str + size))
		size++;

	ar = malloc(sizeof(char) * (size + 1));
	if (ar == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		*(ar + count) = *(str + count);

	*(ar + size) = '\0';
	return (ar);
}
