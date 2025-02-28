#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenate two strings
 * @s1: Pointer to the first string variable
 * @s2: Pointer to the second string variable
 *
 * @n: The integer variable of number of bytes to concatenate in s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2, count, idx;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (count = 0; count < len1; count++)
		concat[count] = s1[count];
	for (idx = 0; idx < n; count++, idx++)
		concat[count] = s2[idx];
	concat[count] = '\0';
	return (concat);
}

/**
 * _strlen - A function that finds string length.
 * @str: The string to find its length
 *
 * Return: the string length, else 0.
 */
int _strlen(char *str)
{
	int count = 0;

	while (*(str + count))
		count++;

	return (count);
}
