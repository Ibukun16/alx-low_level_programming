#include "dog.h"
#include <stdlib.h>
/**
 * str_len - a function that returns the length of a string
 * @s: The string in consideration
 *
 * Return: length of a string
 */
int str_len(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * str_cpy - a function that copies a string from a source to a destination
 * and terminate to a new line.
 * @src: The source where the string is copied from
 * @dest: The buffer where the string is copied into
 *
 * Return: a pointer to the destination.
 */
char *str_cpy(char *dest, char *src)
{
	int i, l;

	for (l = 0; src[l]; l++)
		;

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: success - pointer to buffer storing the new dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;
	int l1, l2;

	l1 = str_len(name);
	l2 = str_len(owner);

	nw_dog = malloc(sizeof(dog_t));
	if (nw_dog == NULL)
		return (NULL);
	nw_dog->name = malloc(sizeof(char) * (l1 + 1));
	if (nw_dog->name == NULL)
	{
		free(nw_dog);
		return (NULL);
	}
	nw_dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (nw_dog->owner == NULL)
	{
		free(nw_dog);
		free(nw_dog->name);
		return (NULL);
	}
	str_cpy(nw_dog->name, name);
	str_cpy(nw_dog->owner, owner);
	nw_dog->age = age;

	return (nw_dog);
}
