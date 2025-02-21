#include "main.h"
#include <stdio.h>

/**
 * _strcat - A function that concatenates two strings
 * @dest: The destination variable
 * @src: The source variable
 *
 * Return: The concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int c, n;

	for (c = 0; dest[c] != '\0'; c++)
		;

	for (n = 0; src[n] != '\0'; n++, c++)
		dest[c] = src[n];

	dest[c] = '\0';

	return (dest);
}

