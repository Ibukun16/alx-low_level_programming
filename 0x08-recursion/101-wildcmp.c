#include "main.h"
#include <stdio.h>

/**
 * wildcmp - A function that compares two strings for
 * identical consideration.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: 1 if strings are identical, else 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
	}
	return (0);
}
