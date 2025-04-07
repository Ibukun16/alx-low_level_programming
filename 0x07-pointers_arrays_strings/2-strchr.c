#include "main.h"
#include <stdio.h>

/**
 * _strchr - A function that locates a character in a string
 * @s: Pointer to a string variable
 * @c: The character to locate in a string
 *
 * Return: A pointer to the first occurrence of the given character
 * in the string, else NULL.
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
		if (*s == c)
			return (s);
	return (NULL);
}
