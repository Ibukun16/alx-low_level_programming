#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees memory allocated to struct dog
 * @d: The memory to be freed
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
