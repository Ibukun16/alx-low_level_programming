#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - A function that reallocate a memory block using malloc and free
 * @ptr: pointer to the reallocated memeory.
 * @old_size: The old memory size to reallocate.
 * @new_size: The new memory size to be allocated
 *
 * Return: The reallocated memory space.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem;
	unsigned int count, limit;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_mem = malloc(new_size);
		return (new_mem);
	}


	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	limit = old_size > new_size ? new_size : old_size;

	new_mem = malloc(new_size);
	if (new_mem == NULL)
		return (NULL);

	for (count = 0; count < limit; count++)
		*(new_mem + count) = *((char *)ptr + count);

	free(ptr);

	return (new_mem);
}
