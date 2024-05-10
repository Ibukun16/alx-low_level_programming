#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that cretaes an array of character
 *		and initializes it with a specific char.
 *
 * @size: The size of the array
 * @c: The character to initialize in the array
 *
 * Return: The initialized character in the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (0);

	for (a = 0; a < size; a++)
		ptr[a] = c;

	ptr[a] = '\0';

	return (ptr);
}
