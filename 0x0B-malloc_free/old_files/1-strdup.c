#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that return a copied string
 * @str: The string to be copied
 *
 * Return: A pointer to a new string
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int n = 0, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;

	copy = malloc(sizeof(char) * (size + 1));

	if (copy == NULL)
		return (NULL);
	while ((copy[n] = str[n]) != '\0')
		n++;

	return (copy);
}


