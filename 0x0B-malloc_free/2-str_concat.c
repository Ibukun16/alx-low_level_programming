#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - A function that concatenate two strings
 * @s1: The first string variable
 * @s2: The second string variable to concatenate
 *
 * Return: The concatenated string, else NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int n1 = 0, n2 = 0, count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + n1) != '\0')
		n1++;
	while (*(s2 + n2) != '\0')
		n2++;

	concat = malloc(sizeof(char) * (n1 + n2 + 1));
	if (concat == NULL)
		return (NULL);

	for (count = 0; count < n1; count++)
		*(concat + count) = *(s1 + count);

	for (count = 0; count < n2;  count++)
		*(concat + n1 + count) = *(s2 + count);

	*(concat + n1 + n2) = '\0';
	return (concat);
}

