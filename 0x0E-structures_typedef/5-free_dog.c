#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - a function that frees the memory space allocated
 * for dog and its attributes
 * @d: The struct of dog to be freed
 *
 * Return: Freed memory space
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
