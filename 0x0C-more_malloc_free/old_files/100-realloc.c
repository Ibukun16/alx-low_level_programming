#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_realloc - reallocate a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: size of the new memory block allocated to malloc
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem, *old_p;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}


	if (!ptr)
		return (malloc(new_size));

	mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);

	old_p = ptr;

	if (new_size < old_size)
	{
		for (n = 0; n < new_size; n++)
			mem[n] = old_p[n];
	}
	if (new_size > old_size)
	{
		for (n = 0; n < old_size; n++)
			mem[n] = old_p[n];
	}
	free(ptr);
	return (mem);
}
