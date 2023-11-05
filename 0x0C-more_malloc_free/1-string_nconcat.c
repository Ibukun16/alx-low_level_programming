#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - A function that concatenate two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of integer of string 2 to concatenate
 *
 * Return: Pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, l1, l2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x]; x++)
		;
	for (y = 0; s2[y]; y++)
		;
	if (n >= y)
		n = y;
	str = malloc(sizeof(char) * (x + n + 1));
	if (!str)
		return (NULL);
	for (l1 = 0; s1[l1]; l1++)
		str[l1] = s1[l1];
	for (l2 = x; l2 < x + n; l2++)
		str[l2] = s2[l2 - x];
	str[l2] = '\0';
	return (str);
}
