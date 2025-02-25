#include <stdlib.h>
#include "dog.h"

/** init_dog - A function that initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: The name variable
 * @age: The age variable
 * @owner: The owner variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
