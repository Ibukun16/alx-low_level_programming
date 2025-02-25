#include "main.h"
#include <stdio.h>

/**
 * _strncat - A function that concatenates two strings
 * @dest: The destination variable
 * @src: The source variable
 * @n: The size of element in source to concatenate
 *
 * Return: The concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	for (c = 0; dest[c] != '\0'; c++)
		;

	for (i = 0; src[i] != '\0' && i < n; c++, i++)
		dest[c] = src[i];

	dest[c] = '\0';

	return (dest);
}

