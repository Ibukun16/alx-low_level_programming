#include <stdio.h>
#include "dog.h"

/**
 * print_dog - A function that prints a struct dog
 *
 * @d: The structure to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age == 0)
		d->age = 0;
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf(" Name: %s\n Age: %f\n Owner: %s\n", d->name, d->age, d->owner);
}
