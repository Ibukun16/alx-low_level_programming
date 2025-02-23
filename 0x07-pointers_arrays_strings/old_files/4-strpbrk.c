#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - A function that searches a string for set of bytes
 * @s: The string to search
 * @accept: identified set of byte returned
 *
 * Return: A pointer to the set of bytes identified.
 * or return NULL if no byte in set is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (*s != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (*s == accept[b])
			{
				return (s);
			}
			b++;
		}
		s++;
		a++;
	}
	return (NULL);
}
