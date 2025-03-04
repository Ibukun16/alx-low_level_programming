#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - A function that creates new dog
 *
 * @name: The name of the new dog
 * @age: The age of the new dog
 * @owner: The owner of the new dog
 *
 * Return: pointer to the new dog else return NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mem;
	int l1, l2;

	l1 = str_len(name);
	l2 = str_len(owner);

	mem = malloc(sizeof(dog_t));
	if (mem == NULL)
		return (NULL);
	mem->name = malloc(sizeof(char) * (l1 + 1));
	if (mem->name == NULL)
	{
		free(mem);
		return (NULL);
	}
	mem->owner = malloc(sizeof(char) * (l2 + 1));
	if (mem->owner == NULL)
	{
		free(mem);
		free(mem->name);
		return (NULL);
	}
	str_cpy(mem->name, name);
	str_cpy(mem->owner, owner);
	mem->age = age;

	return (mem);
}

/**
 * str_len - A function that calculate string length
 * @str: string to evaluate
 *
 * Return: Length of the calculated string
 */
int str_len(char *str)
{
	int n = 0;

	while (str[n] != '\0')
		n++;

	return (n);
}

/**
 * str_cpy - A function that copy a string into a memory space
 * @d: pointer to the destination memory space
 * @sc: The string to copy
 *
 * Return: the pointer to the destination.
 */
char *str_cpy(char *d, char *sc)
{
	int l = 0, n;

	while (sc[l] != '\0')
		l++;
	for (n = 0; n < l; n++)
		d[n] = sc[n];
	d[n] = '\0';

	return (d);
}
