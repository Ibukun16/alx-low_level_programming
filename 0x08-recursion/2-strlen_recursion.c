#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - A function that calculate the length of a
 * string by recursion.
 * @s: Pointer to the string
 *
 * Return: The string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

