#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *_realloc - A function that reallocate a memory block
 * @ptr: The pointer to the reallocated memory block
 * @old_size: The old size of the allocated memory block to malloc
 * @new_size: The size of the new memory
 *
 * Return: A pointer to the new allocated memory space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free (ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	p = malloc (new_size);
	free (ptr);
	return (p);
}
