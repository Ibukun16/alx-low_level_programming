#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - A function that creates a new dog
 * @name: Pointer to the dog name variable
 * @age: The ae of the dog
 * @owner: Pointer to the dow owner variable
 *
 * Return: pointer to the new dog, else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int len1 = 0, len2 = 0, n;

	while (name[len1])
		len1++;

	while (owner[len2])
		len2++;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = malloc(sizeof(char) * (len1 + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (n = 0; n < len1; n++)
		*(ndog->name + n) = *(name + n);
	*(ndog->name + len1) = '\0';
	ndog->age = age;

	ndog->owner = malloc(sizeof(char) * (len2 + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	for (n = 0; n < len2; n++)
		*(ndog->owner + n) = *(owner + n);
	*(ndog->owner + len2) = '\0';

	return (ndog);
}
