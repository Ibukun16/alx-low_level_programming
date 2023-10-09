#include "main.h"
#include <stdlib.h>
/**
 *_realloc - A function that reallocate memory block using
 * malloc and free
 * @ptr: pointer to the reallocate block
 * @old_size: the former memory space
 * @new_size: the realloccated memory block
 *
 * Return: pointer to the new memory space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *dest, *src;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	dest = malloc(new_size);
	if (dest == NULL)
		return (NULL);

	src = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			dest[a] = src[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			dest[a] = src[a];
	}
	free(ptr);
	return (dest);
}

