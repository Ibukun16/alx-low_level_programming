#include "main.h"
#include <stdio.h>

/**
 * _strstr - A function that locates a substring in a given string
 * @haystack: Pointer to the given main string
 * @needle: Pointer to the substring to locate
 *
 * Return: A pointer to the beginning of the located substring, else NUUL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	for (; *haystack; haystack++)
	{
		for (h = haystack, n = needle; *h && *n && *h == *n; h++, n++)
			;
		if (*n == '\0')
			return (haystack);
	}
	return (NULL);
}
