#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of the dog to initialize
 * @age: age of the dog to initialize
 * @owner: name of the owner of the dog to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
