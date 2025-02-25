#include "main.h"
#include <stdio.h>

/**
 * _strspn - A functio that obtains the length of a prefix string
 * @s: Pointer to the string varibale
 * @accept: The acceptable bytes to be checked in the string s
 *
 * Return: The length of the string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *a;

	for (; *s; s++)
	{
		for (a = accept; *a; a++)
			if (*s == *a)
			{
				n++;
				break;
			}
		if (*a == '\0')
			break;
	}
	return (n);
}
