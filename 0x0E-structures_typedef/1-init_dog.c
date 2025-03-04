#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - A function that initializes a variable of type struct dog
 * @d: Pointer to the dog initial
 * @name: Pointer to the variable, dog name
 * @age: The float variable that holds the dog age
 * @owner: Pointer to the variable dog age
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
