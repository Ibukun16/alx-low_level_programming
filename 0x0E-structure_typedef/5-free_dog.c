#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - A function that free the memory space created for dog
 * @d: The struct dog to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d);
		free(d->owner);
	}
}
