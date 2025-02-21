#include "main.h"
#include <stdio.h>

/**
 * _strcmp - A function that compares two strings
 * @s1: The first string variable
 * @s2: The second string variable to compare
 *
 * Return: The compared string.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s2 == *s1))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
