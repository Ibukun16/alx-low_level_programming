#include "main.h"
/**
 * wildcmp - A function that compares 2 strings and determines
 * if they are identical.
 * @s1: The first string in focus
 * @s2: The second string in focus
 *
 * Return: 0 for non-identical strings, 1 for identical strings.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	else if (*s1 == '\0' ||  *s2 == '\0')
		return (0);

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
	{
		if (*s1 == '\0' && *(s2 + 1) != '\0')
			return (0);
		else if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
	}
	return (0);
}
