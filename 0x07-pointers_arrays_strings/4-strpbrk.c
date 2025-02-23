#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - A function that searches a string for any set of bytes
 * @s: Pointer to the string to search
 * @accept: Pointer to the string to search for
 *
 * Return: The string found
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	for (; *s; s++)
		for (a = accept; *a; a++)
			if (*s == *a)
				return (s);
	return (NULL);
}
