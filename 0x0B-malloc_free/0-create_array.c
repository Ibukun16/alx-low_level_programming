#include "main.h"
#include <stdlib.h>
/**
 * char *create_array - A function that creates an array of character,
 * and initializes it with a specific character.
 * @size: The size of the array to create
 * @c: The character that initaializes the array
 *
 * Return: Array content
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	*(ptr + i) = '\0';
	return (ptr);
}



