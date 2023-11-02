#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *str_concat - A function that concatenate 2 strings and
 * allocate memory of the concatenated result
 * @s1: String 1 to concatenate
 * @s2: String 2 to concatenate
 *
 * Return: A pointer to the memory space for concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, l;
	char *s;

	if (s1 == NULL)
		l1 = 0;
	else
	{
		for (l1 = 0; s1[l1]; l1++)
			;
	}
	if (s2 == NULL)
		l2 = 0;
	else
	{
		for (l2 = 0; s2[l2]; l2++)
			;
	}

	s = malloc(sizeof(char) * (l1 + l2 + 1));

	if (s == NULL)
		return (NULL);
	for (l = 0; l < l1; l++)
		s[l] = s1[l];
	for (l = 0; l < l2; l++)
		s[l + l1] = s2[l];
	s[l1 + l2] = '\0';
	return (s);
}
